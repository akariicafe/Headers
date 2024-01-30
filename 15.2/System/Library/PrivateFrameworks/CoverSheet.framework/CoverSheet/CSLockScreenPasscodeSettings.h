@interface CSLockScreenPasscodeSettings : PTSettings

@property (nonatomic) double lightenSourceOverColorWhite;
@property (nonatomic) double lightenSourceOverColorAlpha;
@property (nonatomic) double plusDColorWhite;
@property (nonatomic) double plusDColorAlpha;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
