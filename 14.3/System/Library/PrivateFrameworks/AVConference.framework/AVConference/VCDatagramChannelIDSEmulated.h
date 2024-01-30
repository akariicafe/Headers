@class VCEmulatedNetwork, VCDatagramChannelIDS;

@interface VCDatagramChannelIDSEmulated : VCDatagramChannelIDS {
    long long _mode;
    VCDatagramChannelIDS *_idsChannel;
    VCEmulatedNetwork *_network;
    struct tagVCMemoryPool { struct { void *x0; long long x1; } x0; unsigned long long x1; } *_datagramMetaDataPool;
    int _packetCount;
    BOOL _isStarted;
}

- (void)setEventHandler:(id /* block */)a0;
- (id)destination;
- (void)dealloc;
- (id)defaultLink;
- (void)readyToRead;
- (void)setChannelPreferences:(id)a0;
- (void)osChannelInfoLog;
- (id)connectedLinks;
- (void)writeDatagrams:(const void **)a0 datagramsSize:(unsigned int *)a1 datagramsInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } *)a2 datagramsCount:(int)a3 options:(struct **)a4 completionHandler:(id /* block */)a5;
- (void)writeDatagram:(const void *)a0 datagramSize:(unsigned int)a1 datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })a2 options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; } *)a3 completionHandler:(id /* block */)a4;
- (void)setReadHandler:(id /* block */)a0;
- (void)setWiFiAssist:(BOOL)a0;
- (void)requestSessionInfoWithOptions:(id)a0;
- (unsigned int)token;
- (int)start;
- (void)invalidate;
- (id)initWithIDSDatagramChannel:(id)a0 mode:(long long)a1;
- (void)optInStreamIDs:(id)a0;
- (void)optOutStreamIDs:(id)a0;
- (BOOL)writeToEmulatedNetworkWithDatagram:(const void *)a0 datagramSize:(unsigned int)a1 datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })a2 options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12]; unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; } *)a3;
- (void)setupEmulatedNetwork;

@end
