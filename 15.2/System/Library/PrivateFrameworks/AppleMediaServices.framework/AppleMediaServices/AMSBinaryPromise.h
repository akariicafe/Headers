@class AMSPromise;

@interface AMSBinaryPromise : NSObject

@property (retain, nonatomic) AMSPromise *backingPromise;

+ (id)_globalPromiseStorage;
+ (id)promiseWithSuccess;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)promiseWithAll:(id)a0;
+ (id)promiseWithError:(id)a0;
+ (id)promiseWithPromise:(id)a0;
+ (id)promiseWithFlattenedPromises:(id)a0;
+ (id)promiseWithAny:(id)a0;

- (void)addErrorBlock:(id /* block */)a0;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)finishWithError:(id)a0;
- (BOOL)resultWithTimeout:(double)a0 error:(id *)a1;
- (id /* block */)completionHandlerAdapter;
- (BOOL)resultWithError:(id *)a0;
- (void).cxx_destruct;
- (id)catchWithBlock:(id /* block */)a0;
- (void)_removeFromGlobalPromiseStorage;
- (id)init;
- (BOOL)finishWithPromise:(id)a0;
- (void)addFinishBlock:(id /* block */)a0;
- (BOOL)finishWithSuccess;
- (id)promiseAdapter;
- (id)continueWithBlock:(id /* block */)a0;
- (BOOL)cancel;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (id)thenWithBlock:(id /* block */)a0;
- (void)waitUntilFinished;

@end
