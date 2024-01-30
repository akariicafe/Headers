@class HRProfile, NSArray, HRContentStatusView;
@protocol HRRecordViewControllerFactory;

@interface HRAccountsTableViewController : UITableViewController

@property (readonly, nonatomic) HRProfile *profile;
@property (retain, nonatomic) id<HRRecordViewControllerFactory> factory;
@property (retain, nonatomic) NSArray *accounts;
@property (retain, nonatomic) HRContentStatusView *loadingView;

- (void)_hideLoadingIndicator;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_reloadAccounts;
- (void)_showLoadingIndicator;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;

@end
