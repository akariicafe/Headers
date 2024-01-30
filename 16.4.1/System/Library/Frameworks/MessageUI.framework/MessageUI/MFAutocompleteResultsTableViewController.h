@class UIColor, NSArray, NSMutableArray, _MFAutocompleteResultsTableViewModel;
@protocol MFAutocompleteResultsTableViewControllerDelegate;

@interface MFAutocompleteResultsTableViewController : UITableViewController {
    _MFAutocompleteResultsTableViewModel *_tableViewModel;
    BOOL _tableViewNeedsReload;
}

@property (weak, nonatomic) id<MFAutocompleteResultsTableViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSMutableArray *contactRecipients;
@property (readonly, nonatomic) NSMutableArray *suggestedRecipients;
@property (readonly, nonatomic) NSMutableArray *directoryServerRecipients;
@property (readonly, nonatomic) NSArray *allRecipients;
@property (retain, nonatomic) UIColor *cellBackgroundColor;
@property (nonatomic, getter=areCellAnimationsEnabled) BOOL cellAnimationsEnabled;
@property (nonatomic, getter=isDeferringTableViewUpdates) BOOL deferTableViewUpdates;
@property (nonatomic) BOOL shouldHighlightCompleteMatches;
@property (nonatomic) BOOL shouldDimIrrelevantInformation;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)selectPreviousSearchResult;
- (void)invalidateSearchResultRecipient:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)selectNextSearchResult;
- (void)dealloc;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)clear;
- (void)presentSearchResults:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (unsigned long long)numberOfResults;
- (BOOL)confirmSelectedRecipient;
- (void)resetScrollPosition;
- (id)_combinedResults;
- (id)_flattenedIndexPaths;
- (id)_indexPathForRecipient:(id)a0;
- (id)_recipientAtIndexPath:(id)a0;
- (void)_selectSearchResultsRecipientAtIndexPath:(id)a0;
- (double)_tableViewHeaderHeight;
- (void)_updateTableViewModelAnimated:(BOOL)a0;
- (BOOL)containsRecipient:(id)a0;
- (Class)recipientTableViewCellClass;

@end
