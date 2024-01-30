@class NSConditionLock, MTPromiseCompletionBlocks, MTPromiseResult;

@interface MTPromise : NSObject

@property (retain, nonatomic) MTPromiseCompletionBlocks *completionBlocks;
@property (retain, nonatomic) MTPromiseResult *promiseResult;
@property (retain, nonatomic) NSConditionLock *stateLock;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;

+ (id)promiseWithAll:(id)a0;
+ (void)_finishPromise:(id)a0 withPromise:(id)a1;
+ (id)promiseWithAny:(id)a0;
+ (id)promiseWithError:(id)a0;
+ (id)_globalPromiseStorage;
+ (void)_configureAllPromise:(id)a0 withResults:(id)a1 promises:(id)a2 currentPromiseIndex:(unsigned long long)a3;
+ (id)promiseWithResult:(id)a0;
+ (id)_globalPromiseStorageAccessQueue;
+ (BOOL)_errorIsCanceledError:(id)a0;
+ (id)promiseWithComposition:(id)a0;
+ (id)_resultOfComposition:(id)a0 errors:(id)a1;
+ (id)_findUnfinishedPromise:(id)a0;
+ (void)_setupCompositePromise:(id)a0 composition:(id)a1;
+ (void)cancelPromisesInComposition:(id)a0;
+ (void)_configureAnyPromise:(id)a0 withPromises:(id)a1 currentPromiseIndex:(unsigned long long)a2;

- (BOOL)cancel;
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
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void)_addBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;
- (id /* block */)boolCompletionHandlerAdapter;
- (void)waitUntilFinished;

@end
