@class HMFTimer, NSMapTable, NSMutableDictionary, NSString, NSObject;
@protocol HMPersistentCache, OS_dispatch_queue;

@interface HMCacheManager : HMFObject <HMCacheDelegate, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) id<HMPersistentCache> persistentCache;
@property (readonly) NSMapTable *cacheMap;
@property (readonly) NSMutableDictionary *pendingWrites;
@property (readonly) HMFTimer *writeDebounceTimer;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)timerDidFire:(id)a0;
- (void)_saveCache:(id)a0;
- (id)initWithTimerFactory:(id /* block */)a0 persistentCache:(id)a1;
- (void)cacheDidUpdate:(id)a0;
- (void)forceFlushToDisk;
- (id)_loadCacheNamed:(id)a0;
- (void)cacheWithName:(id)a0 completion:(id /* block */)a1;
- (id)cacheWithName:(id)a0;
- (id)_cacheWithName:(id)a0;
- (void).cxx_destruct;

@end
