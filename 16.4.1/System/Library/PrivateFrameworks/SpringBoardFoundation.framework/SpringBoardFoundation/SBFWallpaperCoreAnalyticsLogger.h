@class PBUIWallpaperDefaultsDomain, NSString;

@interface SBFWallpaperCoreAnalyticsLogger : NSObject {
    PBUIWallpaperDefaultsDomain *_wallpaperDefaultsDomain;
    NSString *_homeType;
    NSString *_lockType;
    NSString *_homeName;
    NSString *_lockName;
    BOOL _irisEnabled;
    BOOL _sharedWallpaper;
}

@property (nonatomic) unsigned long long ageOfWallpaper;

- (id)init;
- (void).cxx_destruct;
- (id)initWithWallpaperDefaultsDomain:(id)a0;
- (void)saveStateOfWallpaperToCoreAnalytics:(long long)a0 withHasVideo:(BOOL)a1 hasProcedural:(BOOL)a2 name:(id)a3;
- (void)sendStateOfWallpaperToCoreAnalytics;

@end
