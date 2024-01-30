@class AMSPromiseCompletionBlocks, AMSPromiseResult, NSConditionLock;

@interface AMSPromise : NSObject

@property (retain) AMSPromiseCompletionBlocks *completionBlocks;
@property (retain) AMSPromiseResult *promiseResult;
@property struct Promise<PromiseResult> { void /* function */ **_vptr$Future; struct shared_ptr<AMSCore::Future<PromiseResult>::FutureImp> { struct FutureImp *__ptr_; struct __shared_weak_count *__cntrl_; } mFutureImp; } backingPromise;
@property (readonly, nonatomic) NSConditionLock *stateLock;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic, getter=isTimedOut) BOOL timedOut;

+ (id)promiseWithAny:(id)a0;
+ (id)promiseWithSome:(id)a0 timeout:(double)a1;
+ (id)_globalPromiseStorage;
+ (id)promiseWithAll:(id)a0 timeout:(double)a1;
+ (BOOL)_errorIsCanceledError:(id)a0;
+ (id)promiseFinishedWithDefaultErrorOrResult:(id)a0;
+ (id)unwrappedPromiseWithPromise:(id)a0;
+ (id)promiseWithResult:(id)a0;
+ (id)promiseWithAny:(id)a0 timeout:(double)a1;
+ (id)promiseWithPromiseResult:(id)a0;
+ (id)promiseWithError:(id)a0;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)promiseWithSome:(id)a0;
+ (void)_enumeratePromises:(id)a0 startingAt:(long long)a1 block:(id /* block */)a2;
+ (id)promiseWithFlattenedPromises:(id)a0;
+ (id)promiseWithAll:(id)a0;
+ (void)_configureFlattenedPromise:(id)a0 withPromises:(id)a1 results:(id)a2 previousError:(id)a3 currentPromiseIndex:(unsigned long long)a4;
+ (BOOL)_errorIsTimeOutError:(id)a0;

- (BOOL)finishWithError:(id)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)resultWithError:(id *)a0;
- (void)addErrorBlock:(id /* block */)a0;
- (id /* block */)boolCompletionHandlerAdapter;
- (BOOL)_isFinished;
- (id).cxx_construct;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (void)waitUntilFinished;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (void)resultWithCompletion:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void)addBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;
- (void)addFinishBlock:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (id)catchWithBlock:(id /* block */)a0;
- (id /* block */)completionHandlerAdapter;
- (BOOL)finishWithPromiseResult:(id)a0;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (id)thenWithBlock:(id /* block */)a0;
- (id /* block */)nilValueCompletionHandlerAdapter;
- (BOOL)cancel;
- (id)continueWithBlock:(id /* block */)a0;
- (BOOL)finishWithPromise:(id)a0;
- (id)promiseWithTimeout:(double)a0;
- (id)initWithTimeout:(double)a0;
- (id)init;
- (void)resultWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)binaryPromiseAdapter;
- (id)mutablePromiseAdapter;
- (void)resultBeforeDate:(id)a0 completion:(id /* block */)a1;

@end
