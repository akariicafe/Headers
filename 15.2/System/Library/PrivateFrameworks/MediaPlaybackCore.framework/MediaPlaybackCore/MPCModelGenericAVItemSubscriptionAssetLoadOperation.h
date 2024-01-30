@class ICMusicSubscriptionLeaseSession, MPCModelGenericAVItemAssetLoadProperties, ICStoreRequestContext, NSObject;
@protocol OS_dispatch_queue;

@interface MPCModelGenericAVItemSubscriptionAssetLoadOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id /* block */ _cancellationHandler;
}

@property (retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties;
@property (nonatomic) long long operationType;
@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (retain, nonatomic) ICMusicSubscriptionLeaseSession *subscriptionLeaseSession;

- (void)execute;
- (id /* block */)cancellationHandler;
- (id)description;
- (void)setCancellationHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (BOOL)_canRetrieveLoadResultsFromMiniSinf;
- (BOOL)_canRetrieveLoadResultsFromServerObjectDatabase;
- (id)_loadResultsFromMiniSinfWithPlaybackAuthorizationToken:(id)a0;
- (id)_loadResultsFromLocalAssetCacheWithPlaybackAuthorizationToken:(id)a0;
- (id)_handlePlaybackResponse:(id)a0 withPlaybackCacheRequest:(id)a1 error:(id *)a2;

@end
