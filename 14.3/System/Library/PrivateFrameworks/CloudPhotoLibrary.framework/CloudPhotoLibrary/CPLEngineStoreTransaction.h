@class NSString, NSThread, CPLEngineWriteTransactionBlocker, NSError, NSMutableArray, CPLTransaction;

@interface CPLEngineStoreTransaction : NSObject {
    NSThread *_currentThread;
    BOOL _forWrite;
    NSMutableArray *_cleanupBlocks;
    CPLTransaction *_dirty;
}

@property (retain, nonatomic) CPLEngineWriteTransactionBlocker *blocker;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *name;

- (BOOL)do:(id /* block */)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)dealloc;
- (id)description;
- (BOOL)canRead;
- (BOOL)canWrite;
- (void)_transactionDidFinish;
- (void)_transactionWillBeginOnThread:(id)a0;
- (void)_releaseDirty;
- (id)initForWrite:(BOOL)a0 identifier:(id)a1 description:(id)a2;
- (BOOL)_forWrite;
- (void)addCleanupBlock:(id /* block */)a0;

@end
