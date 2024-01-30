@class NSMutableArray;

@interface CLTimeCoercibleDispatchSilo : CLDispatchSilo

@property (readonly, nonatomic) NSMutableArray *timerHolders;

- (id)newTimer;
- (id)initWithIdentifier:(id)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)initWithUnderlyingQueue:(id)a0;
- (void).cxx_destruct;
- (void)prepareAndRunBlock:(id /* block */)a0;
- (void)heartBeat:(id)a0;
- (void)setLatchedAbsoluteTimestamp:(double)a0;

@end
