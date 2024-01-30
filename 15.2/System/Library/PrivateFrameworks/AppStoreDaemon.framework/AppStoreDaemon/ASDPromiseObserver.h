@protocol ASDTaskScheduler;

@interface ASDPromiseObserver : NSObject

@property (readonly) id /* block */ valueBlock;
@property (readonly) id /* block */ errorBlock;
@property (readonly) id<ASDTaskScheduler> scheduler;

- (void)notifyRejectedWithError:(id)a0;
- (void)notifyResolvedWithValue:(id)a0;
- (id)initWithValueBlock:(id /* block */)a0 errorBlock:(id /* block */)a1 scheduler:(id)a2;
- (void).cxx_destruct;

@end
