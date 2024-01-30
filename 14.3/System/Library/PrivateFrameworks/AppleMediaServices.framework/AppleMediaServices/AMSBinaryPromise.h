@class AMSPromise;

@interface AMSBinaryPromise : NSObject

@property (retain, nonatomic) AMSPromise *backingPromise;

+ (id)promiseWithAll:(id)a0;
+ (id)promiseWithPromise:(id)a0;
+ (id)promiseWithAny:(id)a0;
+ (id)promiseWithSuccess;
+ (id)promiseWithFlattenedPromises:(id)a0;
+ (id)promiseWithError:(id)a0;
+ (id)_globalPromiseStorage;
+ (id)_globalPromiseStorageAccessQueue;

- (BOOL)cancel;
- (id)thenWithBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)resultWithError:(id *)a0;
- (void)addFinishBlock:(id /* block */)a0;
- (BOOL)resultWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)finishWithError:(id)a0;
- (id)init;
- (void)addErrorBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)catchWithBlock:(id /* block */)a0;
- (id /* block */)completionHandlerAdapter;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (void)_removeFromGlobalPromiseStorage;
- (void)waitUntilFinished;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)finishWithPromise:(id)a0;
- (BOOL)finishWithSuccess;
- (id)promiseAdapter;
- (id)continueWithBlock:(id /* block */)a0;

@end
