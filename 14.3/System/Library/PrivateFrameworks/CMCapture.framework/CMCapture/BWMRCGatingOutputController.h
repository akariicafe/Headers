@class NSString, NSArray, BWNodeOutput, BWSceneStabilityMonitor;

@interface BWMRCGatingOutputController : NSObject <BWMRCDetectedResultsObserver> {
    NSString *_name;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastDetectionPTS;
    NSArray *_detectionFrameRateRamp;
    char _detectionFrameRateRampStartIndex;
    BWSceneStabilityMonitor *_sceneStabilityMonitor;
    BOOL _emittedFirstBufferAfterSceneChange;
    BOOL _isSmartCameraSceneConfident;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _detectedCodesLastSeenPTS;
    char _detectionFrameRateRampIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) BWNodeOutput *nodeOutput;
@property (nonatomic) BOOL usesSceneClassifierToGateDetection;
@property (nonatomic) BOOL sceneMotionEstimatesSupported;
@property (nonatomic) BOOL lowPowerModeEnabled;
@property (readonly, nonatomic) BOOL shouldRunDetection;
@property (readonly, nonatomic) BOOL shouldApplySceneMotion;
@property (readonly, nonatomic, getter=isHandlingFirstBufferAfterSceneChange) BOOL handlingFirstBufferAfterSceneChange;
@property (readonly, nonatomic) BOOL shouldEmitBuffer;
@property (readonly, nonatomic) BOOL sceneLikelyToHaveCodes;
@property (nonatomic, getter=isSmartCameraSceneConfident) BOOL smartCameraSceneConfident;
@property (nonatomic) long long lastDetectedCodesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)node:(id)a0 didEmitCodesCount:(long long)a1 originalPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)_updateSceneLikelyToHaveCodes;
- (struct opaqueCMSampleBuffer { } *)_newOutputSampleBufferWithPixelBuffer:(struct __CVBuffer { } *)a0 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)setLastDetectedCodesCount:(long long)a0 originalPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithOutput:(id)a0 name:(id)a1 sceneStabilityMonitor:(id)a2;
- (void)enableDetectionFrameRateControllingWithRamp:(id)a0 startIndex:(char)a1;
- (void)prepareToEmitBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)emitPixelBuffer:(struct __CVBuffer { } *)a0 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;

@end
