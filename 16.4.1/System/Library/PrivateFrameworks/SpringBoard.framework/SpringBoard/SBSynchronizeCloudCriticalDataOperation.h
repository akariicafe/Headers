@class SBBootDefaults, NSOperationQueue, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SBSynchronizeCloudCriticalDataOperation : NSObject {
    BOOL _needsSync;
    SBBootDefaults *_queue_bootDefaults;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_queue_operationGroup;
    unsigned long long _queue_operationCount;
    BOOL _queue_isComplete;
    double _queue_cloudSyncStartTime;
    NSMutableArray *_blockingTestOperations;
    NSMutableArray *_nonblockingTestOperations;
}

@property (readonly, nonatomic, getter=isComplete) BOOL complete;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_pendingOperationCount;
- (void)_addTestOperation:(id)a0 shouldBlock:(BOOL)a1;
- (void)_fetchDomains:(id)a0 fromIndex:(long long)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)_queue_addOperation:(id)a0 shouldBlock:(BOOL)a1;
- (id)_queue_fetchCloudAccountOperation;
- (id)_queue_fetchCloudDefaultsOperation;
- (id)_queue_fetchMDMProfilesOperation;
- (BOOL)_queue_isComplete;
- (id)_queue_migrateSoundPreferencesOperation;
- (void)_queue_startFetchingCloudCriticalData;
- (id)initWithDefaults:(id)a0 userManager:(id)a1;
- (void)startSynchronize;
- (BOOL)waitForSynchronizeToCompleteWithTimeout:(double)a0;

@end
