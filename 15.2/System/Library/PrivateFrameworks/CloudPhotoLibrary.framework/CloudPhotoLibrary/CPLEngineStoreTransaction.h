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

- (void)_transactionDidFinish;
- (void)_releaseDirty;
- (BOOL)do:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)canWrite;
- (id)initForWrite:(BOOL)a0 identifier:(id)a1 description:(id)a2;
- (BOOL)canRead;
- (id)redactedDescription;
- (void)dealloc;
- (void)_transactionWillBeginOnThread:(id)a0;
- (BOOL)_forWrite;
- (void)addCleanupBlock:(id /* block */)a0;

@end
