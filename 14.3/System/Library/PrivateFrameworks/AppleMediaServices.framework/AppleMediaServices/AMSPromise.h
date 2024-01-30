@class AMSPromiseCompletionBlocks, AMSPromiseResult, NSConditionLock;

@interface AMSPromise : NSObject

@property (retain, nonatomic) AMSPromiseCompletionBlocks *completionBlocks;
@property (retain, nonatomic) AMSPromiseResult *promiseResult;
@property (retain, nonatomic) NSConditionLock *stateLock;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic, getter=isTimedOut) BOOL timedOut;

+ (id)promiseWithAll:(id)a0;
+ (void)_finishPromise:(id)a0 withPromise:(id)a1;
+ (BOOL)_errorIsTimeOutError:(id)a0;
+ (void)_enumeratePromises:(id)a0 startingAt:(long long)a1 block:(id /* block */)a2;
+ (id)promiseWithAny:(id)a0;
+ (id)promiseFinishedWithDefaultErrorOrResult:(id)a0;
+ (void)_configureFlattenedPromise:(id)a0 withPromises:(id)a1 results:(id)a2 previousError:(id)a3 currentPromiseIndex:(unsigned long long)a4;
+ (id)promiseWithFlattenedPromises:(id)a0;
+ (id)promiseWithError:(id)a0;
+ (id)_globalPromiseStorage;
+ (id)promiseWithResult:(id)a0;
+ (id)promiseWithAll:(id)a0 timeout:(double)a1;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)promiseWithAny:(id)a0 timeout:(double)a1;
+ (BOOL)_errorIsCanceledError:(id)a0;

- (void)startTimeout:(double)a0;
- (BOOL)cancel;
- (id)binaryPromiseAdapter;
- (id)thenWithBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)resultWithError:(id *)a0;
- (void)addFinishBlock:(id /* block */)a0;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)finishWithError:(id)a0;
- (id)init;
- (void)addErrorBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)catchWithBlock:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0;
- (id /* block */)completionHandlerAdapter;
- (BOOL)_isFinished;
- (id /* block */)nilValueCompletionHandlerAdapter;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (id)initWithTimeout:(double)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void)_addBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;
- (id)promiseWithTimeout:(double)a0;
- (id /* block */)boolCompletionHandlerAdapter;
- (void)waitUntilFinished;
- (BOOL)finishWithPromise:(id)a0;
- (BOOL)_finishWithResult:(id)a0 error:(id)a1 logDuplicateFinishes:(BOOL)a2;
- (id)continueWithBlock:(id /* block */)a0;

@end
