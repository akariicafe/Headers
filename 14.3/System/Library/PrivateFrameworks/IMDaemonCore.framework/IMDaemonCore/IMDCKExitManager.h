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

- (BOOL)_saltZoneCreated;
- (void)_submitCloudKitMetricWithOperationGroupName:(id)a0 record:(id)a1 useManatee:(BOOL)a2 ignoreZoneNotFoundError:(BOOL)a3 completion:(id /* block */)a4;
- (id)init;
- (id)initRecordZoneManager:(id)a0 databaseManager:(id)a1;
- (BOOL)_canSubmitCloudKitMetric;
- (void)dealloc;
- (id)analyticZoneRecordID;
- (void)submitCloudKitAnalyticWithDictionary:(id)a0 operationGroupName:(id)a1 useManatee:(BOOL)a2 completion:(id /* block */)a3;
- (id)syncCompleteRecordID;
- (void)_scheduleOperation:(id)a0;
- (id)_sharedCKUtilities;
- (void)writeExitRecordWithDate:(id)a0 completion:(id /* block */)a1;
- (void)_scheduleMetricOperation:(id)a0 useManate:(BOOL)a1;
- (id)_modifiedOpGroupName:(id)a0 useManatee:(BOOL)a1;
- (void)exitRecordDateWithCompletion:(id /* block */)a0;
- (void)submitCloudKitAnalyticWithOperationGroupName:(id)a0 useManatee:(BOOL)a1 analyticDictionary:(id)a2;
- (BOOL)_canSubmitCloudKitAnalytic;
- (BOOL)_analyticZoneCreated;
- (void)handleNotificationForSubscriptionID:(id)a0;
- (void)submitCloudKitMetricWithOperationGroupName:(id)a0 useManatee:(BOOL)a1;
- (void)_setUpSubscription;
- (void)sendCloudKitZoneFetchRequestToNoteFeatureIsOn;
- (void)_evalToggleiCloudSettingsSwitch;
- (long long)derivedQualityOfService;
- (id)exitConfiguration;
- (void)writeInitialSyncCompletedRecordIfNeeded;
- (BOOL)_subscriptionCreated;
- (void)_fetchExitRecordDateWithCompletion:(id /* block */)a0;
- (void)submitCloudKitMetricWithData:(id)a0 operationGroupName:(id)a1 useManatee:(BOOL)a2 completion:(id /* block */)a3;
- (void)writeSyncCompletedRecordWithDate:(id)a0 useManatee:(BOOL)a1 completion:(id /* block */)a2;
- (void)deleteExitRecordWithCompletion:(id /* block */)a0;

@end
