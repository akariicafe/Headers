@class HRProfile, NSArray, HRContentStatusView;
@protocol HRRecordViewControllerFactory;

@interface HRAccountsTableViewController : UITableViewController

@property (readonly, nonatomic) HRProfile *profile;
@property (retain, nonatomic) id<HRRecordViewControllerFactory> factory;
@property (retain, nonatomic) NSArray *accounts;
@property (retain, nonatomic) HRContentStatusView *loadingView;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_reloadAccounts;
- (void)_showLoadingIndicator;
- (void)_hideLoadingIndicator;

@end
