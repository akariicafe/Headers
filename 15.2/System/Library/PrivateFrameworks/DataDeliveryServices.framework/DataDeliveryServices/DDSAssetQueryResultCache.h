@class DDSCache, NSString;

@interface DDSAssetQueryResultCache : NSObject <DDSCacheDelegate, DDSAssetQueryResultCaching>

@property (readonly, nonatomic) DDSCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearCache;
- (id)cachedAssetsForQuery:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cacheAssets:(id)a0 forQuery:(id)a1;
- (void)cache:(id)a0 willEvictObjects:(id)a1;

@end
