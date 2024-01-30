@class NSOperationQueue, NSOperation, NSMutableArray;

@interface CATSerialOperationEnqueuer : NSObject {
    NSOperationQueue *mTargetQueue;
    NSOperation *mCurrentlyExecutingOperation;
    NSMutableArray *mPendingOperations;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } mLock;
    id mStrongSelf;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)addOperation:(id)a0;
- (id)initWithTargetOperationQueue:(id)a0;
- (void)stopObservingOperation:(id)a0;
- (void)enqueueNextOperation;
- (void)performThreadSafeBlock:(id /* block */)a0;
- (void)startObservingOperation:(id)a0;
- (void)checkIfOperationIsFinished:(id)a0;

@end
