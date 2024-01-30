@class NSString;

@interface SBFFluidBehaviorSettings : PTSettings <UIViewSpringAnimationBehaviorDescribing>

@property (nonatomic) long long behaviorType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double deceleration;
@property (nonatomic) double dampingRatio;
@property (nonatomic) double response;
@property (nonatomic) double retargetImpulse;
@property (nonatomic) double trackingDampingRatio;
@property (nonatomic) double trackingResponse;
@property (nonatomic) double trackingRetargetImpulse;
@property (nonatomic) BOOL smoothingAndProjectionEnabled;
@property (nonatomic) double dampingRatioSmoothing;
@property (nonatomic) double responseSmoothing;
@property (nonatomic) double trackingDampingRatioSmoothing;
@property (nonatomic) double trackingResponseSmoothing;
@property (nonatomic) double inertialTargetSmoothingRatio;
@property (nonatomic) double inertialProjectionDeceleration;

+ (id)_moduleWithSectionTitle:(id)a0;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)settlingDuration;
- (void)setDefaultValues;
- (double)_effectiveTrackingDampingRatio;
- (double)_effectiveTrackingResponse;
- (double)_effectiveTrackingRetargetImpulse;
- (void)setDefaultCriticallyDampedValues;
- (struct { double x0; double x1; BOOL x2; BOOL x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })parametersForTransitionFromState:(int)a0 toState:(int)a1;

@end
