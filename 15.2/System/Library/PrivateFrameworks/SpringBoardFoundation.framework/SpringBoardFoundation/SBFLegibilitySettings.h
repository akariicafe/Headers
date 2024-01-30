@interface SBFLegibilitySettings : PTSettings

@property double slideToUnlockDarkShadowStrength;
@property double slideToUnlockLightShadowStrength;
@property double appIconGrabberDarkShadowStrength;
@property double appIconGrabberLightShadowStrength;
@property double timeDarkShadowStrength;
@property double timeLightShadowStrength;
@property double dateDarkShadowStrength;
@property double dateLightShadowStrength;
@property double statusTextDarkShadowStrength;
@property double statusTextLightShadowStrength;
@property double iconLabelDarkShadowStrength;
@property double iconLabelLightShadowStrength;
@property double folderTitleDarkShadowStrength;
@property double folderTitleLightShadowStrength;
@property double timerTextDarkShadowStrength;
@property double timerTextLightShadowStrength;
@property double timerDialDarkShadowStrength;
@property double timerDialLightShadowStrength;
@property double logoutButtonGlyphDarkShadowStrength;
@property double logoutButtonGlyphLightShadowStrength;
@property double logoutButtonTextDarkShadowStrength;
@property double logoutButtonTextLightShadowStrength;
@property double userPictureDarkShadowStrength;
@property double userPictureLightShadowStrength;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (double)folderTitleStrengthForStyle:(long long)a0;
- (double)slideToUnlockStrengthForStyle:(long long)a0;
- (double)dateStrengthForStyle:(long long)a0;
- (double)statusTextStrengthForStyle:(long long)a0;
- (double)timerTextStrengthForStyle:(long long)a0;
- (double)timerDialStrengthForStyle:(long long)a0;
- (double)logoutButtonGlyphStrengthForStyle:(long long)a0;
- (double)timeStrengthForStyle:(long long)a0;
- (double)logoutButtonTextStrengthForStyle:(long long)a0;
- (double)iconLabelStrengthForStyle:(long long)a0;
- (double)userPictureStrengthForStyle:(long long)a0;
- (double)appIconGrabberStrengthForStyle:(long long)a0;

@end
