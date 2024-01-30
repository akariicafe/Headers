@class SBFFluidBehaviorSettings;

@interface SBAppSwitcherOrbGestureAnimationSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *popToSwitcherSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *peekingAndPanningSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *breathingSettings;
@property (nonatomic) double response;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;

@end
