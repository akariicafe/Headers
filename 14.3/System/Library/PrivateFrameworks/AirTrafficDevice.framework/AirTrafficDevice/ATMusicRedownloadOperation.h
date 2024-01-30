@class ICMediaAssetDownloadRequest, ICMediaRedownloadRequest;

@interface ATMusicRedownloadOperation : ATStoreDownloadOperation {
    ICMediaRedownloadRequest *_redownloadRequest;
    ICMediaAssetDownloadRequest *_assetDownloadRequest;
}

- (void)cancel;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)execute;
- (id)_musicAppBundleID;
- (void)_getICStoreMediaResponseItemWithRequestContext:(id)a0 playBackEndPointType:(long long)a1 completionHandler:(id /* block */)a2;

@end
