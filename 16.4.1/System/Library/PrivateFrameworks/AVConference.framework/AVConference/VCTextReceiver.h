@class NSArray, VCTextJitterBuffer;
@protocol VCTextReceiverDelegate;

@interface VCTextReceiver : NSObject <VCTextFrameReceiver> {
    struct tagHANDLE { int x0; } *_rtpHandle;
    unsigned int _sampleRate;
    id<VCTextReceiverDelegate> _delegate;
    struct tagVCRealTimeThread { unsigned int x0; unsigned int x1; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x2; id x3; void /* function */ *x4; void *x5; struct OpaqueFigThread *x6; int x7; char x8[60]; unsigned int x9; unsigned int x10; } *_receiverThread;
    VCTextJitterBuffer *_jitterBuffer;
    struct OpaqueVCTransportStreamRunLoop { } *_runLoop;
}

@property (nonatomic) id<VCTextReceiverDelegate> delegate;
@property (retain, nonatomic) NSArray *supportedPayloads;
@property (nonatomic) double lastReceivedRTPPacketTime;
@property (nonatomic) double lastReceivedRTCPPacketTime;

- (void)dealloc;
- (BOOL)stop;
- (BOOL)start;
- (id)initWithConfiguration:(struct _VCTextReceiverConfiguration { struct tagHANDLE *x0; unsigned int x1; BOOL x2; } *)a0;
- (struct tagAudioFrame { int x0; int x1; BOOL x2; unsigned short x3; unsigned int x4; unsigned char x5[800]; int x6; int x7; unsigned char x8[16]; unsigned char x9; int x10; int x11; double x12; int x13; int x14; void /* function */ *x15; void *x16; struct tagDecoderSettings *x17; BOOL x18; unsigned int x19; unsigned char x20; unsigned short x21; struct tagAudioFrame *x22; struct tagAudioFrame *x23; unsigned int x24; } *)allocFrameWithPacket:(struct tagAudioPacket { int x0; int x1; int x2; BOOL x3; unsigned short x4; unsigned int x5; int x6; int x7; double x8; int x9; unsigned char x10[1472]; int x11; unsigned char x12[256]; unsigned char x13; struct tagAudioFrame *x14[4]; int x15; double x16; int x17; struct tagDecoderSettings *x18; BOOL x19; unsigned int x20; unsigned char x21; unsigned short x22; } *)a0 data:(char *)a1 dataLength:(int)a2 timestamp:(unsigned int)a3;
- (void)didDetectMissingFrame;
- (void)didReceiveFrame:(struct tagAudioFrame { int x0; int x1; BOOL x2; unsigned short x3; unsigned int x4; unsigned char x5[800]; int x6; int x7; unsigned char x8[16]; unsigned char x9; int x10; int x11; double x12; int x13; int x14; void /* function */ *x15; void *x16; struct tagDecoderSettings *x17; BOOL x18; unsigned int x19; unsigned char x20; unsigned short x21; struct tagAudioFrame *x22; struct tagAudioFrame *x23; unsigned int x24; } *)a0;
- (BOOL)enqueuePacket:(struct tagAudioPacket { int x0; int x1; int x2; BOOL x3; unsigned short x4; unsigned int x5; int x6; int x7; double x8; int x9; unsigned char x10[1472]; int x11; unsigned char x12[256]; unsigned char x13; struct tagAudioFrame *x14[4]; int x15; double x16; int x17; struct tagDecoderSettings *x18; BOOL x19; unsigned int x20; unsigned char x21; unsigned short x22; } *)a0;
- (void)initializeTextPacket:(struct tagAudioPacket { int x0; int x1; int x2; BOOL x3; unsigned short x4; unsigned int x5; int x6; int x7; double x8; int x9; unsigned char x10[1472]; int x11; unsigned char x12[256]; unsigned char x13; struct tagAudioFrame *x14[4]; int x15; double x16; int x17; struct tagDecoderSettings *x18; BOOL x19; unsigned int x20; unsigned char x21; unsigned short x22; } *)a0 withMediaPacket:(struct _RTPMediaPacket { int x0; int x1; int x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned short x6; BOOL x7; double x8; BOOL x9; BOOL x10; BOOL x11; unsigned long long x12; unsigned short x13[12]; unsigned char x14; unsigned char x15; struct { int x0; int x1; BOOL x2; unsigned long long x3; } x16; unsigned long long x17; struct VCBlockBuffer_t { struct OpaqueCMBlockBuffer *x0; unsigned long long x1; char *x2; } x18; struct VCBlockBuffer_t { struct OpaqueCMBlockBuffer *x0; unsigned long long x1; char *x2; } x19; struct VCBlockBuffer_t { struct OpaqueCMBlockBuffer *x0; unsigned long long x1; char *x2; } x20; BOOL x21; BOOL x22; BOOL x23; } *)a1;
- (BOOL)isSupportedPayload:(int)a0;
- (BOOL)parsePacket:(struct tagAudioPacket { int x0; int x1; int x2; BOOL x3; unsigned short x4; unsigned int x5; int x6; int x7; double x8; int x9; unsigned char x10[1472]; int x11; unsigned char x12[256]; unsigned char x13; struct tagAudioFrame *x14[4]; int x15; double x16; int x17; struct tagDecoderSettings *x18; BOOL x19; unsigned int x20; unsigned char x21; unsigned short x22; } *)a0;
- (void)processRTCPPacket;
- (void)processRTPPacket;
- (void)receiverThreadCallback:(struct tagVCRealTimeThreadParameters { int x0; } *)a0;
- (int)retrieveRTPPacket:(struct tagAudioPacket { int x0; int x1; int x2; BOOL x3; unsigned short x4; unsigned int x5; int x6; int x7; double x8; int x9; unsigned char x10[1472]; int x11; unsigned char x12[256]; unsigned char x13; struct tagAudioFrame *x14[4]; int x15; double x16; int x17; struct tagDecoderSettings *x18; BOOL x19; unsigned int x20; unsigned char x21; unsigned short x22; } *)a0;
- (void)splitPacket:(struct tagAudioPacket { int x0; int x1; int x2; BOOL x3; unsigned short x4; unsigned int x5; int x6; int x7; double x8; int x9; unsigned char x10[1472]; int x11; unsigned char x12[256]; unsigned char x13; struct tagAudioFrame *x14[4]; int x15; double x16; int x17; struct tagDecoderSettings *x18; BOOL x19; unsigned int x20; unsigned char x21; unsigned short x22; } *)a0 packetArray:(struct tagAudioPacketArray { struct tagAudioPacket *x0[100]; unsigned int x1; unsigned int x2; } *)a1;
- (void)validateAndEnqueuePackets:(struct tagAudioPacketArray { struct tagAudioPacket *x0[100]; unsigned int x1; unsigned int x2; } *)a0;

@end
