@class NSString;
@protocol BCSShardRemoteFetching, BCSShardCacheSkipping, BCSShardCaching, BCSMetricFactoryProtocol;

@interface BCSShardResolver : NSObject <BCSShardResolving> {
    id<BCSShardCaching> _shardCache;
    id<BCSShardCacheSkipping> _shardCacheSkipper;
    id<BCSShardRemoteFetching> _shardRemoteFetcher;
    id<BCSMetricFactoryProtocol> _metricFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)shardItemMatching:(id)a0 clientBundleID:(id)a1 metric:(id)a2 completion:(id /* block */)a3;

@end
