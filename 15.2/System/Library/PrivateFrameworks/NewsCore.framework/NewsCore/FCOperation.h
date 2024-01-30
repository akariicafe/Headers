@class FCOnce, NSString, NSDictionary, NSObject, NSMutableArray, NFUnfairLock;
@protocol OS_dispatch_group;

@interface FCOperation : NSOperation <FCOperationCanceling, FCOperationIdentifying, FCOperationPrioritizing> {
    _Atomic BOOL _executing;
    _Atomic BOOL _finished;
    BOOL _childOperationsCancelled;
    id /* block */ _timedOutTest;
    NSMutableArray *_childOperations;
    NFUnfairLock *_childOperationsLock;
    FCOnce *_startOnce;
    NSObject<OS_dispatch_group> *_finishedGroup;
}

@property (nonatomic) double operationStartTime;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) double timeoutDuration;
@property (nonatomic) BOOL isBackgroundDownloadOperation;
@property (copy, nonatomic) NSString *purpose;
@property (readonly, nonatomic) FCOperation *proxyOperation;
@property (readonly, copy, nonatomic) NSString *operationID;
@property (readonly, nonatomic) BOOL hasOperationStarted;
@property (readonly, copy, nonatomic) NSDictionary *errorUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *shortOperationDescription;
@property (readonly, nonatomic) NSString *longOperationDescription;
@property (nonatomic) long long relativePriority;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)finishedPerformingOperationWithError:(id)a0;
- (void)startIfNeeded;
- (void)prepareOperation;
- (id)throttleGroup;
- (unsigned long long)maxRetries;
- (void)addCompletionHandler:(id /* block */)a0;
- (void)operationDidFinishWithError:(id)a0;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (BOOL)waitUntilFinishedWithTimeout:(double)a0;
- (void)associateChildOperations:(id)a0;
- (void)cancelChildOperations;
- (void)resetForRetry;
- (unsigned long long)propertiesInheritedByChildOperations;
- (void)finishFromEarlyCancellation;
- (void)associateChildOperation:(id)a0;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)shouldStartThrottlingWithError:(id)a0 retryAfter:(double *)a1;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)setQualityOfService:(long long)a0;
- (void)start;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancel;

@end
