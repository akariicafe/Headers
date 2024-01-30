@interface SBHUDSettings : PTSettings

@property (nonatomic) float defaultHUDPresentationAnimationDuration;
@property (nonatomic) BOOL volumeButtonRemappingEnabled;
@property (nonatomic) BOOL lockVolumePolarityForHUD;
@property (nonatomic) BOOL listenToDeviceOrientationWhileScreenIsOff;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
