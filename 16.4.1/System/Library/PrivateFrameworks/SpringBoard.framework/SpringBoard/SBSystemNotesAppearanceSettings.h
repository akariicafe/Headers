@interface SBSystemNotesAppearanceSettings : PTSettings

@property (nonatomic) double platterTintRed;
@property (nonatomic) double platterTintGreen;
@property (nonatomic) double platterTintBlue;
@property (nonatomic) double platterTintAlpha;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
