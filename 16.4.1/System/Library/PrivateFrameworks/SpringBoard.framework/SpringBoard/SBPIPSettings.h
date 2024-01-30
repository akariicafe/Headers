@class SBPIPInteractionSettings, SBPIPStashVisualSettings, SBPIPFadeInOutSettings, SBPIPShadowSettings, SBPIPSizingSettings, SBPIPFluidTransitionsSettings;

@interface SBPIPSettings : PTSettings

@property (retain, nonatomic) SBPIPStashVisualSettings *stashVisualSettings;
@property (retain, nonatomic) SBPIPInteractionSettings *interactionSettings;
@property (retain, nonatomic) SBPIPFluidTransitionsSettings *fluidTransitionsSettings;
@property (retain, nonatomic) SBPIPFadeInOutSettings *fadeInOutSettings;
@property (retain, nonatomic) SBPIPShadowSettings *shadowSettings;
@property (retain, nonatomic) SBPIPSizingSettings *sizingSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;

@end
