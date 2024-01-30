@class NSString;
@protocol BCSItemCaching, BCSMetricFactoryProtocol, BCSItemRemoteFetching, BCSItemCacheSkipping;

@interface BCSItemResolver : NSObject <BCSItemResolving>

@property (readonly, retain, nonatomic) id<BCSItemCaching> itemCache;
@property (readonly, retain, nonatomic) id<BCSItemCacheSkipping> itemCacheSkipper;
@property (readonly, retain, nonatomic) id<BCSItemRemoteFetching> itemRemoteFetcher;
@property (retain, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct { long long x0; long long x1; })_bucketRangeForItemIdentifier:(id)a0 bucketCount:(long long)a1;
- (id)_firstItemInBucket:(id)a0 matching:(id)a1;
- (id)cachedItemMatching:(id)a0;
- (void)itemMatching:(id)a0 config:(id)a1 clientBundleID:(id)a2 metric:(id)a3 completion:(id /* block */)a4;
- (id)initWithItemCache:(id)a0 cacheSkipper:(id)a1 remoteFetcher:(id)a2 metricFactory:(id)a3;

@end
