@class NSMutableArray;

@interface SSPromiseCompletionBlocks : NSObject {
    NSMutableArray *_completionBlocks;
    BOOL _shouldCallImmediately;
}

- (void)addErrorBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)callSuccessBlock:(id /* block */)a0 withPromiseResult:(id)a1;
- (void)addCompletionBlock:(id /* block */)a0;
- (void)callErrorBlock:(id /* block */)a0 withPromiseResult:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)callCompletionBlock:(id /* block */)a0 withPromiseResult:(id)a1;
- (void)flushCompletionBlocksWithPromiseResult:(id)a0;

@end
