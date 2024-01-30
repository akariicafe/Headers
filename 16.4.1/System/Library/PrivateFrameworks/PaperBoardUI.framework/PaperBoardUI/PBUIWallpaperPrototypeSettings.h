@class PTOutlet, PBUIWallpaperParallaxSettings;

@interface PBUIWallpaperPrototypeSettings : PTSettings

@property (retain, nonatomic) PTOutlet *resetWallpaperOutlet;
@property (retain, nonatomic) PBUIWallpaperParallaxSettings *homeScreenParallaxSettings;
@property (retain, nonatomic) PBUIWallpaperParallaxSettings *lockScreenParallaxSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parallaxSettingsForVariant:(long long)a0;
- (void).cxx_destruct;

@end
