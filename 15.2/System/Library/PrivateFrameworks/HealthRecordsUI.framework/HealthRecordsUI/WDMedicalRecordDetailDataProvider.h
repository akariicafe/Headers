@class HKHealthRecordsStore, HKMedicalRecord, NSMutableDictionary, HKConceptStore, HRMedicalRecordFormatter, NSObject, HKClinicalAccount, HRSignedClinicalDataGroupContext;
@protocol WDMedicalRecordDetailDataProviderDelegate, OS_dispatch_queue;

@interface WDMedicalRecordDetailDataProvider : NSObject

@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore;
@property (retain, nonatomic) HKConceptStore *conceptStore;
@property (retain, nonatomic) HKMedicalRecord *medicalRecord;
@property (retain, nonatomic) HKClinicalAccount *account;
@property (weak, nonatomic) id<WDMedicalRecordDetailDataProviderDelegate> delegate;
@property (retain, nonatomic) HRMedicalRecordFormatter *formatter;
@property (retain, nonatomic) NSMutableDictionary *displayItemsBySection;
@property (retain, nonatomic) NSMutableDictionary *sectionTitles;
@property (retain, nonatomic) NSMutableDictionary *sectionFooter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) long long sectionFHIRSourceData;
@property (readonly, nonatomic) long long rowSignedClinicalDataQRCode;
@property (readonly, nonatomic) long long rowSignedClinicalDataMultiRecord;
@property (readonly, nonatomic) long long rowSignedClinicalDataIssuer;
@property (readonly, nonatomic) long long sectionSignedClinicalDataStatus;
@property (readonly, nonatomic) long long sectionSignedClinicalDataWalletIntegration;
@property (readonly, nonatomic) long long sectionSignedClinicalDataDeletion;
@property (readonly, copy, nonatomic) HRSignedClinicalDataGroupContext *signedClinicalDataGroupContext;

- (long long)numberOfSections;
- (long long)numberOfRowsForSection:(long long)a0;
- (void).cxx_destruct;
- (id)titleForSection:(long long)a0;
- (id)initWithHealthRecordsStore:(id)a0 conceptStore:(id)a1 medicalRecord:(id)a2 account:(id)a3 delegate:(id)a4;
- (id)displayItemForSection:(long long)a0 row:(long long)a1;
- (id)footerForSection:(long long)a0;
- (void)addSignedClinicalDataPassToWalletWithCompletion:(id /* block */)a0;
- (id)deletionConfirmationMessage;
- (void)deleteSignedClinicalDataRecordWithCompletion:(id /* block */)a0;
- (void)recomputeDisplayItems;
- (void)_rqueue_fetchSignedRecordIfAvailableAndRecomputeDisplayItems;
- (void)_rqueue_recomputeDisplayItems;
- (id)_createSignedClinicalDataStoreUsingHealthRecordsStore:(id)a0;
- (void)_rqueue_didReceiveSignedClinicalDataGroup:(id)a0 store:(id)a1;
- (void)_rqueue_updateSignedClinicalDataQRCodeIfNecessary;
- (void)_rqueue_didReverifyRecordSignature:(long long)a0;
- (void)_updatePlacementForDisplayItems:(id)a0;
- (id)displayItemsForSection:(long long)a0;

@end
