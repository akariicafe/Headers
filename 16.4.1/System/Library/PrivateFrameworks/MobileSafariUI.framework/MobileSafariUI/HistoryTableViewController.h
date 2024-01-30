@class NSArray, NSString, NSTimer, HistoryTableViewDataSource, UISearchBar, UIBarButtonItem;
@protocol _SFNavigationIntentHandling, HistoryTableViewControllerDelegate, TabGroupProvider;

@interface HistoryTableViewController : PreviewTableViewController <BookmarksToolbarItemProvider, HistoryTableViewDataSourceDelegate, UISearchBarDelegate, UITableViewDragDelegate, BookmarksPanelStateRestoring, PreviewTableViewControllerDelegate> {
    UIBarButtonItem *_clearHistoryButton;
    UIBarButtonItem *_doneBarButtonItem;
    NSTimer *_saveChangesToCloudHistoryTimer;
    HistoryTableViewDataSource *_historyDataSource;
    BOOL _needsInitialContentOffsetUpdateForTableHeaderView;
    BOOL _needsContentOffsetUpdate;
    UISearchBar *_searchBar;
    BOOL _historyWasLoaded;
    BOOL _allowClearingHistory;
    BOOL _willReloadOnNextAppearance;
}

@property (weak, nonatomic) id<HistoryTableViewControllerDelegate> delegate;
@property (weak, nonatomic) id<_SFNavigationIntentHandling> navigationIntentHandler;
@property (weak, nonatomic) id<TabGroupProvider> tabGroupProvider;
@property (readonly, nonatomic) NSArray *bookmarksPanelToolbarItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToParentViewController:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)_endEditing;
- (void)_updateContentOffsetIfNeeded;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (id)_doneBarButtonItem;
- (id)_separatorEffect;
- (long long)_tableView:(id)a0 dataOwnerForDragSession:(id)a1 atIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canFocusRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 itemsForAddingToDragSession:(id)a1 atIndexPath:(id)a2 point:(struct CGPoint { double x0; double x1; })a3;
- (id)tableView:(id)a0 trailingSwipeActionsForRowAtIndexPath:(id)a1;
- (BOOL)safari_wantsDoneButtonInModalBookmarksPanel;
- (id)currentStateDictionary;
- (BOOL)_shouldUseTranslucentAppearance;
- (id)_clearHistoryBarButtonItem;
- (id)_clearHistoryText;
- (void)_deleteRowAtIndexPath:(id)a0;
- (void)_saveChangesToCloudHistory;
- (void)_saveChangesToCloudHistorySoon;
- (void)_setUpClearHistoryMenu;
- (void)_updateClearHistoryMenuTitle;
- (id)_urlForRowAtIndexPath:(id)a0;
- (void)historyTableViewDataSource:(id)a0 didChangeRowAtIndexPath:(id)a1 forChangeType:(long long)a2;
- (void)historyTableViewDataSource:(id)a0 didChangeSectionAtIndex:(long long)a1 forChangeType:(long long)a2;
- (void)historyTableViewDataSourceDidChangeContent:(id)a0;
- (void)historyTableViewDataSourceDidLoadContent:(id)a0;
- (void)historyTableViewDataSourceWillChangeContent:(id)a0;
- (id)previewTableViewController:(id)a0 URLForRowAtIndexPath:(id)a1;
- (id)previewTableViewController:(id)a0 menuForRowAtIndexPath:(id)a1;
- (BOOL)restoreStateWithDictionary:(id)a0;
- (id)safari_tableViewScrollPositionSaveIdentifier;
- (void)updateClearHistoryButtonEnable;

@end
