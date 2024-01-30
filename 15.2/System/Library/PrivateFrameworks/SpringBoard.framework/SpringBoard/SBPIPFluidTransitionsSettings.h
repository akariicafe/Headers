@class SBFFluidBehaviorSettings;

@interface SBPIPFluidTransitionsSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *sourceClippingFluidBehavior;
@property (retain, nonatomic) SBFFluidBehaviorSettings *targetClippingFluidBehavior;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
