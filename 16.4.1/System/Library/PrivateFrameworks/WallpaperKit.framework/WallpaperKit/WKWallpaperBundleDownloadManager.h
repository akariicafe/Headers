@class NSObject, NSMutableDictionary, NSString, NSError, NSNumber;
@protocol OS_dispatch_queue, WKWallpaperBundleDownloadManagerDelegate;

@interface WKWallpaperBundleDownloadManager : NSObject

@property (class, readonly, nonatomic) WKWallpaperBundleDownloadManager *defaultManager;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_loadingQueue;
@property (retain, nonatomic) NSNumber *_catalogDownloadResult;
@property (retain, nonatomic) NSError *_catalogDownloadError;
@property (retain, nonatomic) NSMutableDictionary *_localAssetLookup;
@property (retain, nonatomic) NSMutableDictionary *_activeDownloads;
@property (readonly, copy, nonatomic) NSString *assetDownloadIdentifier;
@property (weak, nonatomic) NSObject<WKWallpaperBundleDownloadManagerDelegate> *delegate;

- (void)cancelDownloadForWallpaperRepresenting:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithAssetDownloadIdentifier:(id)a0;
- (void)downloadWallpaperRepresentingIfNeeded:(id)a0 progress:(id)a1 withCompletion:(id /* block */)a2;
- (id)localWallpaperRepresentingWithIdentifier:(id)a0 wallpaperName:(id)a1;
- (void).cxx_destruct;
- (id)_startCatalogDownload;

@end
