@class CPLTransaction, NSString, NSThread, CPLEngineWriteTransactionBlocker, NSError, CPLEngineStore, NSMutableArray;

@interface CPLEngineStoreTransaction : NSObject {
    NSThread *_currentThread;
    BOOL _forWrite;
    NSMutableArray *_cleanupBlocks;
    CPLTransaction *_dirty;
}

@property (retain, nonatomic) CPLEngineWriteTransactionBlocker *blocker;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) CPLEngineStore *store;

- (BOOL)canWrite;
- (id)redactedDescription;
- (void)_releaseDirty;
- (BOOL)_forWrite;
- (BOOL)do:(id /* block */)a0;
- (void)_transactionWillBeginOnThread:(id)a0;
- (void)_transactionDidFinish;
- (void)addCleanupBlock:(id /* block */)a0;
- (void)dealloc;
- (id)initForWrite:(BOOL)a0 store:(id)a1 identifier:(id)a2 description:(id)a3;
- (BOOL)canRead;
- (id)description;
- (void).cxx_destruct;

@end
