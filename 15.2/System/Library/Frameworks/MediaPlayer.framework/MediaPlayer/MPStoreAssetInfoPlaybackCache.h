@class NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MPStoreAssetInfoPlaybackCache : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_accessOrderedRequests;
    NSMutableDictionary *_requestToCachedResponse;
}

@property (class, readonly, nonatomic) MPStoreAssetInfoPlaybackCache *sharedCache;

- (id)cachedResponseForRequest:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (void)addCachedResponse:(id)a0 forRequest:(id)a1;
- (void)updateForPlaybackOfFileAsset:(id)a0 fromResponse:(id)a1;

@end
