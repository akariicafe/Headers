@class NSArray, NSString, NMCUICloudNotificationAccountDataSource, NSLayoutConstraint;

@interface NMCUICloudNotificationOnboardingViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, NMCUIAccountDataSourceObserver>

@property (retain, nonatomic) NMCUICloudNotificationAccountDataSource *dataSource;
@property (retain, nonatomic) NSArray *accounts;
@property (retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detailTextForAccounts:(id)a0;
+ (BOOL)missingCredentialsForAccounts:(id)a0;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)setupView;
- (void)notNowButtonTapped:(id)a0;
- (void)accountDataSourceAccountsChanged:(id)a0;
- (void)enableButtonTapped:(id)a0;
- (id)initWithAccount:(id)a0 dataSource:(id)a1 completion:(id /* block */)a2;
- (id)initWithAccounts:(id)a0 dataSource:(id)a1 completion:(id /* block */)a2;

@end
