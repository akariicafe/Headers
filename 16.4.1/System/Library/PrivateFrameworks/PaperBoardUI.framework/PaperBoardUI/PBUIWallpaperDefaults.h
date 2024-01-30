@class PBUIWallpaperDefaultsDomain;

@interface PBUIWallpaperDefaults : NSObject

@property (readonly, nonatomic) PBUIWallpaperDefaultsDomain *defaultsDomain;

+ (id)defaults;

- (void)resetStillTimeInVideoDefaults;
- (void)setParallaxFactor:(double)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)setProceduralOptions:(id)a0 forLocations:(long long)a1;
- (void)setSupportsCropping:(BOOL)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (id)wallpaperGradientDataForVariant:(long long)a0;
- (BOOL)magnifyEnabledForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setImageHash:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (double)stillTimeInVideo;
- (void)resetCroppingDefaults;
- (double)zoomScaleForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setMagnifyEnabled:(BOOL)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)setProceduralUserSet:(BOOL)a0 forLocations:(long long)a1;
- (id)proceduralOptionsForVariant:(long long)a0;
- (BOOL)isPortraitForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setWallpaperOptions:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (id)imageHashForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setName:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (id)_keyForWallpaperMode:(long long)a0;
- (void)resetImageHashDefaults;
- (void)setGradientData:(id)a0 forLocations:(long long)a1;
- (id)_defaultsWrapperForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setStillTimeInVideo:(double)a0;
- (BOOL)supportsCroppingForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setColorData:(id)a0 forLocations:(long long)a1;
- (id)wallpaperColorNameForVariant:(long long)a0;
- (void)resetPortraitDefaults;
- (void)setProceduralIdentifier:(id)a0 forLocations:(long long)a1;
- (id)nameForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperColorDataForVariant:(long long)a0;
- (void)resetMagnifyDefaults;
- (void)setZoomScale:(double)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)_updateDefaultsForVariant:(long long)a0 wallpaperMode:(long long)a1 updater:(id /* block */)a2;
- (void)_setDefaultsWithDictionary:(id)a0 variant:(long long)a1 wallpaperMode:(long long)a2;
- (void)updateDefaultsForLocations:(long long)a0 updater:(id /* block */)a1;
- (double)stillTimeInVideoForVariant:(long long)a0;
- (id)wallpaperKitDataForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setHasVideo:(BOOL)a0;
- (id)proceduralIdentifierForVariant:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRectForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)hasVideoForVariant:(long long)a0;
- (void)resetHasVideoDefaults;
- (void)resetNameDefaults;
- (void)resetWallpaperKitDataDefaults;
- (id)wallpaperOptionsForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setWallpaperKitData:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)resetDefaults;
- (id)init;
- (id)initWithdefaultsDomain:(id)a0;
- (double)parallaxFactorForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setColorName:(id)a0 forLocations:(long long)a1;
- (BOOL)proceduralUserSetForVariant:(long long)a0;
- (id)description;
- (void)resetZoomScaleDefaults;
- (BOOL)hasVideo;
- (void)setPortrait:(BOOL)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void).cxx_destruct;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)resetParallaxFactorDefaults;

@end
