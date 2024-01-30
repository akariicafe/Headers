@class NSArray, HKConceptStore, NSMutableOrderedSet, NSString, NSObject, HKHealthRecordsStore;
@protocol WDMedicalRecordSummaryDelegate, OS_dispatch_queue;

@interface WDMedicalRecordConceptSummary : NSObject <WDMedicalRecordSummarizable>

@property (weak, nonatomic) id<WDMedicalRecordSummaryDelegate> delegate;
@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore;
@property (retain, nonatomic) HKConceptStore *conceptStore;
@property (retain, nonatomic) NSMutableOrderedSet *allRecords;
@property (retain, nonatomic) NSArray *allDisplayItems;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *summaryQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic) BOOL dirty;
@property (readonly, copy, nonatomic) NSArray *displayItems;
@property (readonly, copy, nonatomic) NSString *summarySortString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 delegate:(id)a1;
- (void)_displayItemsForGenericMedicalRecord:(id)a0 completion:(id /* block */)a1;
- (void)_displayItemsForObservation:(id)a0 completion:(id /* block */)a1;
- (void)_displayItemsForRecord:(id)a0 completion:(id /* block */)a1;
- (void)_rqueue_recomputeIfNeeded;
- (void)_rqueue_setNeedsCompute;
- (void)_updatePlacementForDisplayItems:(id)a0 ofRecord:(id)a1;
- (void)addMedicalRecord:(id)a0;
- (void)recomputeIfNeeded;
- (void)setNeedsRecompute;
- (void)showTruncatedRecords;

@end
