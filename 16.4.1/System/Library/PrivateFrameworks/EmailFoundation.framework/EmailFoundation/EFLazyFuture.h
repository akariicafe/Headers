@class EFPromise, NSConditionLock;
@protocol EFScheduler;

@interface EFLazyFuture : EFFuture {
    NSConditionLock *_stateLock;
    id<EFScheduler> _scheduler;
    id /* block */ _block;
    EFPromise *_promise;
}

- (BOOL)run;
- (id)delegate;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)tryCancel;
- (void)addFailureBlock:(id /* block */)a0;
- (void)onScheduler:(id)a0 addSuccessBlock:(id /* block */)a1;
- (BOOL)isFinished;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)resultIfAvailable:(id *)a0;
- (id)initWithScheduler:(id)a0 block:(id /* block */)a1;
- (void)setDelegate:(id)a0;
- (BOOL)isCancelled;
- (void).cxx_destruct;
- (void)onScheduler:(id)a0 addFailureBlock:(id /* block */)a1;

@end
