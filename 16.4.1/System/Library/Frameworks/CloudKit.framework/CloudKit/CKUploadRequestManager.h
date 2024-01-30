@class CKSyncEngine, CKUploadRequestPersistentStore, CKUploadRequestManagerInternals, CKUploadRequestManagerResponseActionThrottler, NSString, CKContainer;

@interface CKUploadRequestManager : NSObject

@property (class, nonatomic) BOOL ignoreUploadRequestPushNotifications;

@property (readonly, nonatomic) CKUploadRequestManagerInternals *internals;
@property (readonly, nonatomic) CKSyncEngine *repairZoneSyncEngine;
@property (readonly, nonatomic) CKContainer *repairContainer;
@property (readonly, nonatomic) CKUploadRequestPersistentStore *database;
@property (readonly, nonatomic) CKUploadRequestManagerResponseActionThrottler *responseActionThrottler;
@property (copy) id /* block */ assetRequestCallback;
@property (copy) id /* block */ packageRequestCallback;
@property (copy) NSString *machServiceName;
@property (readonly, nonatomic) NSString *activityIdentifierForSchedulingRepairs;
@property (nonatomic) double recurringFetchPeriod;
@property (nonatomic) double tryAgainLaterRetryTime;
@property (nonatomic) double retryableErrorRetryTime;
@property (nonatomic) double cancelledErrorRetryTime;
@property (nonatomic) double retryableErrorMaxRetryCount;
@property (nonatomic) double notificationDebouncePeriod;
@property (nonatomic) long long assetRepairSchedulerRepairBatchCountLimit;
@property (nonatomic) double assetRepairSchedulerDefaultSuspensionTime;
@property (nonatomic) long long assetRepairSchedulerRepairRetryCount;

+ (id)activityIdentifierForSchedulingRepairsInContainer:(id)a0;

- (void)unregister;
- (void)fetchServerChanges:(id /* block */)a0;
- (void)manuallyTriggerUploadRequests;
- (void)cancelAllOperations;
- (void)registerForItemRequests;
- (id)initWithContainer:(id)a0 repairContainerOverrides:(id)a1;
- (id)initWithContainer:(id)a0 repairContainerOverrides:(id)a1 ignoringSystemConditions:(BOOL)a2;
- (void)setCallback:(id /* block */)a0 forOverridePoint:(long long)a1;
- (void)dealloc;
- (void)scheduleOrInvokeRepairsNow;
- (void).cxx_destruct;

@end
