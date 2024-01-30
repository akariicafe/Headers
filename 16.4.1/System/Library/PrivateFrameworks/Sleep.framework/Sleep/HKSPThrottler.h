@protocol NAScheduler;

@interface HKSPThrottler : NSObject {
    double _interval;
    id<NAScheduler> _scheduler;
    id /* block */ _executeBlock;
    BOOL _hasBlockPending;
}

- (void)execute;
- (id)initWithInterval:(double)a0 executeBlock:(id /* block */)a1;
- (id)initWithInterval:(double)a0 executeBlock:(id /* block */)a1 scheduler:(id)a2;
- (void).cxx_destruct;

@end
