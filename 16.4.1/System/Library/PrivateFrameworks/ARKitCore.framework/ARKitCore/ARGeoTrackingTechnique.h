@class ARGeoTrackingTechniqueState, VLTraceRecorder, NSArray, CLSimulationManager, GEOApplicationAuditToken, NSNumber, NSObject;
@protocol OS_dispatch_queue, ARTechniqueForwardingStrategy, ARTechniqueDelegate;

@interface ARGeoTrackingTechnique : ARTechnique <ARGeoTrackingTechniqueProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resultLock;
    NSObject<OS_dispatch_queue> *_visualLocalizationQueue;
    BOOL _deterministic;
    BOOL _useCoreLocationFusion;
    BOOL _useCoreMotionFusion;
    BOOL _useGradualCorrection;
    BOOL _useVLTraceRecorder;
    long long _requestResultDataAtTimestampCallCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _statusLock;
    GEOApplicationAuditToken *_auditToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resetLock;
    ARGeoTrackingTechniqueState *_state;
    double _maxHorizontalAccuracy;
}

@property BOOL VLPoseEstimationExecuting;
@property (retain) VLTraceRecorder *VLTraceRecorder;
@property (retain, nonatomic) CLSimulationManager *locationSimulationManager;
@property double visualLocalizationCallInterval;
@property double posteriorVisualLocalizationCallInterval;
@property double visualLocalizationCallIntervalTimeThreshold;
@property BOOL visualLocalizationUpdatesRequested;
@property unsigned long long supportEnablementOptions;
@property (weak) id<ARTechniqueDelegate> delegate;
@property unsigned long long powerUsage;
@property double bonusLatency;
@property (readonly) NSNumber *traceKey;
@property (retain) NSArray *splitTechniques;
@property (retain) id<ARTechniqueForwardingStrategy> splitTechniqueFowardingStrategy;

+ (BOOL)isSupportedWithOptions:(unsigned long long)a0;
+ (BOOL)isSupported;
+ (long long)getFailureReasonFromVLError:(long long)a0;
+ (double)getHeadingForEnuFromCam:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
+ (BOOL)isCameraUp:(float)a0;
+ (BOOL)producesResultDataForAnchorOfClass:(Class)a0;

- (id)initWithAuditToken:(id)a0;
- (void)dealloc;
- (id)processData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)prepare:(BOOL)a0;
- (long long)captureBehavior;
- (void)_simulateReplayLocationUpdates:(id)a0;
- (void)_callVLWithHandle:(id)a0 pixelBuffer:(SEL)a1 deviceLocation:(id)a2 heading:(struct __CVBuffer { } *)a3 inputGravity:(id)a4 vioTransform:(struct { double x0; double x1; })a5 cameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a6 radialDistortion:(struct { void /* unknown type, empty encoding */ x0[3]; })a7 exposureTargetOffset:(double)a8 timestamp:(double)a9 vlDeterminismSemaphore:(id)a10 completionHandler:(id /* block */)a11;
- (void)_estimateEnuFromVioFromCLCM:(id)a0;
- (void)_estimatePose:(id)a0 pose:(id)a1;
- (long long)_getHighestPriorityFailureWithTechniqueStateObject:(id)a0;
- (void)_logVioTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 withTimestamp:(double)a1 withSuffix:(const char *)a2;
- (void)_setTrackingState:(long long)a0 techniqueStateObject:(id)a1;
- (void)_updateVLStateData:(double)a0;
- (void /* unknown type, empty encoding */)getLocationFromWorldPosition:(SEL)a0 error:(id *)a1;
- (BOOL)reconfigurableFrom:(id)a0;
- (void)reconfigureFrom:(id)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (unsigned long long)requiredSensorDataTypes;
- (id)resultDataClasses;

@end
