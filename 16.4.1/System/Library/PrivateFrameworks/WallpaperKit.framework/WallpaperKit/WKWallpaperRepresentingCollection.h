@class NSString, NSMapTable, NSUUID, NSMutableArray, WKWallpaperBundleDownloadManager;
@protocol WKWallpaperRepresenting;

@interface WKWallpaperRepresentingCollection : NSObject

@property (retain, nonatomic) NSString *wallpaperCollectionIdentifier;
@property (retain, nonatomic) WKWallpaperBundleDownloadManager *downloadManager;
@property (retain, nonatomic) NSMutableArray *_wallpaperBundles;
@property (retain, nonatomic) NSMapTable *_wallpaperLookupTable;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL supportsDownloading;
@property (readonly, nonatomic) long long numberOfWallpapers;
@property (readonly, nonatomic) unsigned long long source;
@property (readonly, nonatomic) BOOL wallpapersShareBaseAppearance;
@property (readonly, nonatomic) id<WKWallpaperRepresenting> previewWallpaperRepresenting;

+ (BOOL)shouldLoadWallpaperCollectionAtURL:(id)a0;
+ (id)_loadWallpaperRepresentingContentFromURL:(id)a0 collectionMetadata:(id)a1 isLegacyContent:(BOOL)a2;
+ (id)_loadCollectionMetadataWithURL:(id)a0;
+ (void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)a0 collectionURL:(id)a1;

- (id)initWithURL:(id)a0 downloadManager:(id)a1;
- (BOOL)containsWallpaperRepresentingWithIdentifier:(id)a0;
- (id)wallpaperRepresentingWithIdentifier:(id)a0;
- (id)wallpaperBundleAtIndex:(long long)a0;
- (id)initWithWallpaperCollectionIdentifier:(id)a0 displayName:(id)a1 previewWallpaperRepresenting:(id)a2 wallpapersShareBaseAppearance:(BOOL)a3 wallpaperRepresentingCollection:(id)a4 downloadManager:(id)a5;
- (void)downloadWallpaperRepresentingWithIdentifier:(id)a0 progress:(id)a1 completion:(id /* block */)a2;
- (void)cancelDownloadForWallpaperRepresentingWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
