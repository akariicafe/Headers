@class NSUndoManager, CloudTabStore, PinnedTabsManager, _SFBrowserSavedState, NSHashTable, CKContextCompleter, NSMutableArray, NSString, TabSnapshotCache, UIImage, TabOverview, NSTimer, NSArray, NSMutableDictionary, TabBarManager, WBWindowState, TabBar, NSSet, TabCloseUndoGroup, TabDocument, BrowserController, _SWCollaborationButtonView, WBTabGroupManager, CKShare, WBTabGroup, WBSTabOrderManager, UIMenu, NSUUID, NSMapTable;
@protocol WBSOrderedTab, TabCollectionView, TabThumbnailCollectionView;

@interface TabController : NSObject <TabBarDelegate, TabBarManagerObserving, TabOverviewDelegate, TabSnapshotCacheDelegate, UITextFieldDelegate, WBSTabGroupConfirmationAlertDelegate, WBTabGroupSyncAgentSyncObserver, SFTabHoverPreviewControllerDelegate, PinnedTabsObserving, TabDocumentDragDropDataSource, TabGroupProvider, WBTabGroupManagerObserver, WBSTabOrderProvider> {
    BrowserController *_browserController;
    NSTimer *_saveStateTimer;
    NSTimer *_stateValidateTimer;
    TabDocument *_tabDocumentBeingHiddenFromTabView;
    BOOL _didReadWindowState;
    BOOL _didFinishTabGroupSetup;
    NSUUID *_browserWindowUUID;
    NSTimer *_updateContinuityTimer;
    unsigned long long _tabBarItemsFixed;
    unsigned long long _tabViewItemsFixed;
    TabSnapshotCache *_snapshotCache;
    BOOL _flushPendingSnapshots;
    id /* block */ _flushPendingSnapshotsCompletion;
    BOOL _didRestoreCloudTabsForEducationDevice;
    BOOL _didReceiveFirstCloudTabDeviceUpdateNotification;
    TabDocument *_tabDocumentBeingDragged;
    NSArray *_tabDocumentsToKeepVisible;
    NSMapTable *_uuidToTabDocumentMap;
    NSHashTable *_documentObservers;
    NSHashTable *_documentObserversToReceiveUpdatesDidEnd;
    NSMutableDictionary *_originalToReplacementUUIDMap;
    long long _documentUpdateCount;
    BOOL _switchingActiveDocument;
    BOOL _isClosingDocuments;
    TabCloseUndoGroup *_undoGroup;
    NSString *_lastSearchTerm;
    NSArray *_searchTermWords;
    unsigned long long _veryRecentlyClosedTabCount;
    unsigned long long _tabsClosedWhileTabViewPresentedCount;
    NSTimer *_veryRecentlyClosedTabCountInvalidationTimer;
    TabDocument *_tabShowingPreview;
    long long _updateTabsSuppressionCount;
    BOOL _suppressTabBarAnimation;
    BOOL _suppressSidebarReloadAnimation;
    NSArray *_tabDocumentsThatShouldSuppressOnCreatedEvents;
    NSArray *_tabGroupSuggestions;
    CKContextCompleter *_contextCompleter;
    BOOL _showsTabGroupNameSuggestions;
    NSMutableArray *_expandedTabGroupUUIDs;
    id /* block */ _postponedSnapshotInvalidationBlock;
    BOOL _didSelectAcceptedSharedTabGroup;
    BOOL _shouldDeferSnapshotRequest;
}

