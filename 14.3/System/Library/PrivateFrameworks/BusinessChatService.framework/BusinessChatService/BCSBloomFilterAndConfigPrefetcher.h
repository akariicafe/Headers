@class NSMutableSet;
@protocol BCSBloomFilterAndConfigRemoteFetching, BCSFeatureFlagArbitrating, BCSUserDefaultsProviding, BCSPrefetchTrigger, BCSConfigCaching, BCSShardCacheSkipping, BCSMetricFactoryProtocol, BCSShardCacheQueryable, BCSShardItemInstantiating;

@interface BCSBloomFilterAndConfigPrefetcher : NSObject

@property (retain, nonatomic) id<BCSConfigCaching> configCache;
@property (retain, nonatomic) id<BCSShardCacheQueryable> shardCache;
@property (retain, nonatomic) id<BCSShardCacheSkipping> shardCacheSkipper;
@property (retain, nonatomic) id<BCSBloomFilterAndConfigRemoteFetching> bloomFilterAndConfigRemoteFetch;
@property (retain, nonatomic) id<BCSPrefetchTrigger> prefetchTrigger;
@property (retain, nonatomic) id<BCSShardItemInstantiating> shardInstantiator;
@property (retain, nonatomic) id<BCSFeatureFlagArbitrating> featureFlagAribiter;
@property (retain, nonatomic) id<BCSUserDefaultsProviding> userDefaults;
@property (retain, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (retain, nonatomic) NSMutableSet *triggers;

- (void).cxx_destruct;
- (void)_prefetchBloomFilterAndConfigIfNecessaryWithXPCActivity:(id)a0 completion:(id /* block */)a1;
- (long long)_hoursSinceLastSuccessfulPrefetchForType:(long long)a0;
- (void)_notePrefetchForType:(long long)a0 finishedSuccessfully:(BOOL)a1;
- (BOOL)_shouldPrefetchType:(long long)a0;
- (id)initWithConfigCache:(id)a0 shardCache:(id)a1 shardCacheSkipper:(id)a2 shardInstantiator:(id)a3 featureFlagArbiter:(id)a4 businessLinkRemoteFetcher:(id)a5 userDefaults:(id)a6 metricFactory:(id)a7;
- (void)addPrefetchTrigger:(id)a0;

@end
