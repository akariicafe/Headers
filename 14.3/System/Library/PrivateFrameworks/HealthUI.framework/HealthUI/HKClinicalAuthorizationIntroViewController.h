@class HKClinicalAuthorizationHeaderView, NSString, HKClinicalAuthorizationSequenceContext, UITableView;
@protocol HKHealthPrivacyServicePromptControllerDelegate;

@interface HKClinicalAuthorizationIntroViewController : HKViewController <UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePromptController>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) HKClinicalAuthorizationHeaderView *headerView;
@property (weak, nonatomic) id<HKHealthPrivacyServicePromptControllerDelegate> delegate;
@property (readonly, nonatomic) HKClinicalAuthorizationSequenceContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)a0;
- (void)_finishWithError:(id)a0;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_configureNavigationItem;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)_nextButtonPressed:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateForCurrentContentSizeCategory;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)_createFooterView;
- (void)_configureTableView;
- (void)_configureHeaderViewWithSource:(id)a0;
- (BOOL)_indexPathIsValidRow:(id)a0;
- (long long)_rowFromIndexPath:(id)a0;
- (id)_cellForDetailsAtIndexPath:(id)a0;
- (id)_cellForViewHealthRecordsAtIndexPath:(id)a0;
- (void)_viewHealthRecordsCellTapped:(id)a0;

@end
