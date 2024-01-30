@class RTAssetProcessor, RTDefaultsManager, RTXPCActivityManager;

@interface RTAssetManager : RTService

@property (retain, nonatomic) RTAssetProcessor *assetProcessor;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTXPCActivityManager *xpcActivityManager;

- (void)_shutdown;
- (id)init;
- (void).cxx_destruct;
- (BOOL)nonUserInitiatedDownloadsAllowed;
- (id)initWithDefaultsManager:(id)a0 assetProcessor:(id)a1 xpcActivityManager:(id)a2;
- (id)defaultXPCActivityCriteria;
- (void)performUpdateOfAssetsWithTypeAssetType:(id)a0 handler:(id /* block */)a1;
- (void)_finalizeAssetUpdateOperationWithError:(id)a0;
- (void)_performUpdateOfAssetsWithTypeAssetType:(id)a0 handler:(id /* block */)a1;
- (id)defaultCatalogDownloadOptions;
- (void)_handleCatalogDownloadWithType:(id)a0 downloadResult:(long long)a1 handler:(id /* block */)a2;
- (void)_handleMetadataQueryResult:(long long)a0 assetQuery:(id)a1 handler:(id /* block */)a2;
- (id)latestAssetFromAssets:(id)a0;
- (void)_downloadAsset:(id)a0 handler:(id /* block */)a1;
- (id)defaultAssetDownloadOptions;
- (void)_handleAssetDownloadResult:(long long)a0 asset:(id)a1 handler:(id /* block */)a2;
- (void)_installAsset:(id)a0 fileManager:(id)a1 handler:(id /* block */)a2;
- (void)forceUpdateAssetMetadataWithHandler:(id /* block */)a0;
- (void)updateAssetServerURL:(id)a0 assetType:(id)a1 handler:(id /* block */)a2;

@end
