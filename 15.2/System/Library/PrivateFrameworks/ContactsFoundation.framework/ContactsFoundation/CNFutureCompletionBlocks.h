@class NSMutableArray;

@interface CNFutureCompletionBlocks : NSObject {
    NSMutableArray *_completionBlocks;
    BOOL _shouldCallImmediately;
}

- (void).cxx_destruct;
- (id)init;
- (void)addCompletionBlock:(id /* block */)a0 orCallWithFutureResult:(id)a1;
- (BOOL)shouldCallImmediately;
- (void)setShouldCallImmediately:(BOOL)a0;
- (void)addSuccessBlock:(id /* block */)a0 orCallWithFutureResult:(id)a1;
- (void)addFailureBlock:(id /* block */)a0 orCallWithFutureResult:(id)a1;
- (void)flushCompletionBlocksWithFutureResult:(id)a0;

@end
