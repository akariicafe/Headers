@class NSString, NSConditionLock, CNSuspendableSchedulerDecorator, CNFutureResult;

@interface _CNBlockFutureImpl : NSObject <CNFutureImpl> {
    CNFutureResult *_futureResult;
    BOOL _queueSuspended;
}

@property (readonly, nonatomic) NSConditionLock *stateLock;
@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *blockScheduler;
@property (nonatomic) BOOL workBlockScheduled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implWithSchedulerProvider:(id)a0 block:(id /* block */)a1;
+ (id)lazyImplWithSchedulerProvider:(id)a0 block:(id /* block */)a1;
+ (id)implWithBlock:(id /* block */)a0;
+ (id)lazyImplWithBlock:(id /* block */)a0;

- (BOOL)cancel;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)resumeQueue;
- (void)updateDescriptionWithBuilder:(id)a0;
- (id)initWithSchedulerProvider:(id)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)_nts_isFinished;
- (id)futureResultFromImmediateLookup;
- (id)init;
- (BOOL)nts_isFinished;
- (void).cxx_destruct;
- (void)addFailureBlock:(id /* block */)a0;
- (BOOL)isCancelled;
- (void)_flushCompletionBlocks;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void)dealloc;
- (BOOL)isFinished;
- (void)implicitlyResumeQueue;
- (id)futureResult;
- (id)futureResultFromAsynchronousLookupBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)nts_mayResumeQueue;
- (void)addWriterBlock:(id /* block */)a0;
- (void)nts_resumeQueue;

@end
