@class NSCache, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DDSAssetQueryResultCache : NSObject <NSCacheDelegate, DDSAssetQueryResultCaching>

@property (retain, nonatomic) NSCache *assetsByQueryCache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearCache;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)cachedAssetsForQuery:(id)a0;
- (void)cacheAssets:(id)a0 forQuery:(id)a1;

@end
