@class SBWallpaperDefaults;

@interface SBFWallpaperDefaults : NSObject

@property (readonly, nonatomic) SBWallpaperDefaults *defaultsStore;

+ (id)defaults;

- (double)stillTimeInVideo;
- (void)resetHasVideoDefaults;
- (void)setGradientData:(id)a0 forLocations:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRectForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setMagnifyEnabled:(BOOL)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (id)wallpaperKitDataForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (double)stillTimeInVideoForVariant:(long long)a0;
- (id)wallpaperOptionsForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setParallaxFactor:(double)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (id)wallpaperColorNameForVariant:(long long)a0;
- (id)_defaultsWrapperForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)resetZoomScaleDefaults;
- (id)_keyForWallpaperMode:(long long)a0;
- (void)setProceduralIdentifier:(id)a0 forLocations:(long long)a1;
- (id)initWithDefaultsStore:(id)a0;
- (void)resetParallaxFactorDefaults;
- (void)resetMagnifyDefaults;
- (void)setImageHash:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)setWallpaperKitData:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (id)description;
- (BOOL)magnifyEnabledForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)_updateDefaultsForVariant:(long long)a0 wallpaperMode:(long long)a1 updater:(id /* block */)a2;
- (BOOL)isPortraitForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperColorDataForVariant:(long long)a0;
- (id)imageHashForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void).cxx_destruct;
- (void)setStillTimeInVideo:(double)a0;
- (id)proceduralIdentifierForVariant:(long long)a0;
- (void)setPortrait:(BOOL)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (id)init;
- (double)parallaxFactorForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)supportsCroppingForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)resetDefaults;
- (BOOL)hasVideoForVariant:(long long)a0;
- (void)setZoomScale:(double)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)setColorData:(id)a0 forLocations:(long long)a1;
- (void)updateDefaultsForLocations:(long long)a0 updater:(id /* block */)a1;
- (void)setName:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)resetNameDefaults;
- (id)wallpaperGradientDataForVariant:(long long)a0;
- (void)resetImageHashDefaults;
- (void)setSupportsCropping:(BOOL)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)resetCroppingDefaults;
- (void)setColorName:(id)a0 forLocations:(long long)a1;
- (id)proceduralOptionsForVariant:(long long)a0;
- (void)_setDefaultsWithDictionary:(id)a0 variant:(long long)a1 wallpaperMode:(long long)a2;
- (void)setProceduralOptions:(id)a0 forLocations:(long long)a1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)resetWallpaperKitDataDefaults;
- (BOOL)proceduralUserSetForVariant:(long long)a0;
- (BOOL)hasVideo;
- (id)nameForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (double)zoomScaleForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)resetPortraitDefaults;
- (void)resetStillTimeInVideoDefaults;
- (void)setHasVideo:(BOOL)a0;
- (void)setWallpaperOptions:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)setProceduralUserSet:(BOOL)a0 forLocations:(long long)a1;

@end