@property (nonatomic, getter=isPrivateBrowsingEnabled) BOOL privateBrowsingEnabled;
@property (retain, nonatomic) TabDocument *activeTabDocument;
@property (readonly, retain, nonatomic) TabOverview *tabOverview;
@property (readonly, copy, nonatomic) NSMutableArray *tabDocuments;
@property (readonly, copy, nonatomic) NSMutableArray *privateTabDocuments;
@property (readonly, copy, nonatomic) NSArray *allTabDocuments;
@property (readonly, copy, nonatomic) NSArray *pinnedTabDocuments;
@property (readonly, copy, nonatomic) NSArray *unpinnedTabDocuments;
@property (readonly, copy, nonatomic) NSArray *normalUnpinnedTabDocuments;
@property (readonly, copy, nonatomic) NSArray *privateUnpinnedTabDocuments;
@property (readonly, copy, nonatomic) NSSet *allSnapshotIdentifiers;
@property (readonly, nonatomic) unsigned long long numberOfCurrentNonHiddenTabs;
@property (readonly, nonatomic) unsigned long long numberOfTabsForCloseAllAction;
@property (readonly, nonatomic, getter=isShowingLibraryDocument) BOOL showingLibraryDocument;
@property (retain, nonatomic) PinnedTabsManager *pinnedTabsManager;
@property (retain, nonatomic) TabDocument *privateActiveTabDocument;
@property (retain, nonatomic) TabDocument *normalActiveTabDocument;
@property (readonly, nonatomic) TabDocument *tabDocumentBeingActivated;
@property (nonatomic) BOOL tabViewDefersActivation;
@property (readonly, nonatomic) BOOL canCloseTab;
@property (readonly, nonatomic) BOOL canCloseOtherTabs;
@property (retain, nonatomic) _SFBrowserSavedState *savedState;
@property (retain, nonatomic) WBWindowState *windowState;
@property (readonly, nonatomic) BOOL updatingTabGroupTabs;
@property (readonly, nonatomic) WBTabGroupManager *tabGroupManager;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) long long privateBrowsingMode;
@property (readonly, nonatomic, getter=isControlledByAutomation) BOOL controlledByAutomation;
@property (readonly, nonatomic) WBSTabOrderManager *tabOrderManager;
@property (readonly, nonatomic) BOOL canAddNewTabForCurrentBrowsingMode;
@property (readonly, nonatomic) WBTabGroup *focusedTabGroup;
@property (readonly, nonatomic) TabDocument *tabDocumentForSpotlightSearch;
@property (readonly, nonatomic) CloudTabStore *cloudTabStore;
@property (weak, nonatomic) TabBar *tabBar;
@property (weak, nonatomic) TabBarManager *tabBarManager;
@property (readonly, nonatomic) BOOL hasTabBar;
@property (readonly, nonatomic, getter=isShowingTabView) BOOL showingTabView;
@property (readonly, nonatomic) id<TabThumbnailCollectionView> tabThumbnailCollectionView;
@property (nonatomic) long long tabThumbnailCollectionViewStyle;
@property (nonatomic) BOOL snapshotInvalidationIsPostponed;
@property (copy, nonatomic) id /* block */ postponedSnapshotInvalidationCondition;
@property (nonatomic) BOOL snapshotsAreEnabled;
@property (nonatomic) long long tabDisplayMode;
@property (nonatomic) BOOL shouldTogglePrivateBrowsingOnSplit;
@property (readonly, nonatomic) BOOL hasTabsThatShouldBeObscuredForDigitalHealth;
@property (readonly, nonatomic) NSArray *tabDocumentsMatchingSearchTerm;
@property (readonly, nonatomic) TabDocument *hiddenPrivateTabDocumentWhenShowingPrivateBrowsingExplanationText;
@property (readonly, nonatomic) long long visibleTabCollectionViewType;
@property (readonly, nonatomic) BOOL canCreateTabGroupFromCurrentTabs;
@property (readonly, nonatomic) BOOL canRenameActiveTabGroup;
@property (readonly, nonatomic) UIMenu *tabExposeMenu;
@property (readonly, nonatomic) UIMenu *newTabGroupMenu;
@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (readonly, nonatomic) TabDocument *singleUnpinnedBlankTab;
@property (readonly, nonatomic) BOOL hasUnreadTab;
@property (readonly, nonatomic) _SWCollaborationButtonView *tabOverviewCollaborationButton;
@property (readonly, nonatomic) UIImage *iconForSharingActiveTabGroup;
@property (readonly, nonatomic) CKShare *shareRecordForActiveTabGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<TabCollectionView> tabCollectionView;
@property (readonly, copy, nonatomic) NSArray *currentTabDocuments;
@property (readonly, copy, nonatomic) WBTabGroup *activeTabGroup;
@property (copy, nonatomic) NSString *activeTabGroupUUID;
@property (nonatomic) BOOL tabGroupOverviewIsPresented;
@property (readonly, nonatomic) BOOL createTabGroupAlertIsPresented;
@property (readonly, nonatomic) NSString *moveLocalTabsToNewGroupTitle;
@property (readonly, nonatomic) NSString *activeLibraryType;
@property (readonly, nonatomic) NSArray *tabGroups;
@property (readonly, nonatomic) NSArray *unnamedTabGroups;
@property (readonly, nonatomic) NSArray *namedTabGroups;
@property (readonly, nonatomic) NSArray *allTabGroups;
@property (readonly, nonatomic) NSSet *nonActiveTabGroupsInCurrentBrowsingMode;
@property (readonly, nonatomic) NSArray *allSyntheticBookmarkFolders;
@property (readonly, copy, nonatomic) NSString *startPageBackgroundImageIdentifier;
@property (readonly, nonatomic) unsigned long long indexOfSelectedTab;
@property (readonly, nonatomic) id<WBSOrderedTab> selectedTabForTabOrderProvider;
@property (readonly, nonatomic) unsigned long long numberOfTabs;

