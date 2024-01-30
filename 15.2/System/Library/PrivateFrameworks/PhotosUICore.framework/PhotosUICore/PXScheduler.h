@class NSMutableArray;

@interface PXScheduler : NSObject {
    NSMutableArray *_pendingBlocks;
    BOOL _hasPendingPerformInDefaultRunLoopMode;
    BOOL _isPerformingPendingBlocks;
}

+ (id)sharedScheduler;

- (void)_performBlock:(id /* block */)a0;
- (void)scrollViewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (void)_performPendingBlocksIfNeeded;
- (void)dispatchInMainTransaction:(id /* block */)a0;
- (void)dispatchOnMainThreadWhenNotScrollingAfterDelay:(double)a0 block:(id /* block */)a1;
- (void)dispatchInMainTransactionAfterDelay:(double)a0 block:(id /* block */)a1;
- (void)_performPendingBlocks;
- (void)scrollViewDidScroll;
- (void)_enteredDefaultRunLoopMode;
- (void)dispatchOnMainThreadWhenNotScrolling:(id /* block */)a0;

@end
