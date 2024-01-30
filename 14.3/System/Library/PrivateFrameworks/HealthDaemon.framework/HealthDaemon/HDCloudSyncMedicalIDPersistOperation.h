@class _HKMedicalIDData;

@interface HDCloudSyncMedicalIDPersistOperation : HDCloudSyncOperation

@property (retain, nonatomic) _HKMedicalIDData *medicalIDDataToPersist;

- (void).cxx_destruct;
- (void)main;
- (BOOL)_persistMedicalIDToDisk:(id)a0 errorOut:(id *)a1;

@end
