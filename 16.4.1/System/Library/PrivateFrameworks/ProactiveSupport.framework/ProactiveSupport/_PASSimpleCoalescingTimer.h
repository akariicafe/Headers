@class _PASCoalescingTimer;

@interface _PASSimpleCoalescingTimer : NSObject {
    _PASCoalescingTimer *_timer;
}

- (void)runAfterDelaySeconds:(double)a0 coalescingBehavior:(unsigned char)a1;
- (void)cancelPendingOperations;
- (id)initWithQueue:(id)a0 leewaySeconds:(double)a1 operation:(id /* block */)a2;
- (id)initWithQueue:(id)a0 operation:(id /* block */)a1;
- (void)runAfterStrictDelaySeconds:(double)a0;
- (void)runImmediately;
- (void).cxx_destruct;

@end
