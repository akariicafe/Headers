@class NSObject;
@protocol VCAudioIOControllerDelegate, OS_dispatch_semaphore;

@interface VCAudioIOControllerClient : NSObject {
    id _delegate;
    struct _VCAudioIOControllerClientIO { void *processSamplesContext; void /* function */ *processSamples; NSObject<OS_dispatch_semaphore> *runLock; } _sinkIO;
    struct _VCAudioIOControllerClientIO { void *processSamplesContext; void /* function */ *processSamples; NSObject<OS_dispatch_semaphore> *runLock; } _sourceIO;
}

@property (readonly, nonatomic) int clientPid;
@property (readonly, nonatomic) id<VCAudioIOControllerDelegate> delegate;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format;
@property (nonatomic) int deviceRole;
@property (nonatomic) BOOL allowAudioRecording;
@property (nonatomic) int operatingMode;
@property (nonatomic) unsigned char direction;
@property (readonly, nonatomic) BOOL isRemoteCodecInfoValid;
@property (readonly, nonatomic) unsigned int remoteCodecType;
@property (readonly, nonatomic) double remoteCodecSampleRate;
@property (readonly, nonatomic) BOOL isRemoteVersionInfoValid;
@property (readonly, nonatomic) struct VoiceIOFarEndVersionInfo { unsigned char farEndHwModel[64]; unsigned char farEndOSVersion[64]; unsigned int farEndAUVersion; } farEndVersionInfo;
@property (nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property (nonatomic, getter=isOuputMeteringEnabled) BOOL outputMeteringEnabled;
@property (readonly, nonatomic) struct _VCAudioIOControllerClientIO { void *x0; void /* function */ *x1; id x2; } *sinkIO;
@property (readonly, nonatomic) struct _VCAudioIOControllerClientIO { void *x0; void /* function */ *x1; id x2; } *sourceIO;

- (void)dealloc;
- (id)description;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo { unsigned char x0[64]; unsigned char x1[64]; unsigned int x2; })a0;
- (void)setRemoteCodecType:(unsigned int)a0 sampleRate:(double)a1;
- (void)setClientFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (id)initWithDelegate:(id)a0 sourceContext:(void *)a1 sourceProcess:(void /* function */ *)a2 sinkContext:(void *)a3 sinkProcess:(void /* function */ *)a4 clientPid:(int)a5;

@end
