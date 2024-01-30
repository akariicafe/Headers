@class NSString, HKHealthStore, NSMutableDictionary;

@interface HRElectrocardiogramEducationSection : HKDataMetadataSection <HROnboardingPageViewControllerDelegate>

@property (retain, nonatomic) HKHealthStore *store;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (readonly, nonatomic) BOOL firstTimeOnboarding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)sectionTitle;
- (id)healthStore;
- (id)dateCache;
- (id)initWithHealthStore:(id)a0;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;
- (void)willDisplayCell:(id)a0 forIndex:(unsigned long long)a1 tableView:(id)a2;
- (void)stepForward;
- (id)_cellTitleForEducationRow:(unsigned long long)a0;
- (id)_viewControllerForEducationRow:(unsigned long long)a0;
- (BOOL)_hasOnboardedBefore;

@end
