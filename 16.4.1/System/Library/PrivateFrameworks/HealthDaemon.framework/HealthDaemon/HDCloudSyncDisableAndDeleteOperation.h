@interface HDCloudSyncDisableAndDeleteOperation : HDCloudSyncOperation

- (void)main;
- (id)_createZonesOperationForContainer:(id)a0;
- (id)_deleteUnifiedZoneRecordsOperationForContainer:(id)a0 zones:(id)a1;
- (id)_deleteZonesOperationForContainer:(id)a0 zones:(id)a1;
- (BOOL)_isSecureSecondaryContainer:(id)a0;
- (id)_leaveSharesOperationForContainer:(id)a0;

@end
