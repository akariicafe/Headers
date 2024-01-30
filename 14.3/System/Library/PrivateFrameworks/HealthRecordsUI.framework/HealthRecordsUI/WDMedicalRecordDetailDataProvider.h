@class NSMutableDictionary, HKMedicalRecord, HKConceptStore, NSObject, HKHealthRecordsStore;
@protocol WDMedicalRecordDetailDataProviderDelegate, OS_dispatch_queue;

@interface WDMedicalRecordDetailDataProvider : NSObject

@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore;
@property (retain, nonatomic) HKConceptStore *conceptStore;
@property (retain, nonatomic) HKMedicalRecord *medicalRecord;
@property (weak, nonatomic) id<WDMedicalRecordDetailDataProviderDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *displayItemsBySection;
@property (retain, nonatomic) NSMutableDictionary *sectionTitles;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (long long)numberOfSections;
- (id)initWithHealthRecordsStore:(id)a0 conceptStore:(id)a1 medicalRecord:(id)a2 delegate:(id)a3;
- (id)displayItemForSection:(long long)a0 row:(long long)a1;
- (long long)sectionFHIRSourceData;
- (void).cxx_destruct;
- (id)titleForSection:(long long)a0;
- (void)_rqueue_recomputeDisplayItems;
- (void)_updatePlacementForDisplayItems:(id)a0;
- (id)displayItemsForSection:(long long)a0;
- (long long)numberOfRowsForSection:(long long)a0;

@end
