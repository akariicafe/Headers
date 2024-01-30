@class _CATObserverManager, NSUUID, NSDictionary, NSArray, NSError, NSDate, NSLock;

@interface CATOperation : NSOperation {
    NSArray *mCallStackSymbols;
    _Atomic int mState;
    NSLock *mLock;
    _CATObserverManager *mObserverManager;
}

@property (retain) NSUUID *UUID;
@property unsigned long long phase;
@property (retain) NSDate *createdDate;
@property (retain) NSDate *enqueuedDate;
@property (retain) NSDate *startedDate;
@property (retain) NSDate *finishedDate;
@property (retain) NSError *error;
@property (retain) NSDictionary *userInfo;
@property (retain) id resultObject;
@property long long completedUnitCount;
@property long long totalUnitCount;
@property (readonly) BOOL isCanceled;
@property (readonly) BOOL canCancel;

+ (id)callStackSymbols;
+ (BOOL)isCancelable;
+ (BOOL)automaticallyNotifiesObserversOfUUID;
+ (BOOL)automaticallyNotifiesObserversOfCreatedDate;
+ (BOOL)automaticallyNotifiesObserversOfEnqueuedDate;
+ (BOOL)automaticallyNotifiesObserversOfStartedDate;
+ (BOOL)automaticallyNotifiesObserversOfFinishedDate;
+ (id)keyPathsForValuesAffectingIsCanceled;

- (BOOL)isReady;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (id)description;
- (void)operationWillStart;
- (void)operationWillFinish;
- (void)start;
- (id)stateDescription;
- (void)endOperationWithResultObject:(id)a0;
- (void)addTarget:(id)a0 selector:(SEL)a1 forOperationEvents:(unsigned long long)a2;
- (void)addTarget:(id)a0 selector:(SEL)a1 forOperationEvents:(unsigned long long)a2 delegateQueue:(id)a3;
- (void)addTarget:(id)a0 selector:(SEL)a1 forOperationEvents:(unsigned long long)a2 userInfo:(id)a3 delegateQueue:(id)a4;
- (BOOL)whenStateIs:(int)a0 atomicallySwapWith:(int)a1;
- (void)endOperationWithError:(id)a0;
- (void)endOperationSuccessfullyIfNeeded;
- (void)finalizeOperation;
- (void)operationDidFinish;
- (void)operationWillEnqueueOntoOperationQueue:(id)a0;
- (void)addTarget:(id)a0 selector:(SEL)a1 forOperationEvents:(unsigned long long)a2 userInfo:(id)a3;

@end
