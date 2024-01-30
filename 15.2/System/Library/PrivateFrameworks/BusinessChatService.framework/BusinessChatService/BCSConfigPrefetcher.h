@class NSMutableSet;
@protocol BCSConfigCaching, BCSUserDefaultsProviding, BCSConfigCacheSkipping, BCSConfigRemoteFetching, BCSMetricFactoryProtocol;

@interface BCSConfigPrefetcher : NSObject {
    id<BCSConfigCaching> _configCache;
    id<BCSConfigCacheSkipping> _configCacheSkipper;
    id<BCSConfigRemoteFetching> _chatSuggestConfigRemoteFetcher;
    id<BCSConfigRemoteFetching> _businessLinkConfigRemoteFetcher;
    id<BCSUserDefaultsProviding> _userDefaults;
    id<BCSMetricFactoryProtocol> _metricFactory;
    NSMutableSet *_triggers;
}

- (id)initWithConfigCache:(id)a0 configCacheSkipper:(id)a1 chatSuggestConfigRemoteFetcher:(id)a2 businessLinkConfigRemoteFetcher:(id)a3 userDefaults:(id)a4 metricFactory:(id)a5;
- (void)addPrefetchTrigger:(id)a0;
- (void).cxx_destruct;

@end
