@class NSMutableArray;

@interface AMSPromiseCompletionBlocks : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _completionBlockLock;
    NSMutableArray *_completionBlocks;
    BOOL _shouldCallImmediately;
}

- (void)addSuccessBlock:(id /* block */)a0;
- (void)addErrorBlock:(id /* block */)a0;
- (void)callCompletionBlock:(id /* block */)a0 withPromiseResult:(id)a1;
- (void)addCompletionBlock:(id /* block */)a0;
- (void)flushCompletionBlocksWithPromiseResult:(id)a0;
- (void)callSuccessBlock:(id /* block */)a0 withPromiseResult:(id)a1;
- (void)callErrorBlock:(id /* block */)a0 withPromiseResult:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
