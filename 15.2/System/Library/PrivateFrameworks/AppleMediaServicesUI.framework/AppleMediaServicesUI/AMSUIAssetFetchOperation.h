@class AMSPromise;

@interface AMSUIAssetFetchOperation : NSOperation

@property (nonatomic, getter=isLowLatency) BOOL lowLatency;
@property (retain, nonatomic) AMSPromise *operationPromise;

- (void)setQueuePriority:(long long)a0;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (void)_finishWithImage:(id)a0 error:(id)a1;

@end
