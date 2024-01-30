@class _HKMobileAssetDownloadManager, NSUserDefaults;

@interface ACHMobileAssetProvider : NSObject

@property (retain, nonatomic) _HKMobileAssetDownloadManager *mobileAssetDownloadManager;
@property (retain, nonatomic) NSUserDefaults *nanoUserDefaults;
@property (nonatomic) double downloadDelayOverride;

- (id)_assetsGroupedByUniqueNameAndType:(id)a0;
- (long long)downloadedAssetDiskUsageInBytes;
- (void)availableAssetsWithCompletion:(id /* block */)a0;
- (BOOL)_assetIsInstalled:(id)a0;
- (void)_processAssets:(id)a0 completion:(id /* block */)a1;
- (void)_getCurrentAsssetAndOlderAssetsFromAssets:(id)a0 completion:(id /* block */)a1;
- (long long)purgeAllDownloadedAssets;
- (void)_downloadRemoteAssets:(id)a0 installedAssets:(id)a1;
- (void)_removeAssets:(id)a0;
- (void)_fetchLocalAssetsWithCompletion:(id /* block */)a0;
- (void)downloadRemoteCatalog;
- (id)init;
- (double)_downloadDelay;
- (id)initWithMobileAssetDownloadManager:(id)a0;
- (id)_compatibilityVersionQueryParameters;
- (void)_downloadAssets:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_downloadRemoteCatalogAndAssets;

@end
