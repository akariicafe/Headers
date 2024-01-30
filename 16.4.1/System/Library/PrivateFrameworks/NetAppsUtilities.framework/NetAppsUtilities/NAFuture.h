@class NSString, NSMutableArray, NSError;
@protocol NAScheduler;

@interface NAFuture : NSObject <NAPromise> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _finished;
    id<NAScheduler> _completionScheduler;
    NSMutableArray *_completionBlocks;
    id _resultValue;
    NSError *_resultError;
}

@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (copy, nonatomic) NSString *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)futureWithError:(id)a0;
+ (id)futureWithResult:(id)a0;
+ (id)lazyFutureWithBlock:(id /* block */)a0;
+ (id)futureWithBlock:(id /* block */)a0;
+ (id)futureWithBlock:(id /* block */)a0 scheduler:(id)a1;
+ (id)combineAllFutures:(id)a0 ignoringErrors:(BOOL)a1 scheduler:(id)a2;
+ (id)combineAllFutures:(id)a0 scheduler:(id)a1;
+ (id)futureWithNoResult;
+ (id)chainFutures:(id)a0;
+ (id)futureWithErrorOnlyHandlerAdapterBlock:(id /* block */)a0;
+ (id)lazyFutureWithBlock:(id /* block */)a0 scheduler:(id)a1;
+ (id)combineAllFutures:(id)a0;
+ (id)_chainFuturesWithFutureStack:(id)a0;
+ (id)_descriptorForChainOperation:(id)a0 onFuture:(id)a1 withBlock:(id)a2;
+ (id)futureWithCompletionHandlerAdapterBlock:(id /* block */)a0;
+ (void)_setShouldEnforceThreadSafety:(BOOL)a0;

- (BOOL)finishWithError:(id)a0;
- (id)addSuccessBlock:(id /* block */)a0;
- (void)didCancel;
- (id)recover:(id /* block */)a0;
- (id)flatMap:(id /* block */)a0;
- (BOOL)_queue_isCancelled;
- (id)recoverIgnoringError;
- (BOOL)finishWithNoResult;
- (id)addFailureBlock:(id /* block */)a0;
- (id)reschedule:(id)a0;
- (id)addCompletionBlock:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)finishWithResult:(id)a0;
- (id)initWithResult:(id)a0 error:(id)a1;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (void)willAddCompletionBlock;
- (BOOL)cancel;
- (id)init;
- (void).cxx_destruct;

@end
