@class NSMutableData;

@interface PETAggregateStateStorageInMemory : PETAggregateStateStorage {
    NSMutableData *_data;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (BOOL)resetLocked;
- (void)saveCorruptState;
- (void).cxx_destruct;
- (id)init;
- (void)expand:(unsigned long long)a0 andRunWithLock:(id /* block */)a1;
- (void)dealloc;
- (void)reset;

@end
