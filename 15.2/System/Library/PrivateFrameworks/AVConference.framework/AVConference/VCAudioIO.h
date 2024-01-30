@class NSString, VCAudioIOControllerClient;
@protocol VCAudioIOSink, VCAudioIOSource, VCAudioIOControllerControl;

@interface VCAudioIO : NSObject <VCAudioIOControllerDelegate> {
    id<VCAudioIOControllerControl> _audioIOController;
    VCAudioIOControllerClient *_controllerClient;
    id _delegate;
    id _sourceDelegate;
    id _sinkDelegate;
    struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } _clientFormat;
    struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } _controllerFormat;
    BOOL _isControllerAudioFormatValid;
    BOOL _isControllerReset;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateMutex;
    id /* block */ _startCompletionBlock;
    id /* block */ _stopCompletionBlock;
    struct _VCAudioEndpointData { struct SoundDec_t *converter; BOOL isConverterNeeded; BOOL isAccumulatorNeeded; unsigned int samplesPerFrame; struct opaqueVCAudioBufferList *sampleBuffer; struct opaqueVCAudioBufferList *clientBuffer; struct opaqueVCAudioBufferList *controllerBuffer; BOOL isLastHostTimeValid; double lastHostTime; unsigned int lastTimestamp; unsigned int timestampOffset; BOOL controllerChanged; BOOL isMuted; unsigned int framesProcessed; id<VCAudioIOSink, VCAudioIOSource> delegate; void /* function */ *clientCallback; void *clientContext; } _sourceData;
    struct _VCAudioEndpointData { struct SoundDec_t *converter; BOOL isConverterNeeded; BOOL isAccumulatorNeeded; unsigned int samplesPerFrame; struct opaqueVCAudioBufferList *sampleBuffer; struct opaqueVCAudioBufferList *clientBuffer; struct opaqueVCAudioBufferList *controllerBuffer; BOOL isLastHostTimeValid; double lastHostTime; unsigned int lastTimestamp; unsigned int timestampOffset; BOOL controllerChanged; BOOL isMuted; unsigned int framesProcessed; id<VCAudioIOSink, VCAudioIOSource> delegate; void /* function */ *clientCallback; void *clientContext; } _sinkData;
    unsigned int _audioType;
}

@property (readonly, nonatomic) const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *controllerFormat;
@property (readonly, nonatomic) const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *clientFormat;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property (nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property (nonatomic) BOOL isGKVoiceChat;
@property (nonatomic) unsigned char direction;
@property (readonly, nonatomic) unsigned int state;
@property (readonly, nonatomic) unsigned int pullAudioSamplesCount;
@property (nonatomic) BOOL spatialAudioDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newControllerForDeviceRole:(int)a0 forAudioType:(unsigned int)a1 forDirection:(unsigned char)a2;

- (void)stopWithCompletionHandler:(id /* block */)a0;
- (void)didResume;
- (void)setClientFormat:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)a0;
- (id)start;
- (id)initWithConfiguration:(struct _VCAudioIOInitConfiguration { unsigned int x0; unsigned int x1; int x2; int x3; unsigned int x4; unsigned char x5; BOOL x6; id x7; int x8; id x9; void /* function */ *x10; void *x11; id x12; void /* function */ *x13; void *x14; unsigned int x15; unsigned int x16; BOOL x17; unsigned long long x18; unsigned int x19; } *)a0;
- (id)delegate;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (id)stop;
- (void)forceCleanup;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo { unsigned char x0[64]; unsigned char x1[64]; unsigned int x2; } *)a0;
- (void)didStart:(BOOL)a0 error:(id)a1;
- (void)controllerFormatChanged:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)a0;
- (void)didStop:(BOOL)a0 error:(id)a1;
- (BOOL)reconfigureWithOperatingMode:(int)a0 deviceRole:(int)a1 direction:(unsigned char)a2 allowAudioRecording:(BOOL)a3;
- (void)setRemoteCodecType:(unsigned int)a0 sampleRate:(double)a1;
- (void)setupClientFormatWithConfiguration:(struct _VCAudioIOInitConfiguration { unsigned int x0; unsigned int x1; int x2; int x3; unsigned int x4; unsigned char x5; BOOL x6; id x7; int x8; id x9; void /* function */ *x10; void *x11; id x12; void /* function */ *x13; void *x14; unsigned int x15; unsigned int x16; BOOL x17; unsigned long long x18; unsigned int x19; } *)a0;
- (id)stopWithCompletionHandlerInternal:(id /* block */)a0;
- (void)releaseConverters;
- (void)destroyBuffers;
- (BOOL)createConverterForSource:(BOOL)a0 error:(id *)a1;
- (void)didSuspend;

@end
