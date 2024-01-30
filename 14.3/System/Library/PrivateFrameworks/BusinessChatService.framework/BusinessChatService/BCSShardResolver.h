@class NSString;
@protocol BCSShardRemoteFetching, BCSShardCacheSkipping, BCSShardCaching, BCSMetricFactoryProtocol;

@interface BCSShardResolver : NSObject <BCSShardResolving>

@property (readonly, retain, nonatomic) id<BCSShardCaching> shardCache;
@property (readonly, retain, nonatomic) id<BCSShardCacheSkipping> shardCacheSkipper;
@property (readonly, retain, nonatomic) id<BCSShardRemoteFetching> shardRemoteFetcher;
@property (readonly, retain, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithShardCache:(id)a0 cacheSkipper:(id)a1 remoteFetcher:(id)a2 metricFactory:(id)a3;
- (void)shardItemMatching:(id)a0 clientBundleID:(id)a1 metric:(id)a2 completion:(id /* block */)a3;

@end
