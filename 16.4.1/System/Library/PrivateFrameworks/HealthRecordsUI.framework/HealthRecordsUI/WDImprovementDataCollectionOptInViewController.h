@class UITableView, NSArray, NSString, WDClinicalAccountOnboardingSession, UIView, HKClinicalAccount, UIButton;

@interface WDImprovementDataCollectionOptInViewController : HKViewController <UITableViewDataSource, UITableViewDelegate>

@property (readonly, nonatomic) WDClinicalAccountOnboardingSession *onboardingSession;
@property (readonly, nonatomic) HKClinicalAccount *account;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) UIButton *allowButton;
@property (retain, nonatomic) UIButton *doNotAllowButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_setupConstraints;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setupSubviews;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)cancelButtonTapped:(id)a0;
- (void)_pushToNextView;
- (void)_computeSections;
- (void)_setOptInStatus:(long long)a0;
- (void)aboutPrivacyButtonTapped:(id)a0;
- (void)allowButtonTapped:(id)a0;
- (void)doNotAllowButtonTapped:(id)a0;
- (id)initWithOnboardingSession:(id)a0 account:(id)a1;

@end
