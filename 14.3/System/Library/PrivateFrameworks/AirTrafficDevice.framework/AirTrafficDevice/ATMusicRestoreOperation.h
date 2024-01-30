@class ICMediaAssetDownloadRequest, ICMusicRestoreRequest;

@interface ATMusicRestoreOperation : ATStoreDownloadOperation {
    ICMusicRestoreRequest *_restoreRequest;
    ICMediaAssetDownloadRequest *_assetDownloadRequest;
}

- (void)cancel;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)execute;
- (void)_downloadRestoreAssetWithRequestContext:(id)a0 restoreResponse:(id)a1 completionHandler:(id /* block */)a2;

@end
