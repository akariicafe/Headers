@class NSString, VCAudioIOControllerClient;
@protocol VCAudioIOSink, VCAudioIOSource, VCAudioIOControllerControl;

@interface VCAudioIO : NSObject <VCAudioIOControllerDelegate> {
    id<VCAudioIOControllerControl> _audioIOController;
    VCAudioIOControllerClient *_controllerClient;
    id _delegate;
    id _sourceDelegate;
    id _sinkDelegate;
    unsigned int _controllerSamplesPerFrame;
    BOOL _isControllerAudioFormatValid;
    BOOL _isControllerReset;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateMutex;
    id /* block */ _startCompletionBlock;
    id /* block */ _stopCompletionBlock;
    struct _VCAudioEndpointData { struct SoundDec_t *converter; BOOL isConverterNeeded; struct opaqueVCAudioBufferList *converterBuffer; BOOL isLastHostTimeValid; double lastHostTime; unsigned int lastTimestamp; unsigned int timestampOffset; BOOL controllerChanged; BOOL isMuted; unsigned int framesProcessed; id<VCAudioIOSink, VCAudioIOSource> delegate; void /* function */ *clientCallback; void *clientContext; } _sourceData;
    struct _VCAudioEndpointData { struct SoundDec_t *converter; BOOL isConverterNeeded; struct opaqueVCAudioBufferList *converterBuffer; BOOL isLastHostTimeValid; double lastHostTime; unsigned int lastTimestamp; unsigned int timestampOffset; BOOL controllerChanged; BOOL isMuted; unsigned int framesProcessed; id<VCAudioIOSink, VCAudioIOSource> delegate; void /* function */ *clientCallback; void *clientContext; } _sinkData;
}

@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } controllerFormat;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } clientAudioFormat;
@property (readonly, nonatomic) unsigned int samplesPerFrame;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property (nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property (nonatomic) BOOL isGKVoiceChat;
@property (nonatomic) unsigned char direction;
@property (readonly, nonatomic) unsigned int state;
@property (readonly, nonatomic) unsigned int pullAudioSamplesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controllerForDeviceRole:(int)a0;

- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)initWithConfiguration:(struct _VCAudioIOInitConfiguration { int x0; int x1; unsigned char x2; BOOL x3; id x4; int x5; id x6; void /* function */ *x7; void *x8; id x9; void /* function */ *x10; void *x11; } *)a0;
- (void)stopWithCompletionHandler:(id /* block */)a0;
- (void)forceCleanup;
- (id)delegate;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo { unsigned char x0[64]; unsigned char x1[64]; unsigned int x2; } *)a0;
- (void)didStart:(BOOL)a0 error:(id)a1;
- (void)controllerFormatChanged:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (void)didStop:(BOOL)a0 error:(id)a1;
- (void)setRemoteCodecType:(unsigned int)a0 sampleRate:(double)a1;
- (BOOL)reconfigureWithOperatingMode:(int)a0 deviceRole:(int)a1 direction:(unsigned char)a2 allowAudioRecording:(BOOL)a3;
- (void)setClientFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (void)spatialAudioSourceIDChanged:(unsigned long long)a0;
- (void)didResume;
- (void)releaseConverters;
- (id)stopWithCompletionHandlerInternal:(id /* block */)a0;
- (BOOL)createConverterForSource:(BOOL)a0 error:(id *)a1;
- (void)didSuspend;

@end
