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
+ (id)lazyImplWithBlock:(id /* block */)a0;
+ (id)lazyImplWithSchedulerProvider:(id)a0 block:(id /* block */)a1;

- (BOOL)_nts_isFinished;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)resumeQueue;
- (void)addFailureBlock:(id /* block */)a0;
- (BOOL)isFinished;
- (void)_flushCompletionBlocks;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)initWithSchedulerProvider:(id)a0;
- (void)nts_resumeQueue;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void)updateDescriptionWithBuilder:(id)a0;
- (BOOL)nts_isFinished;
- (BOOL)nts_mayResumeQueue;
- (BOOL)isCancelled;
- (BOOL)cancel;
- (void)dealloc;
- (id)futureResultFromAsynchronousLookupBeforeDate:(id)a0 error:(id *)a1;
- (void)implicitlyResumeQueue;
- (id)init;
- (void)addWriterBlock:(id /* block */)a0;
- (id)futureResultFromImmediateLookup;
- (void).cxx_destruct;
- (id)futureResult;

@end
