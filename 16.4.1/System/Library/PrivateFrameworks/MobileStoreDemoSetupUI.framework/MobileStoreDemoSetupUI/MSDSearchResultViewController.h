@class NSArray, NSTimer, NSString, UISearchBar, UITableView;
@protocol MSDSearchResultViewControllerDelegate;

@interface MSDSearchResultViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MSDStoreInfoListViewControllerDelegate>

@property unsigned long long mode;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) NSTimer *debounceTimer;
@property (retain, nonatomic) NSArray *storeInfoList;
@property (retain, nonatomic) id<MSDSearchResultViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchBarTextDidEndEditing:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithDelegate:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)didConfirmStoreAssignment:(id)a0;
- (void)dismissAllTopViews;
- (BOOL)isShowingSearchResult;
- (void)listViewDidClose:(id)a0;
- (void)showInProgress;
- (void)showStoreInfo:(id)a0;
- (void)showStoreList:(id)a0 inDisplayMode:(unsigned long long)a1;
- (void)viewWillAppear:(id)a0 forStore:(id)a1;
- (void)viewWillClose:(id)a0 forStore:(id)a1;

@end
