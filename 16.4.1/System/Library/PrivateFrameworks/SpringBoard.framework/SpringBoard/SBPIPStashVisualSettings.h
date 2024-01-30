@class SBPIPStashMaterialSettings;

@interface SBPIPStashVisualSettings : PTSettings

@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic) double startBlurTransition;
@property (nonatomic) double completeBlurTransition;
@property (retain, nonatomic) SBPIPStashMaterialSettings *lightModeMaterialSettings;
@property (retain, nonatomic) SBPIPStashMaterialSettings *darkModeMaterialSettings;

+ (id)settingsControllerModule;
+ (BOOL)ignoresKey:(id)a0;

- (void)setDefaultValues;
- (void).cxx_destruct;
- (id)materialSettingsForUserInterfaceStyle:(long long)a0;

@end
