@class NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MPStoreAssetInfoPlaybackCache : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_accessOrderedRequests;
    NSMutableDictionary *_requestToCachedResponse;
}

@property (class, readonly) MPStoreAssetInfoPlaybackCache *sharedCache;

- (void).cxx_destruct;
- (void)addCachedResponse:(id)a0 forRequest:(id)a1;
- (void)updateForPlaybackOfFileAsset:(id)a0 fromResponse:(id)a1;
- (id)cachedResponseForRequest:(id)a0;
- (id)_init;

@end
