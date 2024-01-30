@class NSObject;
@protocol PETReservoirSamplingLogStore;

@interface PETReservoirSamplingLog : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSObject<PETReservoirSamplingLogStore> *_store;
    unsigned int _limit;
    struct { unsigned long long s[2]; } _rng;
}

- (void)_gc;
- (void)_unlock;
- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)log:(id)a0;
- (BOOL)_readHeader;
- (id)initWithStore:(id)a0 limit:(unsigned long long)a1;
- (id)initWithPath:(id)a0 limit:(unsigned long long)a1;
- (id)initInMemoryWithLimit:(unsigned long long)a0;
- (void)enumerateItemsWithBlock:(id /* block */)a0;
- (void)_enumerateItemsWithBlockLocked:(id /* block */)a0;
- (void)_clearLocked;
- (void)enumerateAndClearItemsWithBlock:(id /* block */)a0;
- (BOOL)_lock;

@end
