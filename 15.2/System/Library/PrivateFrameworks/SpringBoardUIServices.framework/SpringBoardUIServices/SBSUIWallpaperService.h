@interface SBSUIWallpaperService : NSObject

+ (id)getWallpaperLegibilitySettingsForVariant:(id)a0;
+ (id)_setupAndActivateServiceConnection;
+ (BOOL)setWallpaperImage:(id)a0 adjustedImage:(id)a1 thumbnailData:(id)a2 imageHashData:(id)a3 wallpaperOptions:(id)a4 forLocations:(id)a5 currentWallpaperMode:(id)a6;
+ (void)setProceduralWallpaperIdentifier:(id)a0 options:(id)a1 locations:(id)a2;
+ (void)removeWallpaperVideo;
+ (BOOL)setWallpaperWithVideo:(id)a0 sandboxToken:(id)a1 cropRect:(id)a2 wallpaperMode:(id)a3;
+ (void)restoreDefaultWallpaper;
+ (BOOL)setWallpaperColor:(id)a0 darkColor:(id)a1 forLocations:(id)a2;
+ (BOOL)setWallpaperGradient:(id)a0 forLocations:(id)a1;
+ (id)getWallpaperOptionsForVariant:(id)a0;

@end
