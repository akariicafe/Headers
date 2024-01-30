@class PFCachePolicy, NSMapTable, NSObject, PFCacheStatistics;
@protocol OS_dispatch_queue;

@interface PFCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_contents;
    PFCachePolicy *_policy;
    PFCacheStatistics *_statistics;
}

@property (copy) id /* block */ willBeRemovedFromCacheHandler;

- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)initWithPolicy:(id)a0;
- (void)_removeObjectForKey:(id)a0 notify:(BOOL)a1;
- (id)statistics;
- (void)removeObjectForKeyWithoutNotification:(id)a0;
- (void)_setEntry:(id)a0 forKey:(id)a1;
- (id)setObject:(id)a0 forKeyIfNotPresent:(id)a1;
- (void)enumerateCacheEntriesUsingBlock:(id /* block */)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (void)dealloc;

@end
