@class SBWallpaperDefaults;

@interface SBWallpaperAggdLogger : NSObject {
    long long _aggd_lockscreenWallpaperType;
    long long _aggd_lockscreenWallpaperIdentifier;
    long long _aggd_homescreenWallpaperType;
    long long _aggd_homescreenWallpaperIdentifier;
    long long _aggd_irisWallpaperEnabled;
    long long _aggd_sharedWallpaper;
    SBWallpaperDefaults *_wallpaperDefaults;
}

- (id)init;
- (void).cxx_destruct;
- (id)_valueString;
- (void)incrementIrisPlayCount;
- (void)_clearAggdKeysForLocations:(long long)a0;
- (void)updateWallpaperAggdKeysForLocations:(long long)a0 withHasVideo:(BOOL)a1 hasProcedural:(BOOL)a2 name:(id)a3;
- (void)saveWallpaperAggdCurrentValues;
- (unsigned long long)_bucketedPlayCount;
- (void)_resetPlayCountDate;

@end
