@class _HKMobileAssetDownloadManager, NSUserDefaults;

@interface ACHMobileAssetProvider : NSObject

@property (retain, nonatomic) _HKMobileAssetDownloadManager *mobileAssetDownloadManager;
@property (retain, nonatomic) NSUserDefaults *nanoUserDefaults;
@property (nonatomic) double downloadDelayOverride;

- (void)_downloadRemoteAssets:(id)a0 installedAssets:(id)a1;
- (long long)downloadedAssetDiskUsageInBytes;
- (void)downloadRemoteCatalog;
- (void)_processAssets:(id)a0 completion:(id /* block */)a1;
- (void)_fetchLocalAssetsWithCompletion:(id /* block */)a0;
- (void)_downloadRemoteCatalogAndAssets;
- (void).cxx_destruct;
- (void)_getCurrentAsssetAndOlderAssetsFromAssets:(id)a0 completion:(id /* block */)a1;
- (double)_downloadDelay;
- (id)_compatibilityVersionQueryParameters;
- (id)_assetsGroupedByUniqueNameAndType:(id)a0;
- (id)init;
- (id)initWithMobileAssetDownloadManager:(id)a0;
- (void)_removeAssets:(id)a0;
- (BOOL)_assetIsInstalled:(id)a0;
- (void)availableAssetsWithCompletion:(id /* block */)a0;
- (void)_downloadAssets:(id)a0 withCompletion:(id /* block */)a1;
- (long long)purgeAllDownloadedAssets;

@end
