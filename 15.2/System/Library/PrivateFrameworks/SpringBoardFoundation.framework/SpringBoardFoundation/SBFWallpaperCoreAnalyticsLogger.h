@class SBWallpaperDefaults, NSString;

@interface SBFWallpaperCoreAnalyticsLogger : NSObject {
    SBWallpaperDefaults *_wallpaperDefaults;
    NSString *_homeName;
    NSString *_homeType;
    NSString *_lockName;
    NSString *_lockType;
    BOOL _irisEnabled;
    BOOL _sharedWallpaper;
}

@property (nonatomic) unsigned long long ageOfWallpaper;

- (void).cxx_destruct;
- (id)init;
- (void)saveStateOfWallpaperToCoreAnalytics:(long long)a0 withHasVideo:(BOOL)a1 hasProcedural:(BOOL)a2 name:(id)a3;
- (void)sendStateOfWallpaperToCoreAnalytics;

@end
