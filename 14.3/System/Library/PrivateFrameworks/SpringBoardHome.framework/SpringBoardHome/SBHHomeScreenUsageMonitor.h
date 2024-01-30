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

- (void)leafIcon:(id)a0 didRemoveIconDataSource:(id)a1;
- (void)folder:(id)a0 didAddIcons:(id)a1 removedIcons:(id)a2;
- (void)noteLayoutChanged;
- (id)initWithIconManager:(id)a0;
- (void)folder:(id)a0 didRemoveLists:(id)a1 atIndexes:(id)a2;
- (void).cxx_destruct;
- (void)folder:(id)a0 listHiddenDidChange:(id)a1;
- (void)removeObserver:(id)a0;
- (void)folder:(id)a0 didMoveList:(id)a1 fromIndex:(unsigned long long)a2 toIndex:(unsigned long long)a3;
- (void)noteIconManagerOverlayTodayViewDidDisappear;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)notifyForEveryHomeScreenWidgetVisibility;
- (void)dealloc;
- (void)notifyRootFolderControllerViewWillAppear;
- (void)addObserver:(id)a0;
- (void)notifyForEveryTodayViewWidgetVisibilityOnCoverSheet:(BOOL)a0;
- (unsigned long long)listViewIndexForRootFolderController:(id)a0;
- (void)noteWidgetIconStack:(id)a0 changedActiveWidget:(id)a1;
- (void)resetRootFolderController;
- (id)succinctDescription;
- (void)leafIcon:(id)a0 didAddIconDataSource:(id)a1;
- (void)noteUserConfiguredIcon:(id)a0;
- (void)noteCurrentPageIndexChanged:(unsigned long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)folder:(id)a0 didAddList:(id)a1;
- (void)noteIconManagerRootFolderControllerViewWillAppear;
- (void)noteWidgetIconAdded:(id)a0;
- (void)folder:(id)a0 didReplaceIcon:(id)a1 withIcon:(id)a2;
- (void)noteIconManagerOverlayTodayViewDidScrollToRevealIcons:(id)a0;
- (void)updateVisibleWidgetIcons;
- (id)succinctDescriptionBuilder;
- (void)noteUserTappedWidgetIcon:(id)a0 withURL:(id)a1;
- (void)noteIconManagerRootFolderContentOccludedChanged;
- (void)leafIcon:(id)a0 didChangeActiveDataSource:(id)a1;
- (void)noteWidgetIconRemoved:(id)a0;
- (void)rootFolderControllerCurrentPageIndexDidChange:(id)a0;
- (void)noteIconManagerRootFolderControllerViewDidDisappear;
- (void)noteUserDislikedWidgetIconStackSuggestion:(id)a0;
- (void)iconManagerEditingDidChange:(id)a0;
- (void)updateVisibilityReasons;
- (void)noteIconManagerOverlayTodayViewDidAppear;
- (void)iconModelDidLayOut:(id)a0;
- (BOOL)isContentVisible;
- (void)iconManagerDidChangeRootViewController:(id)a0;
- (void)noteIconManagerCoverSheetTodayViewDidDisappear;
- (void)iconManagerDidChangeIconModel:(id)a0;
- (void)resetIconModel;
- (void)rootFolderControllerDidEndScrolling:(id)a0;
- (void)noteIconManagerCoverSheetTodayViewDidAppear;

@end
