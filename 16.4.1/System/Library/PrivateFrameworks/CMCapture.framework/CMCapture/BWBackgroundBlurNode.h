@class BWNodeInput, NSString, BWDeviceOrientationMonitor, PTEffect, BWNodeOutput, BWStats, BWLimitedGMErrorLogger;

@interface BWBackgroundBlurNode : BWNode <BWFigVideoCaptureDevicePortraitEffectStudioLightQualityChangedDelegate> {
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    PTEffect *_ptEffect;
    long long _effectQuality;
    BOOL _stillImageCaptureEnabled;
    struct OpaqueVTPixelTransferSession { } *_stillImagePixelTransferSession;
    struct { struct __CVBuffer *pixelBuffer; struct { long long value; int timescale; unsigned int flags; long long epoch; } pts; } _stillCaptureQueue[2];
    unsigned int _stillCaptureEnqueueIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    BWStats *_backgroundBlurProcessingTimeStats;
    int _numberOfFramesThatCouldNotBeBlurred;
    int _maxThermalSystemPressurelLevel;
    BOOL _previousEffectBypassed;
    int _maxLossyCompressionLevel;
    BOOL _fastSwitchEnabled;
    unsigned long long _availablePTEffects;
    unsigned long long _previousPTEffect;
    BOOL _isContinuityCapture;
    BOOL _upstreamDeviceOrientationCorrectionEnabled;
    BWDeviceOrientationMonitor *_deviceOrientationMonitor;
}

@property (readonly, nonatomic) BWNodeInput *videoInput;
@property (readonly, nonatomic) BWNodeOutput *videoOutput;
@property (readonly, nonatomic) BWNodeInput *stillImageInput;
@property (readonly, nonatomic) BWNodeOutput *stillImageOutput;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) BOOL effectBypassed;
@property (nonatomic) unsigned long long activeBlurEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)didChangePortraitEffectStudioLightQuality:(long long)a0;
- (id)initWithStillImageCaptureEnabled:(BOOL)a0 maxLossyCompressionLevel:(int)a1 fastSwitchEnabled:(BOOL)a2 availableEffects:(unsigned long long)a3 activeEffect:(unsigned long long)a4 isHighQualitySupported:(BOOL)a5 isRunningForContinuityCapture:(BOOL)a6 upstreamDeviceOrientationCorrectionEnabled:(BOOL)a7;

@end
