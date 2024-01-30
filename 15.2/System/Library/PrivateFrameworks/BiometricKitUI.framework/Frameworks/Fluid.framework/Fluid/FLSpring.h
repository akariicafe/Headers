@interface FLSpring : NSObject {
    struct FLCompoundSpring { struct FLSimpleSpringState { double position; double velocity; } state; struct FLSimpleSpring { struct FLSimpleSpringState { double position; double velocity; } state; double mass; double stiffness; double damping; double anchor; double stablePositionThreshold; double stableVelocityThreshold; } stiffness; struct FLSimpleSpring { struct FLSimpleSpringState { double position; double velocity; } state; double mass; double stiffness; double damping; double anchor; double stablePositionThreshold; double stableVelocityThreshold; } damping; struct FLSimpleSpring { struct FLSimpleSpringState { double position; double velocity; } state; double mass; double stiffness; double damping; double anchor; double stablePositionThreshold; double stableVelocityThreshold; } dampingRatio; struct FLSimpleSpring { struct FLSimpleSpringState { double position; double velocity; } state; double mass; double stiffness; double damping; double anchor; double stablePositionThreshold; double stableVelocityThreshold; } response; struct FLSimpleSpring { struct FLSimpleSpringState { double position; double velocity; } state; double mass; double stiffness; double damping; double anchor; double stablePositionThreshold; double stableVelocityThreshold; } anchor; BOOL usesDampingRatioResponse; double stablePositionThreshold; double stableVelocityThreshold; } _s;
    double _targetVelocity;
    double _previousTarget;
    BOOL _transitioningFromTracking;
}

@property (nonatomic) double retargetResponseFraction;
@property (nonatomic) double projectionDeceleration;
@property (nonatomic) double retargetImpulse;
@property (nonatomic) double value;
@property (nonatomic) double target;
@property (nonatomic) double velocity;
@property (readonly, nonatomic) double projectedTarget;
@property (readonly, nonatomic, getter=isStable) BOOL stable;
@property (nonatomic) double stableValueThreshold;
@property (nonatomic) double stableVelocityThreshold;
@property (nonatomic) struct FLSpringParameters { double dampingRatio; double dampingRatioSmoothing; double response; double responseSmoothing; } parameters;
@property (nonatomic) struct FLSpringParameters { double dampingRatio; double dampingRatioSmoothing; double response; double responseSmoothing; } trackingParameters;
@property (nonatomic, getter=isTracking) BOOL tracking;
@property (nonatomic) double minimumTarget;
@property (nonatomic) double maximumTarget;
@property (nonatomic) double rubberbandRange;
@property (nonatomic) double rubberbandFactor;
@property (nonatomic) double timeFactor;

+ (id)springWithValue:(double)a0;

- (double)target;
- (void)setValue:(double)a0;
- (double)value;
- (void)step:(double)a0;
- (void)setVelocity:(double)a0;
- (id)init;
- (id)initWithValue:(double)a0;
- (void)setTarget:(double)a0;
- (double)velocity;
- (void)resetImmediatelyToValue:(double)a0;
- (double)_projectedTargetForVelocity:(double)a0;
- (struct FLSpringParameters { double x0; double x1; double x2; double x3; })_effectiveParameters;
- (void)_updateForEffectiveParameters;
- (double)projectedTarget;
- (BOOL)usesDampingRatioResponseForSmoothing;
- (void)setUsesDampingRatioResponseForSmoothing:(BOOL)a0;

@end
