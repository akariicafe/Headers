@class SBFWallpaperParallaxSettings, PTOutlet;

@interface SBFWallpaperSettings : PTSettings

@property (retain, nonatomic) PTOutlet *resetWallpaperOutlet;
@property (retain, nonatomic) SBFWallpaperParallaxSettings *homeScreenParallaxSettings;
@property (retain, nonatomic) SBFWallpaperParallaxSettings *lockScreenParallaxSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parallaxSettingsForVariant:(long long)a0;

@end
