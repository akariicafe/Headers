@class HRProfile, NSArray, HRContentStatusView;
@protocol HRRecordViewControllerFactory;

@interface HRAccountsTableViewController : UITableViewController

@property (readonly, nonatomic) HRProfile *profile;
@property (retain, nonatomic) id<HRRecordViewControllerFactory> factory;
@property (retain, nonatomic) NSArray *accounts;
@property (retain, nonatomic) HRContentStatusView *loadingView;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_hideLoadingIndicator;
- (void)_showLoadingIndicator;
- (void)_reloadAccounts;

@end
