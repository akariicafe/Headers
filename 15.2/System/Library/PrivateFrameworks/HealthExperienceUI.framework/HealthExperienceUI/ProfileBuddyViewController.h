@class NSArray, NSString, WDBuddyFlowUserInfo, HKTitledContactBuddyHeaderView, WDBuddyFlowContinueFooterView;
@protocol ProfileBuddyViewControllerDelegate;

@interface ProfileBuddyViewController : HKTableViewController <UITableViewDataSource, UITableViewDelegate, HKSimpleDataEntryItemToolbarDelegate> {
    HKTitledContactBuddyHeaderView *_headerView;
    WDBuddyFlowContinueFooterView *_footerView;
    WDBuddyFlowUserInfo *_userInfo;
    BOOL _hasSetUpHeaderAndFooterViews;
}

@property (retain, nonatomic) NSArray *dataEntryItems;
@property (weak, nonatomic) id<ProfileBuddyViewControllerDelegate> delegate;
@property (readonly, nonatomic) WDBuddyFlowUserInfo *buddyFlowUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateForCurrentSizeCategory;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_localeDidChange:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)continueButtonTapped:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithBuddyFlowUserInfo:(id)a0;
- (void)setUpHeaderAndFooterViewsIfNeeded;
- (id)_createTableHeaderView;
- (id)_createTableFooterView;
- (void)_configureHeaderView:(id)a0;
- (void)focusItemAtIndex:(long long)a0;
- (void)dataEntryItemDonePressed:(id)a0;
- (void)dataEntryItemPrevPressed:(id)a0;
- (void)dataEntryItemNextPressed:(id)a0;
- (void)_setupObservers;

@end
