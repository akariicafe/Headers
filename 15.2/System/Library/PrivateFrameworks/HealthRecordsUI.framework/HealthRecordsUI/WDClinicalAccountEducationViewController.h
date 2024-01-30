@class WDClinicalAccountOnboardingSession, UIView, HRProfile, NSArray, NSString, UIButton, UITableView, HKClinicalAccount;

@interface WDClinicalAccountEducationViewController : HKViewController <UITableViewDataSource, UITableViewDelegate>

@property (readonly, nonatomic) WDClinicalAccountOnboardingSession *onboardingSession;
@property (readonly, nonatomic) HRProfile *profile;
@property (readonly, copy, nonatomic) HKClinicalAccount *account;
@property (nonatomic) BOOL promptForDataCollection;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *footerView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)updateNextButton;
- (void)loadView;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_setupConstraints;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)_setupSubviews;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)_shouldProceedToSharingToProviderOnboarding;
- (void)fetchShouldPromptForDataCollection;
- (void)_navigationAction:(id)a0;
- (void)_computeSections;
- (id)initWithOnboardingSession:(id)a0 account:(id)a1;

@end
