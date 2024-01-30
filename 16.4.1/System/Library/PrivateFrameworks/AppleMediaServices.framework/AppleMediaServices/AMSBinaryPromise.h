@class AMSMutablePromise;

@interface AMSBinaryPromise : NSObject

@property (retain, nonatomic) AMSMutablePromise *backingPromise;

+ (id)promiseWithAny:(id)a0;
+ (id)promiseWithPromise:(id)a0;
+ (id)_globalPromiseStorage;
+ (id)promiseWithSuccess;
+ (id)promiseWithError:(id)a0;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)promiseWithFlattenedPromises:(id)a0;
+ (id)promiseWithAll:(id)a0;

- (BOOL)finishWithError:(id)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)resultWithError:(id *)a0;
- (void)addErrorBlock:(id /* block */)a0;
- (void)waitUntilFinished;
- (BOOL)resultWithTimeout:(double)a0 error:(id *)a1;
- (void)resultWithCompletion:(id /* block */)a0;
- (BOOL)finishWithSuccess;
- (void)addFinishBlock:(id /* block */)a0;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (id)catchWithBlock:(id /* block */)a0;
- (id /* block */)completionHandlerAdapter;
- (id)thenWithBlock:(id /* block */)a0;
- (id)promiseAdapter;
- (BOOL)cancel;
- (id)continueWithBlock:(id /* block */)a0;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)finishWithPromise:(id)a0;
- (id)init;
- (void)resultWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void)_removeFromGlobalPromiseStorage;
- (void).cxx_destruct;

@end
