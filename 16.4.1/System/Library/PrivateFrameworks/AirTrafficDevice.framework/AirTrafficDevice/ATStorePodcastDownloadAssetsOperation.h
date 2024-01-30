@class ICAVAssetDownloadURLSession, PFSecureDownloadRenewalManager, ICURLRequest, AVURLAsset, ICURLSession;

@interface ATStorePodcastDownloadAssetsOperation : ATStoreDownloadAssetsOperation {
    ICURLSession *_session;
    ICAVAssetDownloadURLSession *_hlsSession;
    ICURLRequest *_request;
    AVURLAsset *_hlsAsset;
    PFSecureDownloadRenewalManager *_renewalManager;
}

- (void)execute;
- (id)_urlSession;
- (void)cancel;
- (void).cxx_destruct;
- (id)_icavUrlSession;
- (void)_deleteHLSKey;
- (id)_downloadConfigurationWithSessionIdentifier:(id)a0 isHLS:(BOOL)a1;
- (void)_getContentKeyForAssetWithCompletionHandler:(id /* block */)a0;
- (void)_moveAssetToPurchasesDirectoryFromTmpPath:(id)a0 downloadError:(id)a1 isHLSAsset:(BOOL)a2;
- (void)finishWithError:(id)a0 operationResult:(id)a1;
- (id)secureDownloadRenewalManager;

@end
