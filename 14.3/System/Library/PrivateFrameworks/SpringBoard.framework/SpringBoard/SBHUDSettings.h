@interface SBHUDSettings : PTSettings

@property (nonatomic) float defaultHUDPresentationAnimationDuration;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
