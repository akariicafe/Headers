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

- (BOOL)cancel;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)initWithTask:(id)a0;
- (BOOL)run;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)recover:(id /* block */)a0;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)finishWithError:(id)a0;
- (id)init;
- (id)result:(id *)a0;
- (void)didCancel;
- (BOOL)nts_isFinished;
- (void).cxx_destruct;
- (void)addFailureBlock:(id /* block */)a0;
- (id)flatMap:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0;
- (id /* block */)completionHandlerAdapter;
- (void)_flushCompletionBlocks;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void)addSuccessBlock:(id /* block */)a0 scheduler:(id)a1;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)a0;
- (id)futureResult;
- (void)addFailureBlock:(id /* block */)a0 scheduler:(id)a1;
- (id /* block */)boolErrorCompletionHandlerAdapter;

@end
