@class HRProfile, NSMutableDictionary, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, WDMedicalRecordDaySummaryDelegate;

@interface WDMedicalRecordDaySummary : NSObject <WDMedicalRecordSummaryDelegate>

@property (retain, nonatomic) NSMutableDictionary *categoriesBySourceAlphaOrdered;
@property (retain, nonatomic) NSMutableDictionary *categoriesBySourceByType;
@property (retain, nonatomic) NSMutableSet *inProgressCatogorySummaries;
@property (weak, nonatomic) id<WDMedicalRecordDaySummaryDelegate> delegate;
@property (retain, nonatomic) HRProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic) long long style;
@property (readonly, nonatomic) long long numberOfDisplayItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 style:(long long)a1 delegate:(id)a2;
- (id)_alphaSortedCategories:(id)a0;
- (id)_alphaSortedKeysForCategories:(id)a0;
- (void)addMedicalRecord:(id)a0;
- (id)displayItemAtIndex:(long long)a0;
- (void)recomputeIfNeeded;
- (void)summaryDidFinishRecompute:(id)a0;

@end
