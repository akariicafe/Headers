@class RCMutexLock, NSString, RCOnce, NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface RCOperation : NSOperation <RCOperationCanceling, RCOperationIdentifying, RCOperationPrioritizing> {
    BOOL _executing;
    BOOL _finished;
}

@property (copy, nonatomic) id /* block */ timedOutTest;
@property (retain, nonatomic) NSMutableArray *childOperations;
@property (nonatomic) BOOL childOperationsCancelled;
@property (retain, nonatomic) RCMutexLock *childOperationsLock;
@property (retain, nonatomic) RCOnce *startOnce;
@property (nonatomic) double operationStartTime;
@property (nonatomic) double operationEndTime;
@property (nonatomic) unsigned long long retryCount;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *finishedGroup;
@property (nonatomic) double timeoutDuration;
@property (readonly, copy, nonatomic) NSString *operationID;
@property (readonly, nonatomic) BOOL hasOperationStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long relativePriority;

- (void)cancel;
- (void)prepareOperation;
- (void)resetForRetry;
- (unsigned long long)maxRetries;
- (void)setQualityOfService:(long long)a0;
- (BOOL)_startIfNeeded;
- (id)init;
- (void).cxx_destruct;
- (void)startIfNeeded;
- (unsigned long long)propertiesInheritedByChildOperations;
- (BOOL)waitUntilFinishedWithTimeout:(double)a0;
- (void)dealloc;
- (id)throttleGroup;
- (BOOL)validateOperation;
- (BOOL)isExecuting;
- (void)cancelChildOperations;
- (BOOL)_shouldThrottleOperationWithRetryAfter:(double *)a0;
- (void)_finishOperationWithError:(id)a0;
- (BOOL)shouldStartThrottlingWithError:(id)a0 retryAfter:(double *)a1;
- (void)_finishedPerformingOperationWithError:(id)a0;
- (void)_handleThrottlingFromError:(id)a0 delay:(double)a1;
- (void)_handleRetryFromError:(id)a0 signal:(id)a1;
- (id)_userDefaultsKeyForThrottleEndDate;
- (void)associateChildOperations:(id)a0;
- (BOOL)isFinished;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (BOOL)isAsynchronous;
- (void)addCompletionHandler:(id /* block */)a0;
- (void)performOperation;
- (void)associateChildOperation:(id)a0;
- (void)_associateChildOperation:(id)a0;
- (void)finishedPerformingOperationWithError:(id)a0;
- (id)longOperationDescription;
- (void)start;
- (void)operationWillFinishWithError:(id)a0;
- (void)operationDidFinishWithError:(id)a0;
- (void)finishFromEarlyCancellation;
- (id)shortOperationDescription;
- (id)_errorUserInfo;

@end
