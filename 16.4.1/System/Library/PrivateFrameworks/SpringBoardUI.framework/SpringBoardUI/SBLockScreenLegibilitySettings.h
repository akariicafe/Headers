@class UIColor;

@interface SBLockScreenLegibilitySettings : _UILegibilitySettings

@property (retain, nonatomic) UIColor *backgroundColorHint;
@property (nonatomic) BOOL vibrancyDisabled;

+ (id)defaultSettings;

- (void).cxx_destruct;

@end
