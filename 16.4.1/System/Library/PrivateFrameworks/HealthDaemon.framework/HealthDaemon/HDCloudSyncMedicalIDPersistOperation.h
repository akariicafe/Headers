@class _HKMedicalIDData;

@interface HDCloudSyncMedicalIDPersistOperation : HDCloudSyncSynchronousOperation

@property (retain, nonatomic) _HKMedicalIDData *medicalIDDataToPersist;

- (void).cxx_destruct;
- (BOOL)performWithError:(id *)a0;

@end
