@protocol ASDTaskScheduler;

@interface ASDPromiseObserver : NSObject {
    id /* block */ _valueBlock;
    id /* block */ _errorBlock;
    id<ASDTaskScheduler> _scheduler;
}

- (id)initWithValueBlock:(id /* block */)a0 errorBlock:(id /* block */)a1 scheduler:(id)a2;
- (void)notifyRejectedWithError:(id)a0;
- (void)notifyResolvedWithValue:(id)a0;
- (void).cxx_destruct;

@end
