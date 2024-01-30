@class NSArray, NSString, NSTimer, HistoryTableViewDataSource, UISearchBar, UIBarButtonItem;
@protocol _SFNavigationIntentHandling, HistoryTableViewControllerDelegate, TabGroupProvider;

@interface HistoryTableViewController : PreviewTableViewController <BookmarksToolbarItemProvider, HistoryTableViewDataSourceDelegate, UIPopoverPresentationControllerDelegate, UISearchBarDelegate, UITableViewDragDelegate, BookmarksPanelStateRestoring, PreviewTableViewControllerDelegate> {
    UIBarButtonItem *_clearHistoryButton;
    UIBarButtonItem *_doneBarButtonItem;
    NSTimer *_saveChangesToCloudHistoryTimer;
    HistoryTableViewDataSource *_historyDataSource;
    BOOL _needsInitialContentOffsetUpdateForTableHeaderView;
    BOOL _needsContentOffsetUpdate;
    UISearchBar *_searchBar;
    BOOL _historyWasLoaded;
    BOOL _allowClearingHistory;
}

@property (weak, nonatomic) id<HistoryTableViewControllerDelegate> delegate;
@property (weak, nonatomic) id<_SFNavigationIntentHandling> navigationIntentHandler;
@property (weak, nonatomic) id<TabGroupProvider> tabGroupProvider;
@property (readonly, nonatomic) NSArray *bookmarksPanelToolbarItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_endEditing;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)willMoveToParentViewController:(id)a0;
- (id)_doneBarButtonItem;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)currentStateDictionary;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)_updateContentOffsetIfNeeded;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 trailingSwipeActionsForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canFocusRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)_tableView:(id)a0 dataOwnerForDragSession:(id)a1 atIndexPath:(id)a2;
- (id)tableView:(id)a0 itemsForAddingToDragSession:(id)a1 atIndexPath:(id)a2 point:(struct CGPoint { double x0; double x1; })a3;
- (id)_separatorEffect;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)safari_wantsDoneButtonInModalBookmarksPanel;
- (void)updateClearHistoryButtonEnable;
- (BOOL)restoreStateWithDictionary:(id)a0;
- (id)safari_tableViewScrollPositionSaveIdentifier;
- (id)_clearHistoryBarButtonItem;
- (void)_setUpClearHistoryMenu;
- (id)_clearHistoryText;
- (void)_saveChangesToCloudHistorySoon;
- (BOOL)_shouldUseTranslucentAppearance;
- (void)_saveChangesToCloudHistory;
- (id)_vibrantHeaderBackgroundView;
- (id)_urlForRowAtIndexPath:(id)a0;
- (void)_deleteRowAtIndexPath:(id)a0;
- (void)_updateClearHistoryMenuTitle;
- (void)historyTableViewDataSourceDidLoadContent:(id)a0;
- (void)historyTableViewDataSourceWillChangeContent:(id)a0;
- (void)historyTableViewDataSourceDidChangeContent:(id)a0;
- (void)historyTableViewDataSource:(id)a0 didChangeSectionAtIndex:(long long)a1 forChangeType:(long long)a2;
- (void)historyTableViewDataSource:(id)a0 didChangeRowAtIndexPath:(id)a1 forChangeType:(long long)a2;
- (id)previewTableViewController:(id)a0 URLForRowAtIndexPath:(id)a1;
- (id)previewTableViewController:(id)a0 menuForRowAtIndexPath:(id)a1;

@end
