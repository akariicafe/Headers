@class SBFFluidBehaviorSettings;

@interface SBPIPFluidTransitionsSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *sourceClippingFluidBehavior;
@property (retain, nonatomic) SBFFluidBehaviorSettings *targetClippingFluidBehavior;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;

@end
