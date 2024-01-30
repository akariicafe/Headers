@class NSDictionary, NSDate;

@interface PBUIWallpaperDefaultsDomain : BSAbstractDefaultDomain

@property (nonatomic) NSDictionary *homeScreenWallpapers;
@property (nonatomic) NSDictionary *lockScreenWallpapers;
@property (nonatomic) BOOL enableWallpaperDimming;
@property (retain, nonatomic) NSDate *dateWallpaperLastChanged;
@property (retain, nonatomic) NSDate *dateIrisWallpaperLastPlayed;
@property (nonatomic) unsigned long long irisWallpaperPlayCount;
@property (readonly, nonatomic) BOOL legacyUsesUniqueHomeScreenWallpaper;

- (id)init;
- (void)_bindAndRegisterDefaults;
- (void)clearLegacyDefaults;

@end
