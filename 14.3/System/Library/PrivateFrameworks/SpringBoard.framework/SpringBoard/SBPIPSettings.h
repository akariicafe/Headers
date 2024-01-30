@class SBPIPInteractionSettings, SBPIPFluidTransitionsSettings;

@interface SBPIPSettings : PTSettings

@property (retain, nonatomic) SBPIPInteractionSettings *interactionSettings;
@property (retain, nonatomic) SBPIPFluidTransitionsSettings *fluidTransitionsSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;

@end
