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

+ (BOOL)isSupported;
+ (BOOL)producesResultDataForAnchorOfClass:(Class)a0;
+ (BOOL)isSupportedWithOptions:(unsigned long long)a0;
+ (double)getHeadingForEnuFromCam:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
+ (long long)getFailureReasonFromVLError:(long long)a0;

- (id)processData:(id)a0;
- (id)initWithAuditToken:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)prepare:(BOOL)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (BOOL)reconfigurableFrom:(id)a0;
- (void)reconfigureFrom:(id)a0;
- (long long)captureBehavior;
- (void /* unknown type, empty encoding */)getLocationFromWorldPosition:(SEL)a0 error:(id *)a1;
- (void)_simulateReplayLocationUpdates:(id)a0;
- (void)_setTrackingState:(long long)a0 techniqueStateObject:(id)a1;
- (void)_estimateEnuFromVioFromCLCM:(id)a0;
- (void)_logVioTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 withTimestamp:(double)a1 withSuffix:(const char *)a2;
- (void)_estimatePose:(id)a0 pose:(id)a1;
- (void)_updateVLStateData:(double)a0;
- (void)_callVLWithHandle:(id)a0 pixelBuffer:(SEL)a1 deviceLocation:(id)a2 heading:(struct __CVBuffer { } *)a3 inputGravity:(id)a4 vioTransform:(struct { double x0; double x1; })a5 cameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a6 radialDistortion:(struct { void /* unknown type, empty encoding */ x0[3]; })a7 exposureTargetOffset:(double)a8 timestamp:(double)a9 completionHandler:(id /* block */)a10;
- (long long)_getHighestPriorityFailureWithTechniqueStateObject:(id)a0;

@end
