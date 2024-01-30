@interface ARFLSpring : NSObject {
    struct ARFLCompoundSpring { struct ARFLSimpleSpringState { double position; double velocity; } state; struct ARFLSimpleSpring { struct ARFLSimpleSpringState { double position; double velocity; } state; double mass; double stiffness; double damping; double anchor; double stablePositionThreshold; double stableVelocityThreshold; } stiffness; struct ARFLSimpleSpring { struct ARFLSimpleSpringState { double position; double velocity; } state; double mass; double stiffness; double damping; double anchor; double stablePositionThreshold; double stableVelocityThreshold; } damping; struct ARFLSimpleSpring { struct ARFLSimpleSpringState { double position; double velocity; } state; double mass; double stiffness; double damping; double anchor; double stablePositionThreshold; double stableVelocityThreshold; } dampingRatio; struct ARFLSimpleSpring { struct ARFLSimpleSpringState { double position; double velocity; } state; double mass; double stiffness; double damping; double anchor; double stablePositionThreshold; double stableVelocityThreshold; } response; struct ARFLSimpleSpring { struct ARFLSimpleSpringState { double position; double velocity; } state; double mass; double stiffness; double damping; double anchor; double stablePositionThreshold; double stableVelocityThreshold; } anchor; BOOL usesDampingRatioResponse; } _s;
    double _targetVelocity;
    double _previousTarget;
    BOOL _transitioningFromTracking;
}

@property (nonatomic) double retargetResponseFraction;
@property (nonatomic) double projectionDeceleration;
@property (nonatomic) double value;
@property (nonatomic) double target;
@property (nonatomic) double velocity;
@property (readonly, nonatomic) double projectedTarget;
@property (nonatomic) struct ARFLSpringParameters { double dampingRatio; double dampingRatioSmoothing; double response; double responseSmoothing; } parameters;
@property (nonatomic) struct ARFLSpringParameters { double dampingRatio; double dampingRatioSmoothing; double response; double responseSmoothing; } trackingParameters;
@property (nonatomic, getter=isTracking) BOOL tracking;
@property (nonatomic) double minimumTarget;
@property (nonatomic) double maximumTarget;
@property (nonatomic) double rubberbandRange;
@property (nonatomic) double rubberbandFactor;

+ (id)springWithValue:(double)a0;

- (void)setVelocity:(double)a0;
- (id)initWithValue:(double)a0;
- (double)value;
- (double)target;
- (void)step:(double)a0;
- (id)init;
- (double)velocity;
- (void)setTarget:(double)a0;
- (void)setValue:(double)a0;
- (double)projectedTarget;
- (struct ARFLSpringParameters { double x0; double x1; double x2; double x3; })_effectiveParameters;
- (double)_projectedTargetForVelocity:(double)a0;
- (void)_updateForEffectiveParameters;
- (void)resetImmediatelyToValue:(double)a0;
- (void)setUsesDampingRatioResponseForSmoothing:(BOOL)a0;
- (BOOL)usesDampingRatioResponseForSmoothing;

@end
