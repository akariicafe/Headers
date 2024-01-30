@class NSMutableArray;

@interface PXScheduler : NSObject {
    NSMutableArray *_pendingBlocks;
    BOOL _hasPendingPerformInDefaultRunLoopMode;
    BOOL _isPerformingPendingBlocks;
}

+ (id)sharedScheduler;

- (void)_enteredDefaultRunLoopMode;
- (id)init;
- (void).cxx_destruct;
- (void)_performPendingBlocks;
- (void)dispatchOnMainThreadWhenNotScrolling:(id /* block */)a0;
- (void)dispatchOnMainThreadWhenNotScrollingAfterDelay:(double)a0 block:(id /* block */)a1;
- (void)scrollViewWillLayoutSubviews;
- (void)dispatchInMainTransactionAfterDelay:(double)a0 block:(id /* block */)a1;
- (void)_performBlock:(id /* block */)a0;
- (void)dispatchInMainTransaction:(id /* block */)a0;
- (void)scrollViewDidScroll;
- (void)_performPendingBlocksIfNeeded;

@end
