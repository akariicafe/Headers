@class NSArray, UIActivityIndicatorView, NSString, NSMutableArray, UISearchController;
@protocol GKFriendListViewControllerDelegate;

@interface GKFriendListViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSMutableArray *friendPlayers;
@property (retain, nonatomic) NSMutableArray *recentPlayers;
@property (retain, nonatomic) NSMutableArray *allPlayers;
@property (retain, nonatomic) NSArray *friendsForDisplay;
@property (retain, nonatomic) NSArray *recentsForDisplay;
@property (retain, nonatomic) NSArray *allPlayersForDisplay;
@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) BOOL needsShowMoreFooter;
@property (weak, nonatomic) id<GKFriendListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)didDismissSearchController:(id)a0;
- (void)setupSearchController;
- (void)loadData;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)addFriends:(id)a0;
- (void)setupNavBar;
- (BOOL)tableViewHasFooter:(long long)a0;
- (void)loadMoreFriends;
- (id)getPlayerAtIndexPath:(id)a0;
- (void)reportPlayerAtIndexPath:(id)a0;
- (void)deletePlayerAtIndexPath:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)showLoadingIndicator;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)viewDidLoad;

@end
