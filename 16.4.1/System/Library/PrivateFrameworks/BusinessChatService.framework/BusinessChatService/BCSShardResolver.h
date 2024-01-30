@class NSString, NSObject;
@protocol BCSShardCacheSkipping, BCSFetchTrigger, BCSShardCaching, BCSMetricFactoryProtocol, OS_dispatch_queue;

@interface BCSShardResolver : NSObject <BCSShardResolving> {
    id<BCSShardCaching> _shardCache;
    id<BCSShardCacheSkipping> _shardCacheSkipper;
    id<BCSFetchTrigger> _megashardFetchTrigger;
    id<BCSMetricFactoryProtocol> _metricFactory;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)shardItemMatching:(id)a0 clientBundleID:(id)a1 metric:(id)a2 completion:(id /* block */)a3;

@end
