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

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id /* block */)cancellationHandler;
- (void)execute;
- (id)description;
- (void)setCancellationHandler:(id /* block */)a0;
- (id)_handlePlaybackResponse:(id)a0 withPlaybackCacheRequest:(id)a1 error:(id *)a2;

@end
