@class NSMutableArray;

@interface PXScheduler : NSObject {
    NSMutableArray *_pendingBlocks;
    BOOL _hasPendingPerformInDefaultRunLoopMode;
    BOOL _isPerformingPendingBlocks;
}

+ (id)sharedScheduler;

- (void)_enteredDefaultRunLoopMode;
- (void)_performPendingBlocks;
- (void)dispatchOnMainThreadWhenNotScrollingAfterDelay:(double)a0 block:(id /* block */)a1;
- (void)dispatchOnMainThreadWhenNotScrolling:(id /* block */)a0;
- (void)dispatchInMainTransaction:(id /* block */)a0;
- (void)dispatchInMainTransactionAfterDelay:(double)a0 block:(id /* block */)a1;
- (void)_performBlock:(id /* block */)a0;
- (void)scrollViewWillLayoutSubviews;
- (id)init;
- (void)scrollViewDidScroll;
- (void)_performPendingBlocksIfNeeded;
- (void).cxx_destruct;

@end
