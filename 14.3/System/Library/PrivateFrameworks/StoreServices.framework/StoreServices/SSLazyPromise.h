@class NSLock;

@interface SSLazyPromise : SSPromise

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSLock *executeBlockLock;
@property (nonatomic) BOOL executedBlock;

- (void)addSuccessBlock:(id /* block */)a0;
- (id)resultWithError:(id *)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (void)addErrorBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)_runBlock;

@end
