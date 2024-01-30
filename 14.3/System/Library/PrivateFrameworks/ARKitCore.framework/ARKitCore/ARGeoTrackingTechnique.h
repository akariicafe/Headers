@class ARGeoTrackingTechniqueState, VLTraceRecorder, NSArray, CLSimulationManager, GEOApplicationAuditToken, NSNumber, NSObject;
@protocol OS_dispatch_queue, ARTechniqueForwardingStrategy, ARTechniqueDelegate;

@interface ARGeoTrackingTechnique : ARTechnique <ARGeoTrackingTechniqueProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resultLock;
    NSObject<OS_dispatch_queue> *_visualLocalizationQueue;
    BOOL _deterministic;
    BOOL _useCLCMFusion;
    BOOL _useGradualCorrection;
    BOOL _useVLTraceRecorder;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _statusLock;
    GEOApplicationAuditToken *_auditToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resetLock;
    ARGeoTrackingTechniqueState *_state;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deviceMotionLock;
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
+ (long long)getFailureReasonFromVLError:(long long)a0;

- (id)initWithAuditToken:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)processData:(id)a0;
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
- (void)_estimateEnuFromVioFromCLCM:(id)a0 startState:(id)a1;
- (void)_estimatePose:(id)a0 pose:(id)a1;
- (void)_updateVLStateData:(double)a0;
- (long long)_getHighestPriorityFailureWithTechniqueStateObject:(id)a0;
- (id)_findClosestDataFromBuffer:(id)a0 toTimestamp:(double)a1;

@end
