@class SBFFluidBehaviorSettings;

@interface SBAppSwitcherOrbGestureAnimationSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *popToSwitcherSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *peekingAndPanningSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *breathingSettings;
@property (nonatomic) double response;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
