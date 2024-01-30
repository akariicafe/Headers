@class CNTask, NSString, NSConditionLock, CNFutureResult, CNFutureCompletionBlocks;

@interface CNFutureTask : NSObject <CNFuture, CNPromise> {
    NSConditionLock *_stateLock;
    CNFutureResult *_futureResult;
    CNTask *_task;
    CNFutureCompletionBlocks *_completionBlocks;
}

@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)result:(id *)a0;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (BOOL)run;
- (id)initWithTask:(id)a0;
- (BOOL)finishWithError:(id)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)didCancel;
- (id)recover:(id /* block */)a0;
- (id)flatMap:(id /* block */)a0;
- (void)addFailureBlock:(id /* block */)a0;
- (void)_flushCompletionBlocks;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)finishWithResult:(id)a0;
- (BOOL)nts_isFinished;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (void)addSuccessBlock:(id /* block */)a0 scheduler:(id)a1;
- (BOOL)cancel;
- (void)addFailureBlock:(id /* block */)a0 scheduler:(id)a1;
- (id)init;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)a0;
- (void).cxx_destruct;
- (id)futureResult;

@end
