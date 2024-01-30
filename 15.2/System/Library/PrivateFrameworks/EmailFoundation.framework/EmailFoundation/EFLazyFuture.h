@class EFPromise, NSConditionLock;
@protocol EFScheduler;

@interface EFLazyFuture : EFFuture {
    NSConditionLock *_stateLock;
    id<EFScheduler> _scheduler;
    id /* block */ _block;
    EFPromise *_promise;
}

- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)isFinished;
- (void)addFailureBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)tryCancel;
- (void)onScheduler:(id)a0 addFailureBlock:(id /* block */)a1;
- (BOOL)run;
- (void)setDelegate:(id)a0;
- (id)resultIfAvailable:(id *)a0;
- (void).cxx_destruct;
- (id)delegate;
- (void)onScheduler:(id)a0 addSuccessBlock:(id /* block */)a1;
- (BOOL)isCancelled;
- (id)initWithScheduler:(id)a0 block:(id /* block */)a1;

@end
