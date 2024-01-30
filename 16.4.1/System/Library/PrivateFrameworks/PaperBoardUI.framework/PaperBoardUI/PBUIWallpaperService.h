@interface PBUIWallpaperService : NSObject

+ (id)getWallpaperLegibilitySettingsForVariant:(id)a0;
+ (id)_remoteTargetForServiceClientConnection:(id)a0;
+ (id)_setupAndActivateServiceClientConnection;
+ (id)getWallpaperOptionsForVariant:(id)a0;
+ (void)removeWallpaperVideo;
+ (void)restoreDefaultWallpaper;
+ (void)setProceduralWallpaperIdentifier:(id)a0 options:(id)a1 locations:(id)a2;
+ (BOOL)setWallpaperColor:(id)a0 darkColor:(id)a1 forLocations:(id)a2;
+ (BOOL)setWallpaperGradient:(id)a0 forLocations:(id)a1;
+ (BOOL)setWallpaperImage:(id)a0 adjustedImage:(id)a1 thumbnailData:(id)a2 imageHashData:(id)a3 wallpaperOptions:(id)a4 forLocations:(id)a5 currentWallpaperMode:(id)a6;
+ (BOOL)setWallpaperWithVideo:(id)a0 sandboxToken:(id)a1 cropRect:(id)a2 wallpaperMode:(id)a3;

@end
