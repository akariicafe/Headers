@class NSString;

@interface PBFWallpaperKitBridge : NSObject

@property (readonly, nonatomic) NSString *defaultWallpaperIdentifier;
@property (readonly, nonatomic) BOOL shouldInstallCollectionsPosterAsDefaultLockScreenWallpaper;
@property (readonly, nonatomic) BOOL dataMigratorDeterminedLegacyWallpaperMigrationRequired;

+ (id)defaultBridge;

- (void)clearLegacyWallpaperMigrationKeys;

@end