- (void)tabCollectionViewDidPresent:(id)a0;
- (id)initWithBrowserController:(id)a0;
- (void)tabCollectionViewDidDismiss:(id)a0;
- (void)tabDocumentDidUpdatePinned:(id)a0;
- (void)tabCollectionViewWillDismiss:(id)a0;
- (void)tabCollectionViewWillPresent:(id)a0;
- (void)tabBarManager:(id)a0 didCreateTabBar:(id)a1;
- (void)removeSnapshotForDocument:(id)a0;
- (id)insertInitialBlankTabDocumentWithPrivateBrowsingIfNeeded:(BOOL)a0;
- (void)openTabDocumentForLibraryType:(id)a0;
- (id)tabDocumentForURL:(id)a0;
- (id)tabAtIndex:(unsigned long long)a0;
- (void)updateUsageTrackingInformationIfNecessary;
- (void)_saveStateFromTimer:(id)a0;
- (void)tabGroupManager:(id)a0 willPerformBlockUpdatesForTabGroupWithUUID:(id)a1;
- (void)willTransitionTabView;
- (void)setActiveTabDocument:(id)a0 animated:(BOOL)a1 deferActivation:(BOOL)a2;
- (void)didGainOwnershipOfTabDocument:(id)a0;
- (void)moveTabDocumentToEndOfPinnedTabs:(id)a0;
- (id)snapshotsToPresistOnDiskForTabSnapshotCache:(id)a0;
- (unsigned long long)capacityForTabSnapshotCache:(id)a0;
- (void)closeAllOpenTabsAnimated:(BOOL)a0;
- (id)copyBookmark:(id)a0 toPerTabGroupBookmarkFolderWithID:(int)a1;
- (void)addDocumentObserver:(id)a0;
- (void)evictTabDocument:(id)a0;
- (double)tabCollectionViewItemHeaderHeight:(id)a0;
- (void)replaceTabDocument:(id)a0 withTabDocument:(id)a1;
- (BOOL)selectFirstUnpinnedTab;
- (void)updateSnapshotsForTabHoverPreviewIfNeeded;
- (void)_didReceiveMemoryWarning:(id)a0;
- (void)tabGroupManager:(id)a0 willReplaceTabWithUUID:(id)a1 withTabWithUUID:(id)a2;
- (void)insertNewTabDocumentWithDefaultOrdering:(id)a0 inBackground:(BOOL)a1 animated:(BOOL)a2;
- (void)textFieldDidEndEditing:(id)a0;
- (void)selectLocalTabGroup;
- (void)tabCollectionViewEndIgnoringUserInteraction:(id)a0 reason:(id)a1;
- (void)tabCollectionViewBeginIgnoringUserInteraction:(id)a0 reason:(id)a1;
- (id)swipeActionsConfigurationForTabGroup:(id)a0 forPickerSheet:(BOOL)a1;
- (void)openFocusedTabGroupWithCompletionHandler:(id /* block */)a0;
- (void)didUpdateTabDocuments;
- (void)tabSnapshotCache:(id)a0 didCacheSnapshotWithIdentifier:(id)a1;
- (void)makeActiveTabDocumentActive;
- (void)removeSingleBlankTabFromActiveTabGroup;
- (void)closeTab;
- (id)tabGroupsMenuElementsWithOptions:(unsigned long long)a0 newTabGroupName:(id)a1 hostTitle:(id)a2 descendantCount:(long long)a3 movingSelectedTabs:(id)a4 actionHandler:(id /* block */)a5;
- (void)tabHoverPreviewControllerDismissPreview:(id)a0;
- (void)tabGroupManager:(id)a0 didUpdateTabGroupWithUUID:(id)a1;
- (BOOL)switchToTabWithUUID:(id)a0 inTabGroupWithUUID:(id)a1;
- (BOOL)isTabGroupUUIDExpanded:(id)a0;
- (void)replaceTabDocument:(id)a0 withTabDocument:(id)a1 committingSpeculativeLoad:(BOOL)a2;
- (id)imageForTabGroup:(id)a0;
- (id)syntheticBookmarkFolderForTabGroup:(id)a0 withAttribution:(BOOL)a1;
- (BOOL)tabCollectionView:(id)a0 cloudTab:(id)a1 matchesSearchText:(id)a2;
- (void)tabCollectionViewDidUpdateItemVisibilityOrder:(id)a0;
- (id)swipeActionsConfigurationForTab:(id)a0 inTabGroup:(id)a1;
- (id)originatingTabForTab:(id)a0;
- (BOOL)tabCollectionView:(id)a0 canCloseItem:(id)a1;
- (void)tabGroupManager:(id)a0 didRemoveTabGroupWithUUID:(id)a1;
- (id)_currentTabs;
- (void)textFieldDidBeginEditing:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })effectiveSafeAreaInsetsForTabCollectionView:(id)a0;
- (void)setPrivateBrowsingMode:(long long)a0 animated:(BOOL)a1;
- (void)requestSnapshotForTabDocument:(id)a0 completion:(id /* block */)a1;
- (void)updateTabBarAnimated:(BOOL)a0;
- (id)cachedContentImageForTabDocument:(id)a0;
- (void)_redoCloseTabsWithUUIDs:(id)a0;
- (id)tabGroupWithUUID:(id)a0;
- (void)insertTabDocument:(id)a0 afterTabDocument:(id)a1 inBackground:(BOOL)a2 animated:(BOOL)a3;
- (void)removeSingleBlankTabFromInactiveTabGroup:(id)a0;
- (void)performBatchUpdatesWithBlock:(id /* block */)a0;
- (id)contextMenuConfigurationForTab:(id)a0 inTabGroup:(id)a1;
- (void)tabGroupManager:(id)a0 didUpdateTabWithUUID:(id)a1 userDriven:(BOOL)a2;
- (void)togglePinningTab:(id)a0 inInactiveTabGroup:(id)a1;
- (void)tabCollectionView:(id)a0 didMoveItem:(id)a1 overItem:(id)a2;
- (id)currentItemForTabOverview:(id)a0;
- (id)blankTabDocumentToReuseAllowingReorder:(BOOL)a0;
- (void)closeTabGroup:(id)a0;
- (void)tabCollectionViewDidCancelDismissal:(id)a0;
- (void)updateBackgroundImageForTabGroup:(id)a0;
- (void)sortTabsWithMode:(long long)a0;
- (void)tabCollectionView:(id)a0 didSelectItem:(id)a1;
- (void)dismissOpenTabGroupAlertIfNeeded;
- (void)_validateSavedState:(id)a0;
- (void)updateSnapshotCacheAndSnapshotActiveTab;
- (void)addSnapshotCacheObserver:(id)a0;
- (void)_newTabFromTabViewButton;
- (BOOL)moveTabWithUUID:(id)a0 fromForeignLocalGroupWithUUIDIntoActiveGroup:(id)a1;
- (id)browserControllerContainingLocalTabGroupUUID:(id)a0;
- (id)perTabGroupBookmarkListForFolderID:(int)a0 filteredUsingString:(id)a1;
- (BOOL)canAddNewTabForPrivateBrowsing:(BOOL)a0;
- (void)openNewTabWithOptions:(long long)a0 libraryType:(id)a1 completionHandler:(id /* block */)a2;
- (id)tabGroupsMenuForTabGroupButton:(BOOL)a0;
- (BOOL)tabCollectionView:(id)a0 item:(id)a1 matchesSearchText:(id)a2;
- (BOOL)tabCollectionView:(id)a0 validSnapshotExistsForItem:(id)a1;
- (void)logTabActivationInterval:(double)a0 forActivationType:(long long)a1;
- (BOOL)isTabGroupActive:(id)a0;
- (void)switchOutOfSyncedTabGroup;
- (void)openInitialBlankTabDocumentIfNeeded;
- (id)restoreRecentlyClosedTabDocumentWithTabStateData:(id)a0;
- (void)updateScopedBookmarkWithUUID:(id)a0 title:(id)a1 address:(id)a2;
- (void)closeTabDocuments:(id)a0 animated:(BOOL)a1 allowAddingToRecentlyClosedTabs:(BOOL)a2 showAutoCloseTabsAlert:(BOOL)a3;
- (id)tabDocumentWithUUID:(id)a0;
- (id)syntheticBookmarkFoldersIncludingActiveTabGroup:(BOOL)a0;
- (void)createNewTabGroup;
- (void)closeTabDocument:(id)a0 animated:(BOOL)a1;
- (BOOL)trySwitchingToPinnedTabOnNavigationToURL:(id)a0;
- (void)tabHoverPreviewController:(id)a0 showPreviewForItem:(id)a1;
- (void)reorderPinnedTabsIntoPlace;
- (id)blankTabDocumentToReuse;
- (void)moveTabDocument:(id)a0 overTabDocument:(id)a1;
- (void)performSuppressingDataModelUpdates:(id /* block */)a0;
- (void)deactivateAllUsageTrackingInformationIfNecessary;
- (void)hideTabDocuments:(id)a0;
- (id)insertPlaceholderTabDocumentAfterDocument:(id)a0;
- (id)addNewTabGroupWithTitle:(id)a0 fromExistingTabs:(BOOL)a1;
- (void)openNewTabWithOptions:(long long)a0 completionHandler:(id /* block */)a1;
- (void)updateActiveTab;
- (void)tabGroupConfirmationAlertDidBeginDismissal:(id)a0;
- (double)tabOverviewAdditionalItemHeaderHeight:(id)a0;
- (BOOL)tabSnapshotCache:(id)a0 shouldRequestSavedSnapshotWithIdentifier:(id)a1;
- (void)removeDocumentObserver:(id)a0;
- (void)saveTabDocumentUserActivitySoon:(id)a0;
- (void)tabCollectionView:(id)a0 closeCloudTab:(id)a1 onDevice:(id)a2;
- (void)moveTabDocument:(id)a0 toTabGroupWithUUID:(id)a1;
- (void)selectPrivateTabGroup;
- (void)tabSnapshotCacheDidFinishUpdating:(id)a0;
- (id)itemsToKeepVisibleForTabOverview:(id)a0;
- (id)representativeURLForTabGroupConfirmationAlert:(id)a0;
- (void)didEndTrackingSession:(id)a0;
- (BOOL)tabSnapshotCacheShouldDeferNextSnapshotRequest:(id)a0;
- (void)closeTabDocuments:(id)a0;
- (void)dealloc;
- (void)_cloudTabsDidUpdate:(id)a0;
- (void)closeTabs:(id)a0 inInactiveTabGroup:(id)a1;
- (void)insertNewTabDocument:(id)a0 forcingOrderAfterTabDocument:(id)a1 inBackground:(BOOL)a2 animated:(BOOL)a3;
- (void)openBookmark:(id)a0 inTabGroup:(id)a1;
- (void)tabCollectionView:(id)a0 item:(id)a1 didProduceNavigationIntent:(id)a2;
- (void)insertTabDocuments:(id)a0 beforeTabDocument:(id)a1 inBackground:(BOOL)a2 animated:(BOOL)a3;
- (void)presentAlertToCreateTabGroupFromTabs:(id)a0 withTitle:(id)a1 message:(id)a2 suggestedName:(id)a3 okActionTitle:(id)a4 completionHandler:(id /* block */)a5;
- (void)updateHibernatedTabDocumentsSavingState;
- (void)closeTabDocuments:(id)a0 animated:(BOOL)a1;
- (id)iconForSharingTabGroup:(id)a0;
- (void)tabSnapshotCache:(id)a0 requestSnapshotWithIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_updateUserActivityTimerFired;
- (void)updateTabViewsAnimatingTabBar:(BOOL)a0;
- (id)openInTabGroupMenuWithNewTabGroupName:(id)a0 URL:(id)a1 descendantCount:(long long)a2 handler:(id /* block */)a3;
- (void)tabGroupManager:(id)a0 didPerformBlockUpdatesForTabGroupWithUUID:(id)a1;
- (void)registerTabGroupManagerObserver:(id)a0;
- (void)updateSelectedTabGroupName;
- (void)invalidateSnapshotForTabDocument:(id)a0;
- (BOOL)tabItem:(id)a0 matchesSearchText:(id)a1;
- (void)tabCollectionView:(id)a0 closeItem:(id)a1;
- (void)reorderScopedBookmarkWithUUID:(id)a0 afterBookmarkWithUUID:(id)a1 notify:(BOOL)a2;
- (void)removeSnapshotCacheObserver:(id)a0;
- (void)setActiveTabDocument:(id)a0 animated:(BOOL)a1;
- (void)tabOverview:(id)a0 willInteractivelyCloseItem:(id)a1;
- (void)insertTabDocumentFromTabStateData:(id)a0;
- (void)registerUndoWithType:(long long)a0 actions:(id /* block */)a1;
- (unsigned long long)indexForTab:(id)a0;
- (void)pinnedTabsManager:(id)a0 didUpdatePinnedTabs:(id)a1 isPrivate:(BOOL)a2;
- (void)tabHoverPreviewControllerNeedsSnapshotUpdate:(id)a0;
- (void)toggleTabGroupUUIDExpanded:(id)a0;
- (BOOL)isTabUUIDActive:(id)a0;
- (void)willLoseOwnershipOfTabDocument:(id)a0;
- (void)moveTab:(id)a0 fromTabGroupWithUUID:(id)a1 toTabGroupWithUUID:(id)a2 overTab:(id)a3;
- (void)tabGroupManager:(id)a0 didUpdateTabsInTabGroupWithUUID:(id)a1;
- (id)dragItemForTab:(id)a0 inTabGroup:(id)a1;
- (void)_cancelVeryRecentlyClosedTabCountInvalidationTimer;
- (void)selectPreviousTabGroup;
- (void)tabCollectionView:(id)a0 relinquishBorrowedContentView:(id)a1 forItem:(id)a2;
- (void)tabGroupNamingTextDidChange:(id)a0;
- (void)registerUndoWithName:(id)a0 actions:(id /* block */)a1;
- (void)_undoCloseTabs:(id)a0;
- (id)existingPersistedTitleForTabDocument:(id)a0;
- (void)tabBar:(id)a0 toggleMediaStateMutedForItem:(id)a1;
- (id)tabDocumentWithIDForWebExtensions:(double)a0;
- (id)topScopedBookmarkListForActiveTabGroup;
- (void)closeAllOpenTabsAnimated:(BOOL)a0 temporarily:(BOOL)a1;
- (id)replacePlaceholderTabDocument:(id)a0 withTabDocuments:(id)a1 transitionToDragStateWithBlock:(id /* block */)a2;
- (id)duplicateTabDocument:(id)a0;
- (void)selectNextTabGroup;
- (void)didBeginTrackingSession:(id)a0;
- (void)moveTabGroup:(id)a0 beforeOrAfterTabGroup:(id)a1;
- (void)tabGroupManagerDidFinishSetup:(id)a0;
- (void)deleteScopedBookmarkWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)attemptToSelectTabGroupFromShare:(id)a0;
- (void)sortTabsInInactiveTabGroup:(id)a0 withSortMode:(long long)a1;
- (id)tabCollectionView:(id)a0 borrowContentViewForItem:(id)a1 withTopBackdropView:(id *)a2 ofHeight:(double)a3;
- (void)updateTabWithTabDocument:(id)a0 notify:(BOOL)a1 persist:(BOOL)a2;
- (void)_dismissTabView;
- (void)updateLocalTabGroupTitle;
- (void)insertNewBlankTabDocumentAnimated:(BOOL)a0;
- (void)tabDocumentDidUpdateUUID:(id)a0 previousUUID:(id)a1;
- (void)updateTabCount;
- (void)adoptTabsFromTabController:(id)a0;
- (BOOL)tabBar:(id)a0 canMoveItem:(id)a1;
- (void)tabOverviewWillUpdateInteractivePresentation:(id)a0;
- (void)didTransitionTabView;
- (id)iconForTabUUID:(id)a0;
- (id)addNewTabGroupWithTitle:(id)a0 fromTabs:(id)a1;
- (void)didFetchRecentlyAcceptedSharedTabGroupWithUUID:(id)a0 acceptedShareDate:(id)a1;
- (void)tabOverviewDidChangeAllowsInteractivePresentation:(id)a0;
- (void)flushPendingSnapshotsWithCompletion:(id /* block */)a0;
- (void)updateFocusedTabGroupEnteringForeground;
- (id)undoManagerForTabCollectionView:(id)a0;
- (id)contextMenuConfigurationForTabGroup:(id)a0 forPickerSheet:(BOOL)a1;
- (void)enumerateTabCollectionViewsWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)tabSnapshotCache:(id)a0 didEvictSnapshotWithIdentifier:(id)a1;
- (void)renameTabGroup:(id)a0;
- (void)closeTabDocumentWithURL:(id)a0 UUID:(id)a1;
- (void)unhideTabDocuments:(id)a0;
- (id)menuForTabGroup:(id)a0 forPickerSheet:(BOOL)a1 forEditMode:(BOOL)a2;
- (void)tabOverview:(id)a0 closeItems:(id)a1;
- (void)clearBrowserController;
- (void)createTabGroupFromExistingTabs:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)tabGroupManagerDidUpdateTabGroups:(id)a0;
- (void)shareDidUpdateForTabGroupWithUUID:(id)a0;
- (void)restoreEducationDeviceTabs;
- (id)tabCollectionView:(id)a0 snapshotForItem:(id)a1;
- (void)updateEducationTabsLastSyncDate;
- (void)insertPerTabGroupBookmark:(id)a0 inPerTabGroupBookmarkFolderWithID:(int)a1;
- (void)closeOtherTabs;
- (void)closeTabsAutomaticallyIfNecessary;
- (void)openURL:(id)a0 inTabGroup:(id)a1;
- (void)_beganSharingTabGroup:(id)a0;
- (id)tabGroupShareSheetForCurrentTabGroup;

@end
