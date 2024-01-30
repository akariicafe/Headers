@class MPCModelStorePlaybackItemsResponse, NSMutableArray, NSProgress, NSOperationQueue, MPCPlaybackAccount, NSObject, MPCModelStorePlaybackItemsRequest;
@protocol OS_dispatch_queue;

@interface MPCModelStorePlaybackItemsRequestOperation : MPAsyncOperation {
    NSProgress *_activeProgress;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    MPCModelStorePlaybackItemsResponse *_previousModelResponse;
    BOOL _hasReceivedFinalResponse;
    BOOL _hasCalledResponseHandler;
    BOOL _requiresFollowupRequest;
    BOOL _useUniversalAccumulator;
    struct { BOOL useGlideMAPI; BOOL useStorePlatform; } _requestOptions;
    MPCPlaybackAccount *_account;
    NSMutableArray *_errors;
}

@property (readonly, copy, nonatomic) MPCModelStorePlaybackItemsRequest *request;
@property (readonly, copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleItemMetadataBatchRequestCompletedWithAccumulator:(id)a0 previousResponse:(id)a1 error:(id)a2 isFinalResponse:(BOOL)a3;
- (void)_importMediaAPICollectionItemMetadataResponse:(id)a0 withError:(id)a1 usingAccumulator:(id)a2 trustID:(id)a3 previousResponse:(id)a4;
- (id)_localStoreAdamIDToEquivalencySourceStoreAdamIDMap:(id)a0;
- (void)_runMediaAPIRequestToLoadMetadataWithAccumulator:(id)a0 previousResponse:(id)a1;
- (void)_runPersonalizationWithSectionCollection:(id)a0 localEquivalencyMapping:(id)a1 expirationDate:(id)a2 error:(id)a3 isFinalResponse:(BOOL)a4 isInvalidForPersonalization:(BOOL)a5 performanceMetrics:(id)a6;
- (void)_runStorePlatformRequestToLoadMetadataWithAccumulator:(id)a0 previousResponse:(id)a1;

@end
