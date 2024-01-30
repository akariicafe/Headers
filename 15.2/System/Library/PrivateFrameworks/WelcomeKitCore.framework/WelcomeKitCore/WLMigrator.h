@class WLSocketHandler, WLSafeHarborManager;
@protocol WLMigrationDataSource;

@interface WLMigrator : NSObject <WLDataMigratorProtocol>

@property (weak, nonatomic) WLSocketHandler *activeSocketHandler;
@property (retain, nonatomic) WLSafeHarborManager *safeHarborManager;
@property (retain, nonatomic) id<WLMigrationDataSource> dataSource;

+ (id)_systemVersion;
+ (void)setStashDataLocally:(BOOL)a0;
+ (BOOL)stashDataLocally;
+ (BOOL)_shouldContinueMigrationFromAnotherDevice;
+ (unsigned long long)_bytesFreeOnDevice;
+ (BOOL)_shouldTerminateMigrationBeforeImport;
+ (id)_dataTypesAndSizesXMLDataFromMap:(id)a0;
+ (void)_parseDataTypesXMLData:(id)a0 completion:(id /* block */)a1;
+ (void)_presentPromptForMigrableApps:(id /* block */)a0;

- (void)cleanup;
- (void)prepare;
- (void).cxx_destruct;
- (id)init;
- (void)close:(id /* block */)a0;
- (void)dealloc;
- (id)downloadData:(id)a0;
- (void)deleteMessages;
- (id)prepare:(id)a0 delegate:(id)a1 error:(id *)a2;
- (void)_finishMigrationWithError:(id)a0 context:(id)a1 disconnected:(BOOL)a2 completion:(id /* block */)a3;
- (void)startMigration:(id)a0 usingRetryPolicies:(BOOL)a1 completion:(id /* block */)a2;
- (id)migrators:(id)a0;
- (void)_prepareMetadata:(id)a0 usingRetryPolicies:(BOOL)a1 allowContinuationFromAnotherDevice:(BOOL)a2;
- (id)fetchSummary:(id)a0;
- (id)selectDataTypes:(id)a0;
- (id)importData:(id)a0;
- (id)runPostMigrationTasks:(id)a0;
- (id)finishMigration:(id)a0;
- (void)_deleteDownloadsPath:(id)a0;
- (id)_fetchAccountsAndSummariesWithContext:(id)a0;
- (id)_selectDataTypesWithContext:(id)a0;
- (void)_setProgressTo:(double)a0 context:(id)a1;
- (void)_updateSourceWithProgress:(double)a0 remainingTime:(double)a1 context:(id)a2 completion:(id /* block */)a3;
- (id)_downloadDataWithContext:(id)a0 failureDetailsBlock:(id /* block */)a1;
- (void)_reportTimeEstimatesWithContext:(id)a0;
- (id)_importDataWithContext:(id)a0 failureDetailsBlock:(id /* block */)a1;
- (void)_logStatisticsAndSendStatisticsTelemetryWithContext:(id)a0;
- (BOOL)_shouldTerminateMigrationOnError;
- (void)_selectFromDataTypeToSizeMap:(id)a0 device:(id)a1 completion:(id /* block */)a2;
- (BOOL)_shouldForceDownloadError;
- (double)_didFinishDownloadingSegmentOfSize:(unsigned long long)a0 expectedSize:(unsigned long long)a1 migratorEstimatesItemSizes:(BOOL)a2 endDate:(id)a3 context:(id)a4;
- (double)_progressIncrementForImportedSummary:(id)a0 summaries:(id)a1 accounts:(id)a2 migrators:(id)a3;
- (void)_incrementProgressBy:(double)a0 context:(id)a1;
- (void)finalizeMigratableAppsWithCompletion:(id /* block */)a0;
- (void)_cleanUpAfterFinalizeMigratableAppsWithSQLController:(id)a0 completion:(id /* block */)a1;
- (void)connectionDidEnd;
- (void)startMigrationWithSourceDevice:(id)a0 usingRetryPolicies:(BOOL)a1 delegate:(id)a2 completion:(id /* block */)a3;

@end
