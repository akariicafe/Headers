@class VCAudioIO, NSString, VCAudioPayload, NSObject;
@protocol OS_dispatch_queue, VCMediaStreamDelegate;

@interface VCVirtualTTYDevice : NSObject <VCMediaStreamProtocol, VCTextSender, VCAudioIOSink, VCAudioIOSource, VCAudioIODelegate> {
    int _clientPid;
    struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } _vpioFormat;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } sessionLock;
    int _state;
    VCAudioPayload *_currentAudioPayload;
    VCAudioIO *_audioIO;
    struct SoundDec_t { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x1; int x2; int x3; struct OpaqueAudioConverter *x4; char *x5; int x6; struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } x7; struct AudioBufferList *x8; struct AudioBufferList *x9; char *x10; char *x11; int x12; int x13; int x14; int x15; unsigned char x16; int x17; int x18; unsigned int x19; unsigned int x20; struct CMRData { unsigned int x0; unsigned int x1; struct EVSRFParams { unsigned int x0; unsigned int x1; } x2; } x21; BOOL x22; unsigned char x23; BOOL x24; unsigned char x25; int x26; BOOL x27; struct EVSRFParams { unsigned int x0; unsigned int x1; } x28; struct EVSRFParams { unsigned int x0; unsigned int x1; } x29; } *_decoder;
    struct opaqueCMSimpleQueue { } *_charQueue;
    struct tagVCMemoryPool { struct { void *x0; long long x1; } x0; unsigned long long x1; } *_characterPool;
    id _textStream;
}

@property (nonatomic) NSObject<VCMediaStreamDelegate> *delegate;
@property BOOL isValid;
@property int deviceRole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lock;
- (void)unlock;
- (id)setPause:(BOOL)a0;
- (void)dealloc;
- (id)stop;
- (id)start;
- (BOOL)canProcessAudio;
- (void)didResumeAudioIO:(id)a0;
- (void)didServerDie;
- (void)didSuspendAudioIO:(id)a0;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (id)initWithMode:(long long)a0 clientPid:(int)a1;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList { } *)a0;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { } *)a0;
- (void)sendCharacter:(unsigned short)a0;
- (void)sendText:(id)a0;
- (void)setCanProcessAudio:(BOOL)a0;
- (BOOL)setStreamConfig:(id)a0 withError:(id *)a1;

@end
