@class NSString, WBSCloudKitOperationRetryManager, CKOperationConfiguration, NSOperationQueue, CKOperationGroup, NSMutableSet, NSObject, CKOperation, NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue;

@interface WBSRetryableCKOperation : NSOperation <WBSDeallocationSentinelObserver> {
    NSOperationQueue *_operationQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
    NSMutableSet *_explicitlySetProperties;
    WBSCloudKitOperationRetryManager *_retryManager;
    long long _status;
    NSMutableArray *_childOperationIDs;
}

@property (nonatomic, getter=_status, setter=_setStatus:) long long status;
@property (readonly, getter=isExecuting) BOOL executing;
@property (readonly, getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, weak, nonatomic) id owner;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *handlingQueue;
@property (readonly, copy, nonatomic) NSString *operationID;
@property (readonly, nonatomic) CKOperation *currentOperation;
@property (copy, nonatomic) id /* block */ ownerDidDeallocateBlock;
@property (nonatomic) double timeout;
@property (readonly, nonatomic) unsigned long long numberOfRetries;
@property (copy, nonatomic) id /* block */ didReceiveNonRetryableError;
@property (copy, nonatomic) id /* block */ didExceedRetryTimeout;
@property (copy, nonatomic) CKOperationConfiguration *configuration;
@property (retain, nonatomic) CKOperationGroup *group;
@property (copy, nonatomic) id /* block */ longLivedOperationWasPersistedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (long long)qualityOfService;
- (void)setQualityOfService:(long long)a0;
- (id)_makeOperation;
- (void)_setUpOperation:(id)a0;
- (void)sentinelDidDeallocateWithContext:(id)a0;
- (void)cancel;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (BOOL)_scheduleRetryIfNeededForError:(id)a0;
- (void)_didFinishOperation;
- (void)_scheduleNextOperation;
- (const void *)_sentinelAssociatedObjectKey;
- (id)initWithOwner:(id)a0 handlingQueue:(id)a1;

@end
