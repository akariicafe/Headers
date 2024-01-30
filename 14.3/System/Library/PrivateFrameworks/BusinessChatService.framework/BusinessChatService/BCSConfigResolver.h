@class NSString;
@protocol BCSConfigCaching, BCSConfigCacheSkipping, BCSConfigRemoteFetching, BCSMetricFactoryProtocol;

@interface BCSConfigResolver : NSObject <BCSConfigResolving>

@property (retain, nonatomic) id<BCSConfigCaching> configCache;
@property (retain, nonatomic) id<BCSConfigCacheSkipping> configCacheSkipper;
@property (retain, nonatomic) id<BCSConfigRemoteFetching> configRemoteFetcher;
@property (retain, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configItemWithType:(long long)a0 clientBundleID:(id)a1 metric:(id)a2 completion:(id /* block */)a3;
- (id)initWithConfigCache:(id)a0 cacheSkipper:(id)a1 remoteFetcher:(id)a2 metricFactory:(id)a3;

@end
