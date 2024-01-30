@class NSDate, NSString, NSArray, UIBarButtonItem, NSDictionary, PHSuggestion, UILabel, UIActivityIndicatorView;

@interface PXSuggesterDebugViewController : UITableViewController <PXOneUpPresentationDelegate> {
    NSArray *_heuristicallySortedItems;
    NSArray *_sortedItems;
    NSString *_name;
    NSDictionary *_options;
    PHSuggestion *_currentSuggestion;
    BOOL _fullLibraryIsEnabled;
    NSDate *_date;
    unsigned long long _currentSortCriteria;
    BOOL _showsInvalidItems;
    UIActivityIndicatorView *_spinnerView;
    UILabel *_noResultLabel;
    UIBarButtonItem *_fullLibraryButton;
    UIBarButtonItem *_dateButton;
    UIBarButtonItem *_showInvalidItemsButton;
    UIBarButtonItem *_sortButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)oneUpPresentationOrigin:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithName:(id)a0 options:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)viewWillDisappear:(BOOL)a0;
- (void)tableView:(id)a0 performAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (void)refresh;
- (void)_updateToolbarItems;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)sortButton;
- (void)didSelectSortButton:(id)a0;
- (id)assetsDataSourceManagerForSuggestion:(id)a0;
- (void)configureCell:(id)a0 withItem:(id)a1;
- (void)willStartProcessing;
- (void)didStopProcessing;
- (void)_fetchSuggestions;
- (id)fullLibraryButton;
- (id)dateButton;
- (id)showInvalidItemsButton;
- (void)didSelectFullLibraryButton:(id)a0;
- (void)didSelectDateButton:(id)a0;
- (void)didSelectShowInvalidItemsButton:(id)a0;
- (void)updateShowInvalidItemsButton;
- (void)_sortItems;
- (id)_stringWithSortCriteria:(unsigned long long)a0;

@end
