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
- (void)cancel;
- (id /* block */)cancellationHandler;
- (id)init;
- (id)description;
- (void)setCancellationHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_canRetrieveLoadResultsFromMiniSinfWithAssets:(id *)a0;
- (BOOL)_canRetrieveLoadResultsFromServerObjectDatabaseWithAssets:(id *)a0 hlsAsset:(id *)a1;
- (id)_handlePlaybackResponse:(id)a0 withPlaybackCacheRequest:(id)a1 error:(id *)a2;
- (id)_loadResultsFromServerObjectDatabaseAssets:(id)a0 hlsAsset:(id)a1 playbackAuthorizationToken:(id)a2;
- (id)_loadResultsFromServerObjectDatabaseAssetsWithMiniSinf:(id)a0 playbackAuthorizationToken:(id)a1;

@end
