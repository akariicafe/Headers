@class NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WKWallpaperBundleImporter : NSObject

@property (class, readonly, nonatomic) WKWallpaperBundleImporter *defaultWallpaperBundleImporter;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_bundleImportQueue;
@property (retain, nonatomic) NSArray *_wallpaperTypesOrdering;
@property (retain, nonatomic) NSDictionary *_wallpaperTypeToBundleCollection;
@property (readonly, nonatomic) long long numberOfWallpaperBundleCollections;

+ (id)wallpapersConfigurationFileURL;

- (void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_loadWallpapersFromDisk;
- (id)wallpaperBundleCollectionForWallpaperType:(unsigned long long)a0;
- (id)wallpaperBundleWithIdentifier:(long long)a0;
- (unsigned long long)wallpaperTypeAtIndex:(long long)a0;

@end
