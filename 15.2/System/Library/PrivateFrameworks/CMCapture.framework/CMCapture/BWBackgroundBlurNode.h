@class BWNodeInput, NSString, PTEffect, BWNodeOutput, BWStats, BWLimitedGMErrorLogger;

@interface BWBackgroundBlurNode : BWNode {
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
}

@property (readonly, nonatomic) BWNodeInput *videoInput;
@property (readonly, nonatomic) BWNodeOutput *videoOutput;
@property (readonly, nonatomic) BWNodeInput *stillImageInput;
@property (readonly, nonatomic) BWNodeOutput *stillImageOutput;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) BOOL effectBypassed;

+ (void)initialize;

- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)_updateOutputRequirements;
- (id)_supportedInputPixelFormats;
- (id)_supportedOutputPixelFormats;
- (void)_savePixelBufferForStillImageCaptureRequests:(struct __CVBuffer { } *)a0 withPts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct __CVBuffer { } *)_createMatchingPixelBufferFromSavedVideoBuffersWithTargetPts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct __CVBuffer { } *)_newStillImageOutputPixelBufferFromVideoPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)_reportBackgroundBlurCoreAnalyticsData;
- (id)initWithStillImageCaptureEnabled:(BOOL)a0 maxLossyCompressionLevel:(int)a1 fastSwitchEnabled:(BOOL)a2;

@end
