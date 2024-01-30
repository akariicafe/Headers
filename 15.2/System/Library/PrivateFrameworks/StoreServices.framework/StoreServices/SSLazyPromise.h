@class NSLock;

@interface SSLazyPromise : SSPromise

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSLock *executeBlockLock;
@property (nonatomic) BOOL executedBlock;

- (void)addErrorBlock:(id /* block */)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)initWithBlock:(id /* block */)a0;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (id)resultWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)_runBlock;

@end
