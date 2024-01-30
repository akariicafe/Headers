@class NSMutableDictionary, PSUsageBundleManager, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ICQUsageStorageCache : NSObject {
    PSUsageBundleManager *_usageBundlesManager;
    NSMutableDictionary *_mediaCache;
    NSMutableArray *_appsCache;
    NSArray *_usageBundlesCache;
    NSObject<OS_dispatch_queue> *_cache_operation_queue;
    BOOL _cacheUpdateCancelled;
}

- (void).cxx_destruct;
- (id)init;
- (void)populateUsageDataWithProgressBlock:(id /* block */)a0;
- (id)mediaCollectionForKey:(id)a0;
- (void)removeMediaCollectionCacheForKey:(id)a0;
- (void)populateMediaCache;
- (void)populateUsageAppsCacheWithHandler:(id /* block */)a0;
- (void)populateUsageBundlesCacheWithHandler:(id /* block */)a0;
- (float)sizeForMediaQuery:(id)a0 withGroupingType:(long long)a1 storingInCache:(id)a2 withKey:(id)a3;
- (id)checkAndFixUpVersion:(id)a0;
- (float)specialStorageUsageForBundleID:(id)a0;
- (void)cancelUsageDataPopulation;

@end
