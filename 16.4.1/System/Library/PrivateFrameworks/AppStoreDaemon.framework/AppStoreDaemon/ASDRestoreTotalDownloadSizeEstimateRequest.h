@class ASDRestoreService;

@interface ASDRestoreTotalDownloadSizeEstimateRequest : NSObject {
    ASDRestoreService *_restoreService;
}

- (void)startWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
