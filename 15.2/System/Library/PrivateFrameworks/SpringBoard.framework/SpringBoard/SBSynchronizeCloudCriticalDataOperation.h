@class BSMonotonicReferenceTime, SBBootDefaults, NSOperationQueue, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SBSynchronizeCloudCriticalDataOperation : NSObject {
    BOOL _needsSync;
    SBBootDefaults *_queue_bootDefaults;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_queue_operationGroup;
    unsigned long long _queue_operationCount;
    BOOL _queue_isComplete;
    BSMonotonicReferenceTime *_queue_cloudSyncStartReferenceTime;
    NSMutableArray *_blockingTestOperations;
    NSMutableArray *_nonblockingTestOperations;
}

@property (readonly, nonatomic, getter=isComplete) BOOL complete;

- (unsigned long long)_pendingOperationCount;
- (void).cxx_destruct;
- (id)init;
- (void)startSynchronize;
- (BOOL)waitForSynchronizeToCompleteWithTimeout:(double)a0;
- (id)initWithDefaults:(id)a0 userManager:(id)a1;
- (BOOL)_queue_isComplete;
- (void)_queue_startFetchingCloudCriticalData;
- (id)_queue_fetchCloudAccountOperation;
- (id)_queue_fetchCloudDefaultsOperation;
- (id)_queue_fetchMDMProfilesOperation;
- (id)_queue_migrateSoundPreferencesOperation;
- (void)_queue_addOperation:(id)a0 shouldBlock:(BOOL)a1;
- (void)_fetchDomains:(id)a0 fromIndex:(long long)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)_addTestOperation:(id)a0 shouldBlock:(BOOL)a1;

@end
