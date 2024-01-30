@class HDCloudSyncMedicalIDRecord, _HKMedicalIDData;

@interface HDCloudSyncMedicalIDPushOperation : HDCloudSyncOperation

@property (retain, nonatomic) _HKMedicalIDData *cloudMedicalIDData;
@property (retain, nonatomic) _HKMedicalIDData *medicalIDDataToPush;
@property (retain, nonatomic) HDCloudSyncMedicalIDRecord *medicalIDRecord;

- (void).cxx_destruct;
- (void)main;
- (id)_eventWithDeviceProperties;
- (void)_pushMedicalIDRecordToCloudForContainer:(id)a0 database:(id)a1;

@end
