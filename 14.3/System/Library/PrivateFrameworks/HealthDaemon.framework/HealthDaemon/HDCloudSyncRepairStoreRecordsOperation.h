@interface HDCloudSyncRepairStoreRecordsOperation : HDCloudSyncOperation

- (void)main;
- (void)_repairRecordsForContainer:(id)a0 database:(id)a1;
- (void)_repairStoreRecordsForZone:(id)a0;
- (void)_repairStoreRecord:(id)a0 unifiedSyncZone:(id)a1;
- (void)_repairStoreRecordWithRandomOwnerIdentifier:(id)a0;

@end
