#ifndef __UART_H__
#define __UART_H__

#include "config.h"

#define DEBUG  1

void Uart1Init(void);
void Uart2Init(void);
void UART1_SendData(u8 dat);
void UART1_SendString(char *s);
void UART2_SendData(u8 dat);
void UART2_SendString(char *s);

void VDEBUG(char *s);

//����1���ͻس�����
#define UART1_SendLR() UART1_SendData(0X0D);\
											 UART1_SendData(0X0A)
//����2���ͻس�����
#define UART2_SendLR() UART2_SendData(0X0D);\
											 UART2_SendData(0X0A)

#endif