@class NSMutableDictionary, HKHealthStore, NSString, NSNumber;

@interface HRElectrocardiogramEducationSection : HKDataMetadataSection <HKOnboardingPageViewControllerDelegate>

@property (retain, nonatomic) HKHealthStore *store;
@property (readonly, nonatomic) BOOL forSinglePlayer;
@property (retain, nonatomic) NSNumber *activeAlgorithmVersion;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (readonly, nonatomic) BOOL firstTimeOnboarding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)healthStore;
- (id)dateCache;
- (void).cxx_destruct;
- (id)sectionTitle;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;
- (void)stepForward;
- (void)willDisplayCell:(id)a0 forIndex:(unsigned long long)a1 tableView:(id)a2;
- (id)_viewControllerForEducationRow:(unsigned long long)a0;
- (id)_cellTitleForEducationRow:(unsigned long long)a0;
- (BOOL)_hasOnboardedBefore;
- (id)fetchActiveECGAlgorithmVersion;
- (id)initWithHealthStore:(id)a0 forSinglePlayer:(BOOL)a1 activeAlgorithmVersion:(id)a2;

@end
