@class IMDCKDatabaseManager, CKRecordID, NSDate, NSError, IMDRecordZoneManager, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCKExitManager : IMDCKAbstractSyncController

@property (retain, nonatomic) CKRecordID *exitRecordID;
@property (retain, nonatomic) NSNumber *saltZoneCreatedOverride;
@property (retain, nonatomic) NSNumber *subscriptionCreatedOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager;
@property (retain, nonatomic) IMDCKDatabaseManager *databaseManager;
@property (retain, nonatomic) NSDate *exitRecordDate;
@property (retain, nonatomic) NSError *errorFetchingExitDate;
@property (nonatomic) BOOL fetchedExitDateOnLaunch;

+ (id)sharedInstance;

- (void)_scheduleOperation:(id)a0;
- (void)writeInitialSyncCompletedRecordIfNeeded;
- (void)_scheduleMetricOperation:(id)a0;
- (id)syncCompleteRecordID;
- (id)initRecordZoneManager:(id)a0 databaseManager:(id)a1;
- (id)_modifiedOpGroupName:(id)a0;
- (void)_setUpSubscription;
- (long long)derivedQualityOfService;
- (void)submitCloudKitAnalyticWithOperationGroupName:(id)a0 analyticDictionary:(id)a1;
- (void)writeSyncCompletedRecordWithDate:(id)a0 completion:(id /* block */)a1;
- (void)handleNotificationForSubscriptionID:(id)a0;
- (id)exitConfiguration;
- (id)analyticZoneRecordID;
- (id)init;
- (BOOL)_canSubmitCloudKitAnalytic;
- (id)_sharedCKUtilities;
- (void)_evalToggleiCloudSettingsSwitch;
- (void)submitCloudKitMetricWithOperationGroupName:(id)a0;
- (void)submitCloudKitAnalyticWithDictionary:(id)a0 operationGroupName:(id)a1 completion:(id /* block */)a2;
- (void)submitCloudKitMetricWithData:(id)a0 operationGroupName:(id)a1 completion:(id /* block */)a2;
- (BOOL)_saltZoneCreated;
- (BOOL)_analyticZoneCreated;
- (void)dealloc;
- (void)_fetchExitRecordDateWithCompletion:(id /* block */)a0;
- (void)deleteExitRecordWithCompletion:(id /* block */)a0;
- (void)sendCloudKitZoneFetchRequestToNoteFeatureIsOn;
- (void)exitRecordDateWithCompletion:(id /* block */)a0;
- (void)writeExitRecordWithDate:(id)a0 completion:(id /* block */)a1;
- (void)_submitCloudKitMetricWithOperationGroupName:(id)a0 record:(id)a1 ignoreZoneNotFoundError:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)_canSubmitCloudKitMetric;
- (BOOL)_subscriptionCreated;

@end
