@class UITableView, HKClinicalAuthorizationHeaderView, NSString, UIBarButtonItem, HKClinicalAuthorizationSequenceContext, UIViewController;
@protocol HKHealthPrivacyServicePromptControllerDelegate;

@interface HKClinicalAuthorizationIntroViewController : HKViewController <UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePromptController>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) HKClinicalAuthorizationHeaderView *headerView;
@property (retain, nonatomic) UIViewController *nextViewController;
@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) UIBarButtonItem *navigationRightButton;
@property (weak, nonatomic) id<HKHealthPrivacyServicePromptControllerDelegate> delegate;
@property (readonly, nonatomic) HKClinicalAuthorizationSequenceContext *context;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) UIBarButtonItem *navigationButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)_finishWithError:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)_updateForCurrentContentSizeCategory;
- (void)_cancelButtonPressed:(id)a0;
- (void)_configureNavigationItem;
- (void)_nextButtonPressed:(id)a0;
- (void)_configureTableView;
- (void)_configureHeaderViewWithSource:(id)a0;
- (id)initWithContext:(id)a0 viewController:(id)a1;
- (id)_cellForDetailsAtIndexPath:(id)a0;
- (id)_cellForViewHealthRecordsAtIndexPath:(id)a0;
- (id)_createFooterView;
- (BOOL)_indexPathIsValidRow:(id)a0;
- (long long)_rowFromIndexPath:(id)a0;
- (void)_viewHealthRecordsCellTapped:(id)a0;

@end
