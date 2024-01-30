@class NSString, NSArray, PXSettingsIndexer, PXInfoUpdater, UISearchBar, NSProgress, PXSettingsIndex, PTUISettingsController;

@interface PXSettingsSearchViewController : UITableViewController <UISearchBarDelegate, PXInfoProvider, PXInfoUpdaterObserver>

@property (readonly, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) PXSettingsIndexer *indexer;
@property (retain, nonatomic) NSProgress *indexingProgress;
@property (retain, nonatomic) PXSettingsIndex *index;
@property (readonly, nonatomic) PXInfoUpdater *resultsInfoUpdater;
@property (copy, nonatomic) NSArray *searchResults;
@property (readonly, nonatomic) PTUISettingsController *settingsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)infoUpdaterDidUpdate:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (long long)priorityForInfoRequestOfKind:(id)a0;
- (id)requestInfoOfKind:(id)a0 withResultHandler:(id /* block */)a1;
- (void)viewDidLoad;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_handleCancelItem:(id)a0;
- (void)_indexerDidComplete;
- (id)initWithSettingsController:(id)a0;

@end
