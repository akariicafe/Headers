@class KGDatabaseNameCache, KGDegasGraphStore, NSURL, NSObject, NSMutableArray;
@protocol KGEntityFactory, OS_dispatch_queue;

@interface KGGraphManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSURL *_url;
    id<KGEntityFactory> _entityFactory;
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

- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 entityFactory:(id)a1;
- (void)decrementReadCount;
- (void)incrementReadCount;
- (void)performReadBlock:(id /* block */)a0;
- (void)performWriteBlock:(id /* block */)a0;
- (BOOL)checkValidState;
- (void)doClose;
- (void)asyncClose:(id /* block */)a0;
- (void)checkinReadOnlyStore:(id)a0;
- (id)obtainReadOnlyStore:(id *)a0;
- (id)obtainReadWriteStore:(id *)a0;
- (void)performAsyncExclusiveBlock:(id /* block */)a0;
- (void)performAsyncReadBlock:(id /* block */)a0;
- (void)performAsyncWriteBlock:(id /* block */)a0;
- (void)performExclusiveBlock:(id /* block */)a0;
- (BOOL)replaceFromGraph:(id)a0 error:(id *)a1;
- (void)submitExclusiveBlock:(id /* block */)a0 async:(BOOL)a1;
- (void)submitReadBlock:(id /* block */)a0 async:(BOOL)a1;
- (void)submitWriteBlock:(id /* block */)a0 async:(BOOL)a1;

@end
