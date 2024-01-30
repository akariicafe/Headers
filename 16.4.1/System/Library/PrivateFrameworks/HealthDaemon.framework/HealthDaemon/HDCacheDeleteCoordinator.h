@class HKSynchronousObserverSet;

@interface HDCacheDeleteCoordinator : NSObject {
    HKSynchronousObserverSet *_providers;
}

+ (id)unitTesting_cacheDeleteUrgencies;

- (id)unitTesting_purgeSpace:(int)a0 info:(id)a1;
- (id)queryPurgableSpace:(int)a0 info:(id)a1;
- (void)unregisterCacheDeleteProvider:(id)a0;
- (void)registerCacheDeleteProvider:(id)a0;
- (id)init;
- (void)activate;
- (void).cxx_destruct;
- (id)purgeSpace:(int)a0 info:(id)a1;
- (id)unitTesting_queryPurgableSpace:(int)a0 info:(id)a1;

@end
