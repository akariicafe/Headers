@class NSObject;
@protocol VCTextFrameReceiver, OS_dispatch_source;

@interface VCTextJitterBuffer : NSObject {
    struct tagVCTextJitterBufferConfiguration { unsigned int sampleRate; id<VCTextFrameReceiver> delegate; } _configuration;
    BOOL _resetRequested;
    id _delegate;
    struct JitterPreloadQueue_t { } *_preloadQueue;
    struct JitterQueue_t { } *_jitterQueue;
    NSObject<OS_dispatch_source> *_heartbeat;
    unsigned int _lastSequenceNumber;
    BOOL _firstFrameReceived;
}

- (void)dealloc;
- (void)stop;
- (id)initWithConfiguration:(struct tagVCTextJitterBufferConfiguration { unsigned int x0; id x1; } *)a0;
- (BOOL)start;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (struct tagAudioPacket { int x0; int x1; int x2; BOOL x3; unsigned short x4; unsigned int x5; int x6; double x7; int x8; unsigned char x9[1472]; int x10; unsigned char x11[256]; unsigned char x12; struct tagAudioFrame *x13[4]; int x14; double x15; int x16; struct tagDecoderSettings *x17; BOOL x18; unsigned int x19; unsigned char x20; unsigned short x21; } *)allocTextPacket;
- (void)releaseTextPacket:(struct tagAudioPacket { int x0; int x1; int x2; BOOL x3; unsigned short x4; unsigned int x5; int x6; double x7; int x8; unsigned char x9[1472]; int x10; unsigned char x11[256]; unsigned char x12; struct tagAudioFrame *x13[4]; int x14; double x15; int x16; struct tagDecoderSettings *x17; BOOL x18; unsigned int x19; unsigned char x20; unsigned short x21; } *)a0;
- (void)enqueuePacket:(struct tagAudioPacket { int x0; int x1; int x2; BOOL x3; unsigned short x4; unsigned int x5; int x6; double x7; int x8; unsigned char x9[1472]; int x10; unsigned char x11[256]; unsigned char x12; struct tagAudioFrame *x13[4]; int x14; double x15; int x16; struct tagDecoderSettings *x17; BOOL x18; unsigned int x19; unsigned char x20; unsigned short x21; } *)a0;
- (struct tagAudioFrame { int x0; int x1; BOOL x2; unsigned short x3; unsigned int x4; unsigned char x5[800]; int x6; int x7; unsigned char x8[16]; unsigned char x9; int x10; int x11; double x12; int x13; void /* function */ *x14; void *x15; struct tagDecoderSettings *x16; BOOL x17; unsigned int x18; unsigned char x19; unsigned short x20; struct tagAudioFrame *x21; struct tagAudioFrame *x22; } *)allocTextFrame;
- (BOOL)startHeartbeat;
- (void)stopHeartbeat;
- (void)heartbeat;
- (void)jitterQueuePushPacket:(struct tagAudioPacket { int x0; int x1; int x2; BOOL x3; unsigned short x4; unsigned int x5; int x6; double x7; int x8; unsigned char x9[1472]; int x10; unsigned char x11[256]; unsigned char x12; struct tagAudioFrame *x13[4]; int x14; double x15; int x16; struct tagDecoderSettings *x17; BOOL x18; unsigned int x19; unsigned char x20; unsigned short x21; } *)a0;
- (void)releaseTextFrame:(struct tagAudioFrame { int x0; int x1; BOOL x2; unsigned short x3; unsigned int x4; unsigned char x5[800]; int x6; int x7; unsigned char x8[16]; unsigned char x9; int x10; int x11; double x12; int x13; void /* function */ *x14; void *x15; struct tagDecoderSettings *x16; BOOL x17; unsigned int x18; unsigned char x19; unsigned short x20; struct tagAudioFrame *x21; struct tagAudioFrame *x22; } *)a0;

@end
