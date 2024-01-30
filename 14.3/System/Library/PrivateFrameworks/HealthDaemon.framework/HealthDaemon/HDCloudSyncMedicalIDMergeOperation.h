@class _HKMedicalIDData;

@interface HDCloudSyncMedicalIDMergeOperation : HDCloudSyncOperation

@property (retain, nonatomic) _HKMedicalIDData *localMedicalIDData;
@property (retain, nonatomic) _HKMedicalIDData *cloudMedicalIDData;
@property (readonly, nonatomic) _HKMedicalIDData *mergedMedicalIDData;

- (void).cxx_destruct;
- (void)main;
- (id)_legacyDateSavedBasedMergeForCloudMedicalID:(id)a0 localMedicalIDData:(id)a1;

@end
