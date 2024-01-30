@interface AMSLazyPromise : AMSPromise

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL executedBlock;
@property (nonatomic) double timeout;

- (void)addSuccessBlock:(id /* block */)a0;
- (id)resultWithError:(id *)a0;
- (void)addFinishBlock:(id /* block */)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (void)addErrorBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0 block:(id /* block */)a1;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)_runBlock;

@end
