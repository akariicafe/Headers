@class NSLock;

@interface AMSLazyPromise : AMSPromise

@property (retain, nonatomic) NSLock *lock;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL executedBlock;
@property (nonatomic) double timeout;

- (void)addErrorBlock:(id /* block */)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)initWithBlock:(id /* block */)a0;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (id)resultWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0 block:(id /* block */)a1;
- (BOOL)_runBlock;
- (void)addFinishBlock:(id /* block */)a0;

@end
