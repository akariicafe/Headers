@class NSProgress, NSOperationQueue, NSObject, MPCModelStorePlaybackItemsRequest;
@protocol OS_dispatch_queue;

@interface MPCModelStorePlaybackItemsRequestOperation : MPAsyncOperation {
    NSProgress *_activeProgress;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_activeProgressQueue;
}

@property (readonly, copy, nonatomic) MPCModelStorePlaybackItemsRequest *request;
@property (readonly, copy, nonatomic) id /* block */ responseHandler;

- (void)cancel;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_executeWithUserIdentity:(id)a0;
- (void)_validateUserIdentityForRequestWithCompletion:(id /* block */)a0;
- (BOOL)_shouldUseLegacyAccumulator;

@end
