@class PSLanguage, NSString, NSArray, PSLocaleSelector, UIView, UISearchBar, UITableView, PSLanguageSelector;

@interface PSInternationalLanguageController : PSViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate> {
    UISearchBar *_searchBar;
    UITableView *_tableView;
    UIView *_contentView;
}

@property (retain, nonatomic) PSLanguage *checkedLanguage;
@property (retain, nonatomic) NSArray *deviceLanguages;
@property (retain, nonatomic) NSArray *filteredDeviceLanguages;
@property (retain, nonatomic) NSString *savedSearchTerm;
@property (nonatomic) BOOL searchIsActive;
@property (retain, nonatomic) PSLanguageSelector *languageSelector;
@property (retain, nonatomic) PSLocaleSelector *localeSelector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)capitalizeLanguageNames;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)loadData;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)loadView;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (void)cancelButtonTapped;
- (id)_mainContentView;
- (void)updateNavigationItem;
- (void)generateLanguageCells;
- (void)doneButtonTapped;
- (id)filteredLanguagesForLanguageList:(id)a0 searchString:(id)a1;
- (void)reloadDataAndScrollToCheckedLanguageWithAnimation:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
