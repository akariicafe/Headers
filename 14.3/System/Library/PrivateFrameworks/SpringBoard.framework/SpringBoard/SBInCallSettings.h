@class SBFFluidBehaviorSettings;

@interface SBInCallSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *transientOverlayFadeInSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *transientOverlayFadeOutSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;

@end
