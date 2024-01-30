@class NSMutableSet, SBRootFolder, SBFolderController, NSString, SBHIconModel, SBHIconManager, NSHashTable;

@interface SBHHomeScreenUsageMonitor : NSObject <SBFolderObserver, SBLeafIconObserver, BSDescriptionProviding> {
    NSHashTable *_observers;
    NSMutableSet *_visibleHomeScreenWidgetIcons;
}

@property (retain, nonatomic) SBHIconModel *iconModel;
@property (retain, nonatomic) SBRootFolder *rootFolder;
@property (retain, nonatomic) SBFolderController *rootFolderController;
@property (nonatomic) BOOL delayedLayoutDidChangeNotification;
@property (nonatomic) unsigned long long homeScreenDisappearanceReasons;
@property (nonatomic) BOOL currentPageIndexDidChangeWhileScrolling;
@property (readonly, weak, nonatomic) SBHIconManager *iconManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIconManager:(id)a0;
- (void)leafIcon:(id)a0 didAddIconDataSource:(id)a1;
- (void)leafIcon:(id)a0 didRemoveIconDataSource:(id)a1;
- (void)iconManagerEditingDidChange:(id)a0;
- (void)folder:(id)a0 didMoveList:(id)a1 fromIndex:(unsigned long long)a2 toIndex:(unsigned long long)a3;
- (void)noteWidgetDiscoverabilityDidRejectSuggestion:(id)a0;
- (void)notifyForEveryTodayViewWidgetVisibilityOnCoverSheet:(BOOL)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)noteWidgetIconRemoved:(id)a0;
- (void)resetIconModel;
- (void)noteIconManagerTodayViewAtLocation:(long long)a0 didScrollToRevealIcons:(id)a1;
- (void)noteUserConfiguredIcon:(id)a0;
- (BOOL)isContentVisible;
- (id)succinctDescriptionBuilder;
- (void)folder:(id)a0 listHiddenDidChange:(id)a1;
- (void)noteWidgetDiscoverabilityDidAcceptSuggestion:(id)a0;
- (void)folder:(id)a0 didRemoveLists:(id)a1 atIndexes:(id)a2;
- (void)updateVisibleWidgetIcons;
- (void)addObserver:(id)a0;
- (void)noteWidgetDiscoverabilityStarted;
- (void)noteUserAddedWidgetIconStackSuggestion:(id)a0;
- (void)noteIconManagerCoverSheetTodayViewDidAppear;
- (void)noteIconManagerRootFolderControllerViewDidDisappear;
- (void)folder:(id)a0 didAddList:(id)a1;
- (void)noteLayoutChanged;
- (void)noteUserDislikedWidgetIconStackSuggestion:(id)a0;
- (void)noteWidgetIconAdded:(id)a0;
- (void)noteIconManagerContentOccludedChanged;
- (void)noteEditingModeEntered;
- (void)noteIconManagerRootFolderControllerViewWillAppear;
- (void)noteWidgetDiscoverabilityDidEnterEditingMode;
- (void)resetRootFolderController;
- (void)updateVisibilityReasons;
- (void)dealloc;
- (void)noteUserTappedWidgetIcon:(id)a0 withURL:(id)a1;
- (void)removeObserver:(id)a0;
- (void)noteIconManagerOverlayTodayViewDidAppear;
- (void)noteIconManagerOverlayTodayViewDidDisappear;
- (void)noteWidgetIconStack:(id)a0 changedActiveWidget:(id)a1;
- (void)iconManagerDidChangeIconModel:(id)a0;
- (void)folder:(id)a0 didAddIcons:(id)a1 removedIcons:(id)a2;
- (id)succinctDescription;
- (void)rootFolderControllerCurrentPageIndexDidChange:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)notifyForEveryHomeScreenWidgetVisibility;
- (void)noteIconManagerCoverSheetTodayViewDidDisappear;
- (void)noteCurrentPageIndexChanged:(unsigned long long)a0;
- (void)rootFolderControllerDidEndScrolling:(id)a0;
- (void)leafIcon:(id)a0 didChangeActiveDataSource:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)listModelIndexForRootFolderController:(id)a0;
- (void)noteUserDislikedSiriSuggestionOnWidgetIconStackSuggestion:(id)a0;
- (void)iconModelDidLayOut:(id)a0;
- (void)notifyRootFolderControllerViewWillAppear;
- (void)iconManagerDidChangeRootViewController:(id)a0;
- (void)folder:(id)a0 didReplaceIcon:(id)a1 withIcon:(id)a2;

@end
