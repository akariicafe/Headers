@class KGDatabaseNameCache, KGDegasGraphStore, NSURL, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface KGGraphStoreManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSURL *_url;
    int _readRunningCount;
    BOOL _readFeeding;
    NSObject<OS_dispatch_queue> *_writeFeederQueue;
    NSObject<OS_dispatch_queue> *_readFeederQueue;
    NSObject<OS_dispatch_queue> *_executionQueue;
    char _readStoreBooking[4];
    KGDatabaseNameCache *_nameCache;
    BOOL _closed;
    NSMutableArray *_readOnlyStores;
    KGDegasGraphStore *_readWriteStore;
}

- (void)close;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)doClose;
- (void)incrementReadCount;
- (void)decrementReadCount;
- (id)obtainReadOnlyStore:(id *)a0;
- (void)checkinReadOnlyStore:(id)a0;
- (id)obtainReadWriteStore:(id *)a0;
- (void)asyncClose:(id /* block */)a0;
- (BOOL)replaceFromStore:(id)a0 error:(id *)a1;
- (void)submitExclusiveBlock:(id /* block */)a0 async:(BOOL)a1;
- (void)submitWriteBlock:(id /* block */)a0 async:(BOOL)a1;
- (void)submitReadBlock:(id /* block */)a0 async:(BOOL)a1;
- (BOOL)checkValidState;
- (void)performReadBlock:(id /* block */)a0 async:(BOOL)a1;
- (void)performWriteBlock:(id /* block */)a0 async:(BOOL)a1;
- (void)performExclusiveBlock:(id /* block */)a0 async:(BOOL)a1;

@end
