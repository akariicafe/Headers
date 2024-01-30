@interface AMSMutableLazyPromise : AMSLazyPromise

- (BOOL)finishWithError:(id)a0;
- (id)initWithTimeout:(double)a0 block:(id /* block */)a1;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)finishWithResult:(id)a0;
- (BOOL)cancel;
- (BOOL)finishWithPromise:(id)a0;
- (id)initWithBlock:(id /* block */)a0;

@end
