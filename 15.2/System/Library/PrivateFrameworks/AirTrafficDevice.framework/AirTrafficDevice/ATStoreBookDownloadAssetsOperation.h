@class NSString;

@interface ATStoreBookDownloadAssetsOperation : ATStoreDownloadAssetsOperation <BLDownloadQueueObserving> {
    NSString *_bookDownloadID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)execute;
- (void).cxx_destruct;
- (void)dealloc;
- (void)downloadQueue:(id)a0 downloadStatesDidChange:(id)a1;
- (void)cancel;
- (void)downloadQueue:(id)a0 downloadStates:(id)a1 didCompleteWithError:(id)a2;
- (void)finishWithError:(id)a0 operationResult:(id)a1;

@end
