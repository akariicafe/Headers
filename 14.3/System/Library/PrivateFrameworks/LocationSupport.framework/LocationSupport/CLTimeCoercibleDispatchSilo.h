@class NSMutableArray;

@interface CLTimeCoercibleDispatchSilo : CLDispatchSilo

@property (readonly, nonatomic) NSMutableArray *timerHolders;

- (id)newTimer;
- (void).cxx_destruct;
- (id)initWithUnderlyingQueue:(id)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0;
- (void)setLatchedAbsoluteTimestamp:(double)a0;
- (void)updateLatchedAbsoluteTimestamp;

@end
