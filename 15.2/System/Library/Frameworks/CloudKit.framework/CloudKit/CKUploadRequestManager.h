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

+ (double)retryableErrorRetryTime;
+ (double)tryAgainLaterRetryTime;
+ (id)activityIdentifierForSchedulingRepairsInContainer:(id)a0;
+ (double)cancelledErrorRetryTime;
+ (double)retryableErrorMaxRetryCount;
+ (double)recurringFetchPeriod;

- (void)setCallback:(id /* block */)a0 forOverridePoint:(long long)a1;
- (id)initWithContainer:(id)a0 repairContainerOverrides:(id)a1 ignoringSystemConditions:(BOOL)a2;
- (void)unregister;
- (id)initWithContainer:(id)a0 repairContainerOverrides:(id)a1;
- (void).cxx_destruct;
- (void)cancelAllOperations;
- (void)manuallyTriggerUploadRequests;
- (void)dealloc;
- (void)registerForItemRequests;
- (void)fetchServerChanges:(id /* block */)a0;
- (void)scheduleOrInvokeRepairsNow;

@end
