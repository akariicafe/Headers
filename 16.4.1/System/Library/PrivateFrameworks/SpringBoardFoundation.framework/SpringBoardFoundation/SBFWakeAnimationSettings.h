@class SBFAnimationSettings;

@interface SBFWakeAnimationSettings : PTSettings

@property (nonatomic) double backlightFadeDuration;
@property (nonatomic) double speedMultiplierForWake;
@property (nonatomic) double speedMultiplierForLiftToWake;
@property (retain, nonatomic) SBFAnimationSettings *contentWakeSettings;
@property (nonatomic) double awakeColorBrightness;
@property (nonatomic) double awakeDateAlpha;
@property (retain, nonatomic) SBFAnimationSettings *awakeWallpaperFilterSettings;
@property (nonatomic) double sleepColorBrightness;
@property (retain, nonatomic) SBFAnimationSettings *sleepWallpaperFilterSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
