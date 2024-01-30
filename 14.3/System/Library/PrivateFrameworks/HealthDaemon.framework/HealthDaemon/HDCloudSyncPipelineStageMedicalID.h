@class HDCloudSyncMedicalIDRecord, _HKMedicalIDData;

@interface HDCloudSyncPipelineStageMedicalID : HDCloudSyncPipelineStage {
    _HKMedicalIDData *_localMedicalIDData;
    _HKMedicalIDData *_cloudMedicalIDData;
    HDCloudSyncMedicalIDRecord *_medicalIDRecord;
}

- (void).cxx_destruct;
- (void)main;
- (id)_compoundSyncOperationWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)_operationWithMostRecentCloudMedicalIDFromPrimaryFetchOperation:(id)a0 secondaryFetchOperations:(id)a1;

@end
