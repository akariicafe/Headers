@class IMDCKDatabaseManager, CKRecordID, NSDate, NSError, IMDRecordZoneManager, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCKExitManager : IMDCKAbstractSyncController

@property (retain, nonatomic) CKRecordID *exitRecordID;
@property (retain, nonatomic) NSNumber *saltZoneCreatedOverride;
@property (retain, nonatomic) NSNumber *subscriptionCreatedOverride;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager;
@property (retain, nonatomic) IMDCKDatabaseManager *databaseManager;
@property (retain, nonatomic) NSDate *exitRecordDate;
@property (retain, nonatomic) NSError *errorFetchingExitDate;
@property (nonatomic) BOOL fetchedExitDateOnLaunch;

+ (id)sharedInstance;

- (BOOL)_canSubmitCloudKitMetric;
- (id)analyticZoneRecordID;
- (BOOL)_saltZoneCreated;
- (id)syncCompleteRecordID;
- (void)_submitCloudKitMetricWithOperationGroupName:(id)a0 record:(id)a1 ignoreZoneNotFoundError:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)_subscriptionCreated;
- (void)submitCloudKitMetricWithData:(id)a0 operationGroupName:(id)a1 completion:(id /* block */)a2;
- (void)_scheduleOperation:(id)a0;
- (void)handleNotificationForSubscriptionID:(id)a0;
- (id)exitConfiguration;
- (void)writeSyncCompletedRecordWithDate:(id)a0 completion:(id /* block */)a1;
- (void)_evalToggleiCloudSettingsSwitch;
- (void)writeExitRecordWithDate:(id)a0 completion:(id /* block */)a1;
- (void)sendCloudKitZoneFetchRequestToNoteFeatureIsOn;
- (void)_scheduleMetricOperation:(id)a0;
- (void)submitCloudKitMetricWithOperationGroupName:(id)a0;
- (void)_setUpSubscription;
- (id)_modifiedOpGroupName:(id)a0;
- (long long)derivedQualityOfService;
- (void)deleteExitRecordWithCompletion:(id /* block */)a0;
- (BOOL)_canSubmitCloudKitAnalytic;
- (id)_sharedCKUtilities;
- (void)exitRecordDateWithCompletion:(id /* block */)a0;
- (void)submitCloudKitAnalyticWithOperationGroupName:(id)a0 analyticDictionary:(id)a1;
- (void)writeInitialSyncCompletedRecordIfNeeded;
- (id)init;
- (void)_fetchExitRecordDateWithCompletion:(id /* block */)a0;
- (BOOL)_analyticZoneCreated;
- (id)initRecordZoneManager:(id)a0 databaseManager:(id)a1;
- (void).cxx_destruct;
- (void)submitCloudKitAnalyticWithDictionary:(id)a0 operationGroupName:(id)a1 completion:(id /* block */)a2;

@end
