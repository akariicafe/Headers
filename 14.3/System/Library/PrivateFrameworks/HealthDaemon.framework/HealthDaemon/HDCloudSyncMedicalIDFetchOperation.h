@class HDCloudSyncMedicalIDRecord, CKContainer, _HKMedicalIDData;

@interface HDCloudSyncMedicalIDFetchOperation : HDCloudSyncOperation {
    CKContainer *_container;
}

@property (readonly, nonatomic) _HKMedicalIDData *cloudMedicalIDData;
@property (readonly, nonatomic) HDCloudSyncMedicalIDRecord *medicalIDRecord;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)_startMedicalIDFetchForContainer:(id)a0 database:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 container:(id)a2;

@end
