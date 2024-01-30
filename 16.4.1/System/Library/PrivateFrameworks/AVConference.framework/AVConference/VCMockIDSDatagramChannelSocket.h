@interface VCMockIDSDatagramChannelSocket : VCMockIDSDatagramChannel {
    struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } _remoteAddress;
    struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } _localAddress;
}

- (void)dealloc;
- (int)readyToRead;
- (void)writeDatagram:(const void *)a0 datagramSize:(unsigned int)a1 datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })a2 options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; unsigned char x13[16]; BOOL x14; BOOL x15; } *)a3 completionHandler:(id /* block */)a4;
- (void)writeDatagram:(const void *)a0 datagramSize:(unsigned int)a1 flags:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })a2 completionHandler:(id /* block */)a3;
- (void)writeDatagrams:(const void **)a0 datagramsSize:(unsigned int *)a1 datagramsInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } *)a2 datagramsCount:(int)a3 options:(struct **)a4 completionHandler:(id /* block */)a5;
- (id)initRequiresOptions:(BOOL)a0 localIP:(id)a1 localPort:(short)a2 remoteIP:(id)a3 remotePort:(short)a4;
- (void)setAllSubscribedStreamIDsOnOptions:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; unsigned char x13[16]; BOOL x14; BOOL x15; } *)a0;
- (void)setIsHopByHopEncryptedOnOptions:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; unsigned char x13[16]; BOOL x14; BOOL x15; } *)a0;
- (void)writeDatagram:(const void *)a0 datagramSize:(unsigned int)a1;

@end
