@class NSString, WLSocketHandler;

@interface WLMigrator : NSObject <WLMigrationDataCoordinatorDelegate, WLDataMigratorProtocol>

@property (weak, nonatomic) WLSocketHandler *activeSocketHandler;
@property (readonly, nonatomic) NSString *connectionKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_systemVersion;
+ (id)_deviceType;
+ (void)setStashDataLocally:(BOOL)a0;
+ (BOOL)stashDataLocally;
+ (BOOL)_shouldContinueMigrationFromAnotherDevice;
+ (unsigned long long)_bytesFreeOnDevice;
+ (BOOL)_shouldTerminateMigrationBeforeImport;
+ (id)_dataTypesAndSizesXMLDataFromMap:(id)a0;
+ (void)_parseDataTypesXMLData:(id)a0 completion:(id /* block */)a1;
+ (void)_presentPromptForSuggestedApps:(id /* block */)a0;
+ (void)_presentPromptForMigrableApps:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)databaseParentPathForMigrationDataCoordinator:(id)a0 sqlController:(id)a1;
- (id)downloadsParentPathForMigrationDataCoordinator:(id)a0;
- (id)safeHarborsPathForMigrationDataCoordinator:(id)a0;
- (BOOL)migrationDataCoordinator:(id)a0 shouldTerminateFetchWithError:(id)a1;
- (void)_startMigrationWithSourceDevice:(id)a0 usingRetryPolicies:(BOOL)a1 delegate:(id)a2 remoteDeviceDataSource:(id)a3 dataCoordinatorDelegate:(id)a4 mobileInstallation:(id)a5 didFinishMigrationContextSetupBlock:(id /* block */)a6 completion:(id /* block */)a7;
- (void)_finishMigrationWithError:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)_prepareMetadata:(id)a0 usingRetryPolicies:(BOOL)a1 allowContinuationFromAnotherDevice:(BOOL)a2;
- (void)_deleteDownloadsPath:(id)a0;
- (id)_fetchAccountsAndSummariesWithContext:(id)a0;
- (id)_selectDataTypesWithContext:(id)a0;
- (void)_setProgressTo:(double)a0 context:(id)a1;
- (void)_updateSourceWithProgress:(double)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)_downloadDataWithContext:(id)a0 failureDetailsBlock:(id /* block */)a1;
- (void)_reportTimeEstimatesWithContext:(id)a0;
- (id)_importDataWithContext:(id)a0 failureDetailsBlock:(id /* block */)a1;
- (void)_logStatisticsAndSendStatisticsTelemetryWithContext:(id)a0;
- (BOOL)_shouldTerminateMigrationOnError;
- (void)_selectFromDataTypeToSizeMap:(id)a0 device:(id)a1 completion:(id /* block */)a2;
- (BOOL)_shouldForceDownloadError;
- (void)_didFinishDownloadingSegmentOfSize:(unsigned long long)a0 expectedSize:(unsigned long long)a1 migratorEstimatesItemSizes:(BOOL)a2 endDate:(id)a3 context:(id)a4;
- (double)_progressIncrementForImportedSummary:(id)a0 summaries:(id)a1 accounts:(id)a2 migrators:(id)a3;
- (void)_incrementProgressBy:(double)a0 context:(id)a1;
- (void)_cleanUpAfterFinalizeMigratableAppsWithSQLController:(id)a0 completion:(id /* block */)a1;
- (id)initWithConnectionKey:(id)a0;
- (void)connectionDidEnd;
- (void)startMigrationWithSourceDevice:(id)a0 usingRetryPolicies:(BOOL)a1 delegate:(id)a2 completion:(id /* block */)a3;
- (void)finalizeMigratableAppsWithCompletion:(id /* block */)a0;

@end
