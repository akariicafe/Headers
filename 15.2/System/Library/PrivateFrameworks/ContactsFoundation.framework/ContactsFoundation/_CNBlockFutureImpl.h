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

+ (id)implWithBlock:(id /* block */)a0;
+ (id)implWithSchedulerProvider:(id)a0 block:(id /* block */)a1;
+ (id)lazyImplWithSchedulerProvider:(id)a0 block:(id /* block */)a1;
+ (id)lazyImplWithBlock:(id /* block */)a0;

- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)_nts_isFinished;
- (void)_flushCompletionBlocks;
- (BOOL)isFinished;
- (void)addFailureBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)addWriterBlock:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (id)futureResultFromAsynchronousLookupBeforeDate:(id)a0 error:(id *)a1;
- (void)resumeQueue;
- (void)updateDescriptionWithBuilder:(id)a0;
- (id)futureResult;
- (BOOL)nts_isFinished;
- (void)nts_resumeQueue;
- (void).cxx_destruct;
- (id)initWithSchedulerProvider:(id)a0;
- (id)init;
- (void)implicitlyResumeQueue;
- (BOOL)isCancelled;
- (BOOL)nts_mayResumeQueue;
- (id)futureResultFromImmediateLookup;
- (void)dealloc;
- (BOOL)cancel;

@end
