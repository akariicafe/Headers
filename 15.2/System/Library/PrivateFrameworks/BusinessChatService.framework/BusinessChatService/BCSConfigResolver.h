@class NSString;
@protocol BCSConfigCaching, BCSConfigCacheSkipping, BCSConfigRemoteFetching, BCSMetricFactoryProtocol;

@interface BCSConfigResolver : NSObject <BCSConfigResolving> {
    id<BCSConfigCaching> _configCache;
    id<BCSConfigCacheSkipping> _configCacheSkipper;
    id<BCSConfigRemoteFetching> _configRemoteFetcher;
    id<BCSMetricFactoryProtocol> _metricFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configItemWithType:(long long)a0 clientBundleID:(id)a1 metric:(id)a2 completion:(id /* block */)a3;

@end
