@class NSString;
@protocol BCSItemCaching, BCSMetricFactoryProtocol, BCSItemRemoteFetching, BCSItemCacheSkipping;

@interface BCSItemResolver : NSObject <BCSItemResolving> {
    id<BCSItemCaching> _itemCache;
    id<BCSItemCacheSkipping> _itemCacheSkipper;
    id<BCSItemRemoteFetching> _itemRemoteFetcher;
    id<BCSMetricFactoryProtocol> _metricFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)cachedItemMatching:(id)a0;
- (void)itemMatching:(id)a0 config:(id)a1 clientBundleID:(id)a2 metric:(id)a3 completion:(id /* block */)a4;

@end
