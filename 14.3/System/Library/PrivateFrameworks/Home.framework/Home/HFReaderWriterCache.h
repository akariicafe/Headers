@class NSMutableDictionary;

@interface HFReaderWriterCache : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (readonly, nonatomic) NSMutableDictionary *cachedObjects;

- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)performBlockWithWriteLock:(id /* block */)a0;
- (id)tryObjectForKey:(id)a0;
- (void)setObject:(id)a0 onlyIfNoObjectForKey:(id)a1;
- (void)removeObjectForKey:(id)a0;

@end
