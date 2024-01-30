@class NSMutableSet;
@protocol BCSBloomFilterAndConfigRemoteFetching, BCSUserDefaultsProviding, BCSPrefetchTrigger, BCSConfigCaching, BCSShardCacheSkipping, BCSMetricFactoryProtocol, BCSShardCacheQueryable, BCSShardItemInstantiating;

@interface BCSBloomFilterAndConfigPrefetcher : NSObject {
    long long _type;
    long long _shardType;
    id<BCSConfigCaching> _configCache;
    id<BCSShardCacheQueryable> _shardCache;
    id<BCSShardCacheSkipping> _shardCacheSkipper;
    id<BCSBloomFilterAndConfigRemoteFetching> _bloomFilterAndConfigRemoteFetch;
    id<BCSPrefetchTrigger> _prefetchTrigger;
    id<BCSShardItemInstantiating> _shardInstantiator;
    id<BCSUserDefaultsProviding> _userDefaults;
    id<BCSMetricFactoryProtocol> _metricFactory;
    NSMutableSet *_triggers;
}

- (id)initWithShardType:(long long)a0 configCache:(id)a1 shardCache:(id)a2 shardCacheSkipper:(id)a3 shardInstantiator:(id)a4 megashardRemoteFetcher:(id)a5 userDefaults:(id)a6 metricFactory:(id)a7;
- (void)addPrefetchTrigger:(id)a0;
- (void).cxx_destruct;

@end
