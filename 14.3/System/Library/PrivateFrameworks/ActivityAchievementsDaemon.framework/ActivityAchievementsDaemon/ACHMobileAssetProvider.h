@class _HKMobileAssetDownloadManager, NSUserDefaults;

@interface ACHMobileAssetProvider : NSObject

@property (retain, nonatomic) _HKMobileAssetDownloadManager *mobileAssetDownloadManager;
@property (retain, nonatomic) NSUserDefaults *nanoUserDefaults;
@property (nonatomic) double downloadDelayOverride;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMobileAssetDownloadManager:(id)a0;
- (void)_fetchLocalAssetsWithCompletion:(id /* block */)a0;
- (void)_downloadRemoteCatalogAndAssets;
- (double)_downloadDelay;
- (void)downloadRemoteCatalog;
- (id)_compatibilityVersionQueryParameters;
- (void)_removeAssets:(id)a0;
- (void)_processAssets:(id)a0 completion:(id /* block */)a1;
- (void)_downloadRemoteAssets:(id)a0 installedAssets:(id)a1;
- (void)_downloadAssets:(id)a0 withCompletion:(id /* block */)a1;
- (id)_assetsGroupedByUniqueNameAndType:(id)a0;
- (void)_getCurrentAsssetAndOlderAssetsFromAssets:(id)a0 completion:(id /* block */)a1;
- (void)availableAssetsWithCompletion:(id /* block */)a0;

@end
