@class CKSyncEngine, CKUploadRequestPersistentStore, CKUploadRequestManagerInternals, NSString, CKContainer;

@interface CKUploadRequestManager : NSObject

@property (readonly, nonatomic) CKUploadRequestManagerInternals *internals;
@property (readonly, nonatomic) CKSyncEngine *repairZoneSyncEngine;
@property (readonly, nonatomic) CKContainer *repairContainer;
@property (readonly, nonatomic) CKUploadRequestPersistentStore *database;
@property (copy) id /* block */ assetRequestCallback;
@property (copy) id /* block */ packageRequestCallback;
@property (copy) NSString *machServiceName;
@property (readonly, nonatomic) NSString *activityIdentifierForSchedulingRepairs;

+ (double)recurringFetchPeriod;
+ (double)tryAgainLaterRetryTime;
+ (double)retryableErrorRetryTime;
+ (double)cancelledErrorRetryTime;
+ (double)retryableErrorMaxRetryCount;
+ (id)activityIdentifierForSchedulingRepairsInContainer:(id)a0;

- (void)unregister;
- (void)cancelAllOperations;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0 repairContainerOverrides:(id)a1;
- (void)fetchServerChanges:(id /* block */)a0;
- (void)scheduleOrInvokeRepairsNow;
- (void)setCallback:(id /* block */)a0 forOverridePoint:(long long)a1;
- (void)dealloc;
- (void)registerForItemRequests;
- (void)manuallyTriggerUploadRequests;
- (id)initWithContainer:(id)a0 repairContainerOverrides:(id)a1 ignoringSystemConditions:(BOOL)a2;

@end
