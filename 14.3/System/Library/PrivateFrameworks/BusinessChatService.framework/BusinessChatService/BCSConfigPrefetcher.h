@class NSMutableSet;
@protocol BCSConfigCaching, BCSUserDefaultsProviding, BCSConfigCacheSkipping, BCSFeatureFlagArbitrating, BCSConfigRemoteFetching, BCSMetricFactoryProtocol;

@interface BCSConfigPrefetcher : NSObject

@property (retain, nonatomic) id<BCSConfigCaching> configCache;
@property (retain, nonatomic) id<BCSConfigCacheSkipping> configCacheSkipper;
@property (retain, nonatomic) id<BCSFeatureFlagArbitrating> featureFlagArbiter;
@property (retain, nonatomic) id<BCSConfigRemoteFetching> chatSuggestConfigRemoteFetcher;
@property (retain, nonatomic) id<BCSConfigRemoteFetching> businessLinkConfigRemoteFetcher;
@property (retain, nonatomic) id<BCSUserDefaultsProviding> userDefaults;
@property (retain, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (retain, nonatomic) NSMutableSet *triggers;

- (void).cxx_destruct;
- (long long)_hoursSinceLastSuccessfulPrefetchForType:(long long)a0;
- (void)_notePrefetchForType:(long long)a0 finishedSuccessfully:(BOOL)a1;
- (BOOL)_shouldPrefetchType:(long long)a0;
- (void)addPrefetchTrigger:(id)a0;
- (void)_prefetchConfigsIfNecessaryWithXCPActivity:(id)a0 completion:(id /* block */)a1;
- (id)initWithConfigCache:(id)a0 configCacheSkipper:(id)a1 featureFlagArbiter:(id)a2 chatSuggestConfigRemoteFetcher:(id)a3 businessLinkConfigRemoteFetcher:(id)a4 userDefaults:(id)a5 metricFactory:(id)a6;

@end
