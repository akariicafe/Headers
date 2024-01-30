@protocol ASDTaskScheduler;

@interface ASDPromiseObserver : NSObject

@property (readonly) id /* block */ valueBlock;
@property (readonly) id /* block */ errorBlock;
@property (readonly) id<ASDTaskScheduler> scheduler;

- (void).cxx_destruct;
- (id)initWithValueBlock:(id /* block */)a0 errorBlock:(id /* block */)a1 scheduler:(id)a2;
- (void)notifyResolvedWithValue:(id)a0;
- (void)notifyRejectedWithError:(id)a0;

@end
