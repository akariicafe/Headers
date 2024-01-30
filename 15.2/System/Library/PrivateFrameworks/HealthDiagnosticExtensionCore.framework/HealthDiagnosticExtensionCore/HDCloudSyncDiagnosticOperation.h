@interface HDCloudSyncDiagnosticOperation : HDDiagnosticOperation

- (void)run;
- (id)reportFilename;
- (BOOL)_reportCloudSyncStatusWithHealthStore:(id)a0;
- (void)_reportCloudSyncJournalStats;
- (void)_reportCloudSyncErrors;
- (void)_reportCloudSyncStoreDetailsWithDatabase:(id)a0;
- (void)_reportCloudSyncDescriptionWithHealthStore:(id)a0;
- (void)_reportCloudSyncStoreDetailsWithSyncProvenance:(long long)a0 storeUUID:(id)a1 database:(id)a2;
- (void)_reportCloudSyncKeyValuesWithDatabase:(id)a0;

@end
