@class NSString, PTFrameRateRangeSettings;

@interface SBFFluidBehaviorSettings : PTSettings <BSDescriptionProviding, UIViewSpringAnimationBehaviorDescribing>

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
@property (retain, nonatomic) PTFrameRateRangeSettings *preferredFrameRateRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingsControllerModule;
+ (id)_moduleWithSectionTitle:(id)a0;

- (struct { double x0; double x1; BOOL x2; BOOL x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })parametersForTransitionFromState:(int)a0 toState:(int)a1;
- (double)settlingDuration;
- (void)setDefaultValues;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0 highFrameRateReason:(unsigned int)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)BSAnimationSettings;
- (struct CAFrameRateRange { float x0; float x1; float x2; })frameRateRange;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (double)_effectiveTrackingDampingRatio;
- (double)_effectiveTrackingResponse;
- (double)_effectiveTrackingRetargetImpulse;
- (void)setDefaultCriticallyDampedValues;

@end
