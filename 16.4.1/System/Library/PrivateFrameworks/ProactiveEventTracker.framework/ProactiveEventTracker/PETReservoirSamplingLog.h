@class NSObject;
@protocol PETReservoirSamplingLogStore;

@interface PETReservoirSamplingLog : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSObject<PETReservoirSamplingLogStore> *_store;
    unsigned int _limit;
    struct { unsigned long long s[2]; } _rng;
}

- (void)log:(id)a0;
- (void)_unlock;
- (id)initWithPath:(id)a0 limit:(unsigned long long)a1;
- (void)unlock;
- (BOOL)_lock;
- (id)initWithStore:(id)a0 limit:(unsigned long long)a1;
- (void)enumerateAndClearItemsWithBlock:(id /* block */)a0;
- (void)dealloc;
- (id)initInMemoryWithLimit:(unsigned long long)a0;
- (void)_gc;
- (void)enumerateItemsWithBlock:(id /* block */)a0;
- (void)_enumerateItemsWithBlockLocked:(id /* block */)a0;
- (id)init;
- (void)_clearLocked;
- (BOOL)_readHeader;
- (void)clear;
- (void).cxx_destruct;

@end
