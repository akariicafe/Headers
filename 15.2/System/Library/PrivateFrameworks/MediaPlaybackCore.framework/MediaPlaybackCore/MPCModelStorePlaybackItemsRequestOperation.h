@class MPCModelStorePlaybackItemsResponse, NSMutableArray, NSProgress, NSOperationQueue, NSObject, MPCModelStorePlaybackItemsRequest;
@protocol OS_dispatch_queue;

@interface MPCModelStorePlaybackItemsRequestOperation : MPAsyncOperation {
    NSProgress *_activeProgress;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    MPCModelStorePlaybackItemsResponse *_previousModelResponse;
    BOOL _hasReceivedFinalResponse;
    BOOL _hasCalledResponseHandler;
    NSMutableArray *_errors;
}

@property (readonly, copy, nonatomic) MPCModelStorePlaybackItemsRequest *request;
@property (readonly, copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)cancel;
- (void)_executeWithUserIdentity:(id)a0 useMediaAPILookup:(BOOL)a1;
- (void)_runMediaAPIRequestToLoadMetadataWithAccumulator:(id)a0 userIdentity:(id)a1 previousResponse:(id)a2 shouldBatchResultsWithPlaceholderObjects:(BOOL)a3;
- (void)_importMediaAPICollectionItemMetadataResponse:(id)a0 withError:(id)a1 usingAccumulator:(id)a2 userIdentity:(id)a3 trustID:(id)a4 previousResponse:(id)a5 shouldBatchResultsWithPlaceholderObjects:(BOOL)a6;
- (void)_runStorePlatformRequestToLoadMetadataWithAccumulator:(id)a0 userIdentity:(id)a1 previousResponse:(id)a2 shouldBatchResultsWithPlaceholderObjects:(BOOL)a3;
- (void)_validateUserIdentityForRequestWithCompletion:(id /* block */)a0;
- (void)_runPersonalizationWithSectionCollection:(id)a0 localEquivalencyMapping:(id)a1 expirationDate:(id)a2 userIdentity:(id)a3 error:(id)a4 isFinalResponse:(BOOL)a5 isInvalidForPersonalization:(BOOL)a6;
- (id)_localStoreAdamIDToEquivalencySourceStoreAdamIDMap:(id)a0;
- (void)_handleItemMetadataBactchRequestCompletedWithAccumulator:(id)a0 previousResponse:(id)a1 userIdentity:(id)a2 error:(id)a3 isFinalResponse:(BOOL)a4;
- (void)_runSubscriptionStatusWithRequestContext:(id)a0 completion:(id /* block */)a1;

@end
