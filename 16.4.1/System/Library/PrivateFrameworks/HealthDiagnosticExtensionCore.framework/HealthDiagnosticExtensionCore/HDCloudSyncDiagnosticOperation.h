@interface HDCloudSyncDiagnosticOperation : HDDiagnosticOperation

- (void)run;
- (void)_reportCloudSyncDescriptionWithHealthStore:(id)a0;
- (void)_reportCloudSyncErrors;
- (void)_reportCloudSyncJournalStats;
- (void)_reportCloudSyncKeyValuesWithDatabase:(id)a0;
- (BOOL)_reportCloudSyncStatusWithHealthStore:(id)a0;
- (void)_reportCloudSyncStoreDetailsWithDatabase:(id)a0;
- (void)_reportCloudSyncStoreDetailsWithSyncProvenance:(long long)a0 storeUUID:(id)a1 database:(id)a2;
- (id)reportFilename;

@end
