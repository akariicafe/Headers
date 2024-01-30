@interface HDCloudSyncDisableAndDeleteOperation : HDCloudSyncOperation

- (void)main;
- (id)_createZonesOperationForContainer:(id)a0;
- (id)_deleteIndividualZonesOperationForContainer:(id)a0;
- (id)_deleteUnifiedZoneStoresAndMedicalIDOperationForContainer:(id)a0;
- (id)_leaveSharesOperationForContainer:(id)a0;
- (BOOL)_isSecureSecondaryContainer:(id)a0;

@end
