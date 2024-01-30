@interface VCTransportStreamGFT : NSObject {
    unsigned int _transportSessionID;
    int _vtpReceiveSocket;
    int _vtpCancelSocket;
    id /* block */ _callback;
    void *_callbackContext;
    int _vtpCallbackId;
    struct fd_set { int fds_bits[32]; } _readFDsForCallback;
}

@property (nonatomic) struct tagVCMediaQueue { } *mediaQueue;

- (void)dealloc;
- (int)receivePacket:(struct { unsigned char x0; double x1; unsigned char x2[1472]; int x3; int x4; struct tagVCIDSChannelDataFormat { unsigned short x0[12]; unsigned char x1; BOOL x2; unsigned short x3; unsigned char x4; BOOL x5; BOOL x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; unsigned short x11; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x12; BOOL x13; BOOL x14; BOOL x15; unsigned long long x16; BOOL x17; unsigned short x18; BOOL x19; BOOL x20; BOOL x21; } x5; } *)a0;
- (int)VCTransportStreamSendPacket:(struct { unsigned char x0; double x1; unsigned char x2[1472]; int x3; int x4; struct tagVCIDSChannelDataFormat { unsigned short x0[12]; unsigned char x1; BOOL x2; unsigned short x3; unsigned char x4; BOOL x5; BOOL x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; unsigned short x11; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x12; BOOL x13; BOOL x14; BOOL x15; unsigned long long x16; BOOL x17; unsigned short x18; BOOL x19; BOOL x20; BOOL x21; } x5; } *)a0;
- (void)VCTransportStreamUnblock;
- (id)initWithTransportSessionID:(unsigned int)a0 options:(id)a1;
- (void)processVTPPacket:(struct _VTPPacket { double x0; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x1; unsigned int x2; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x3; struct tagVPKTFLAG { int x0; unsigned int x1; unsigned int x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; int x7; int x8; struct tagVCSourceDestinationInfo { int x0; union { struct { struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x0; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x1; struct { BOOL x0; unsigned short x1; } x2; } x0; struct { int x0; int x1; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x2; int x3; } x1; struct { unsigned int x0; struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } x1; BOOL x2; } x2; struct { id x0; } x3; } x1; unsigned int x2; struct tagVCSourceDestinationInfo *x3; void *x4; } x9; unsigned char x10; int x11; int x12; int x13; int x14; int x15; BOOL x16; BOOL x17; BOOL x18; struct tagVCIDSChannelDataFormat { unsigned short x0[12]; unsigned char x1; BOOL x2; unsigned short x3; unsigned char x4; BOOL x5; BOOL x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; unsigned short x11; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x12; BOOL x13; BOOL x14; BOOL x15; unsigned long long x16; BOOL x17; unsigned short x18; BOOL x19; BOOL x20; BOOL x21; } x19; struct tagPKT_TAG { unsigned long long x0[4]; } x20; unsigned int x21; unsigned char x22[16]; BOOL x23; BOOL x24; } x4; struct VCBlockBuffer_t { struct OpaqueCMBlockBuffer *x0; unsigned long long x1; char *x2; } x5; } *)a0;
- (int)registerPacketCallbackContext:(void *)a0 callback:(id /* block */)a1;
- (int)unregisterPacketCallback;

@end
