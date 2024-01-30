@class HKSynchronousObserverSet;

@interface HDCacheDeleteCoordinator : NSObject {
    HKSynchronousObserverSet *_providers;
}

- (id)unitTesting_purgeSpace:(int)a0 info:(id)a1;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (id)unitTesting_queryPurgableSpace:(int)a0 info:(id)a1;
- (void)unregisterCacheDeleteProvider:(id)a0;
- (void)registerCacheDeleteProvider:(id)a0;
- (id)queryPurgableSpace:(int)a0 info:(id)a1;
- (id)purgeSpace:(int)a0 info:(id)a1;

@end
