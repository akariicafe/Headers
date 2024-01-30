@class NSString, AXThreadTimerTask, NSThread;

@interface AXThreadTimer : NSObject <AXAccessQueueTimer> {
    NSThread *_thread;
    id /* block */ _cancelBlock;
}

@property (retain, nonatomic) AXThreadTimerTask *task;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isPending) BOOL pending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterDelay:(double)a0 processBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)_runAfterDelay:(id)a0;
- (id)initWithThread:(id)a0;
- (void).cxx_destruct;
- (void)afterDelay:(double)a0 processBlock:(id /* block */)a1;
- (void)cancel;

@end
