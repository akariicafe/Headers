@class ICMediaRedownloadRequest;

@interface ATStoreMusicDownloadPrepareOperation : ATStoreDownloadPrepareOperation {
    ICMediaRedownloadRequest *_redownloadRequest;
}

- (void)execute;
- (void)cancel;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0 operationResult:(id)a1;

@end
