@class PSRegion, NSArray, PSLocaleSelector, NSString, UIView, UISearchBar, UITableView;

@interface PSLocaleController : PSViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate> {
    UITableView *_tableView;
    UIView *_contentView;
    UISearchBar *_searchBar;
    BOOL _searchMode;
    BOOL _hideKeyboardInSearchMode;
}

@property (retain, nonatomic) NSArray *filteredListContent;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *regionsList;
@property (retain, nonatomic) PSRegion *currentRegion;
@property (retain, nonatomic) PSLocaleSelector *localeSelector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)loadView;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (void).cxx_destruct;
- (void)loadRegions;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)_mainContentView;
- (void)reloadSections;
- (void)reloadDataAndScrollToCheckedRegionAnimated:(BOOL)a0;
- (void)updateChecked:(id)a0;
- (id)filteredRegionsForRegionList:(id)a0 searchString:(id)a1;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
