@class WDClinicalAccountOnboardingSession, UIView, HRProfile, NSArray, NSString, UIButton, UITableView, HKClinicalAccount, _TtC15HealthRecordsUI26HealthRecordsNotifications;

@interface WDClinicalAccountEducationViewController : HKViewController <UITableViewDataSource, UITableViewDelegate>

@property (readonly, nonatomic) WDClinicalAccountOnboardingSession *onboardingSession;
@property (readonly, nonatomic) HRProfile *profile;
@property (readonly, copy, nonatomic) HKClinicalAccount *account;
@property (nonatomic) BOOL promptForDataCollection;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) _TtC15HealthRecordsUI26HealthRecordsNotifications *notificationsManager;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_setupConstraints;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
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
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)updateNextButton;
- (void)_computeSections;
- (void)_navigationAction:(id)a0;
- (BOOL)_shouldProceedToSharingToProviderOnboarding;
- (void)fetchShouldPromptForDataCollection;
- (id)initWithOnboardingSession:(id)a0 account:(id)a1;

@end
