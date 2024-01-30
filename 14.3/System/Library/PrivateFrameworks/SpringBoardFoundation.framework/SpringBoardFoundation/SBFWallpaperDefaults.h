@class SBWallpaperDefaults, NSMutableDictionary;

@interface SBFWallpaperDefaults : NSObject

@property (readonly, nonatomic) SBWallpaperDefaults *defaultsStore;
@property (readonly, nonatomic) NSMutableDictionary *lockScreenDefaultsStoreWrapper;
@property (readonly, nonatomic) NSMutableDictionary *homeScreenDefaultsStoreWrapper;

+ (id)defaults;

- (void)setStillTimeInVideo:(double)a0;
- (double)stillTimeInVideo;
- (void)setSupportsCropping:(BOOL)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)resetStillTimeInVideoDefaults;
- (id)proceduralOptionsForVariant:(long long)a0;
- (void)resetMagnifyDefaults;
- (void)setMagnifyEnabled:(BOOL)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (id)init;
- (void)resetImageHashDefaults;
- (void).cxx_destruct;
- (id)imageHashForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (BOOL)hasVideo;
- (double)parallaxFactorForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperOptionsForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setHasVideo:(BOOL)a0;
- (void)setProceduralOptions:(id)a0 forLocations:(long long)a1;
- (BOOL)supportsCroppingForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setWallpaperOptions:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (id)_defaultsWrapperForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)resetPortraitDefaults;
- (double)stillTimeInVideoForVariant:(long long)a0;
- (void)resetCroppingDefaults;
- (void)setProceduralIdentifier:(id)a0 forLocations:(long long)a1;
- (void)setColorName:(id)a0 forLocations:(long long)a1;
- (id)description;
- (void)setName:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (id)proceduralIdentifierForVariant:(long long)a0;
- (id)wallpaperColorDataForVariant:(long long)a0;
- (id)wallpaperColorNameForVariant:(long long)a0;
- (void)setColorData:(id)a0 forLocations:(long long)a1;
- (void)setPortrait:(BOOL)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)updateDefaultsForLocations:(long long)a0 updater:(id /* block */)a1;
- (double)zoomScaleForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)resetDefaults;
- (void)resetWallpaperKitDataDefaults;
- (void)setZoomScale:(double)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)_updateDefaultsForVariant:(long long)a0 wallpaperMode:(long long)a1 updater:(id /* block */)a2;
- (id)initWithDefaultsStore:(id)a0;
- (void)resetHasVideoDefaults;
- (BOOL)isPortraitForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (id)wallpaperKitDataForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)setGradientData:(id)a0 forLocations:(long long)a1;
- (void)setImageHash:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (void)resetParallaxFactorDefaults;
- (BOOL)proceduralUserSetForVariant:(long long)a0;
- (void)setWallpaperKitData:(id)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (BOOL)hasVideoForVariant:(long long)a0;
- (void)setParallaxFactor:(double)a0 forLocations:(long long)a1 wallpaperMode:(long long)a2;
- (id)_keyForWallpaperMode:(long long)a0;
- (id)nameForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (void)resetNameDefaults;
- (void)resetZoomScaleDefaults;
- (id)wallpaperGradientDataForVariant:(long long)a0;
- (void)_setDefaultsWithDictionary:(id)a0 variant:(long long)a1 wallpaperMode:(long long)a2;
- (void)setProceduralUserSet:(BOOL)a0 forLocations:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRectForVariant:(long long)a0 wallpaperMode:(long long)a1;
- (BOOL)magnifyEnabledForVariant:(long long)a0 wallpaperMode:(long long)a1;

@end
