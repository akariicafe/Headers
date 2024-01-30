@class ASDRestoreService;

@interface ASDRestoreTotalDownloadSizeEstimateRequest : NSObject {
    ASDRestoreService *_restoreService;
}

- (void).cxx_destruct;
- (id)init;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (id)_initWithRestoreService:(id)a0;

@end
