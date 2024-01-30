@class ICMediaAssetDownloadRequest;

@interface ATStoreMusicDownloadAssetsOperation : ATStoreDownloadAssetsOperation {
    ICMediaAssetDownloadRequest *_assetDownloadRequest;
}

- (void)execute;
- (void).cxx_destruct;
- (void)cancel;
- (void)finishWithError:(id)a0 operationResult:(id)a1;
- (void)_getStorageSpaceAvailableForMediaResponseItem:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)_minimumBitrateForResolutionPreference:(long long)a0;
- (unsigned long long)_maximumSampleRateForResolutionPreference:(long long)a0;

@end
