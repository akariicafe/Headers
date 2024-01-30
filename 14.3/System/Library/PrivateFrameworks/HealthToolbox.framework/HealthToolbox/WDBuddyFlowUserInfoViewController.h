@class _HKMedicalIDData, NSString, NSArray, WDBuddyFlowUserInfo, HKHealthStore, HKTitledContactBuddyHeaderView, WDProfile, WDBuddyFlowContinueFooterView, WDUserDefaults;
@protocol WDBuddyControllerUserInfoDelegate;

@interface WDBuddyFlowUserInfoViewController : HKTableViewController <UITableViewDataSource, UITableViewDelegate, WDUserActivityResponder, HKSimpleDataEntryItemToolbarDelegate> {
    WDProfile *_profile;
    HKHealthStore *_healthStore;
    WDUserDefaults *_userDefaults;
    _HKMedicalIDData *_medicalIDData;
    HKTitledContactBuddyHeaderView *_headerView;
    WDBuddyFlowContinueFooterView *_footerView;
    BOOL _hasSetUpHeaderAndFooterViews;
}

@property (retain, nonatomic) NSArray *dataEntryItems;
@property (retain, nonatomic) WDBuddyFlowUserInfo *userInfo;
@property (weak, nonatomic) id<WDBuddyControllerUserInfoDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)_updateForCurrentSizeCategory;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)applyChangeActivity:(id)a0;
- (id)applyTransitionActivity:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)setUpHeaderAndFooterViewsIfNeeded;
- (id)_createTableHeaderView;
- (id)_createTableFooterView;
- (void)_configureHeaderView:(id)a0;
- (void)continueButtonTapped:(id)a0;
- (void)focusItemAtIndex:(long long)a0;
- (void)dataEntryItemDonePressed:(id)a0;
- (void)dataEntryItemPrevPressed:(id)a0;
- (void)dataEntryItemNextPressed:(id)a0;
- (void)_localeDidChange:(id)a0;
- (void)_setupObservers;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_loadData;
- (void)viewDidLoad;
- (void)_saveData;

@end
