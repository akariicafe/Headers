@interface AMSMutablePromise : AMSPromise

+ (id)promiseWithAny:(id)a0;
+ (BOOL)finishPromise:(id)a0 withPromise:(id)a1;
+ (id)promiseWithAll:(id)a0 timeout:(double)a1;
+ (BOOL)_finishPromise:(id)a0 withResult:(id)a1 error:(id)a2 logDuplicateFinishes:(BOOL)a3;
+ (BOOL)finishPromise:(id)a0 withError:(id)a1;
+ (BOOL)finishPromise:(id)a0 withResult:(id)a1 error:(id)a2;
+ (BOOL)finishPromise:(id)a0 withResult:(id)a1;
+ (id)promiseWithAny:(id)a0 timeout:(double)a1;
+ (id)promiseWithFlattenedPromises:(id)a0;
+ (id)promiseWithAll:(id)a0;
+ (void)startTimeoutForPromise:(id)a0 timeout:(double)a1;
+ (BOOL)cancelPromise:(id)a0;

- (BOOL)finishWithError:(id)a0;
- (BOOL)_finishWithResult:(id)a0 error:(id)a1 logDuplicateFinishes:(BOOL)a2;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)finishWithResult:(id)a0;
- (void)startTimeout:(double)a0;
- (id)catchWithBlock:(id /* block */)a0;
- (BOOL)finishWithPromiseResult:(id)a0;
- (id)thenWithBlock:(id /* block */)a0;
- (BOOL)cancel;
- (id)continueWithBlock:(id /* block */)a0;
- (BOOL)finishWithPromise:(id)a0;
- (id)promiseWithTimeout:(double)a0;
- (id)initWithTimeout:(double)a0;

@end
