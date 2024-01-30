@class SBIconListModel, NSString, SBHIconModel;
@protocol SBRootFolderDelegate;

@interface SBRootFolder : SBFolder <SBIconIndexNodeObserver> {
    struct __CFRunLoopObserver { } *_checkIgnoredListRunLoopObserver;
}

@property (nonatomic, getter=isCheckingIgnoredListConsistency) BOOL checkingIgnoredListConsistency;
@property (retain, nonatomic, setter=_setDock:) SBIconListModel *dock;
@property (retain, nonatomic, setter=_setTodayList:) SBIconListModel *todayList;
@property (retain, nonatomic, setter=_setFavoriteTodayList:) SBIconListModel *favoriteTodayList;
@property (retain, nonatomic, setter=_setIgnoredList:) SBIconListModel *ignoredList;
@property (weak, nonatomic) id<SBRootFolderDelegate> delegate;
@property (weak, nonatomic) SBHIconModel *model;
@property (readonly, nonatomic) BOOL supportsBadging;
@property (readonly, nonatomic) BOOL containsWidgetIconExcludingTodayList;
@property (readonly, nonatomic) BOOL containsVisibleWidgetIconExcludingTodayList;
@property (readonly, nonatomic) BOOL containsNonDefaultSizedIconExcludingTodayList;
@property (readonly, nonatomic) BOOL containsVisibleNonDefaultSizedIconExcludingTodayList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isRootFolderClass;

- (unsigned long long)columnCountForTodayList;
- (unsigned long long)allowedGridSizeClassesForDock;
- (void)enumerateExtraListsUsingBlock:(id /* block */)a0;
- (unsigned long long)allowedGridSizeClassesForTodayList;
- (unsigned long long)maxIconCountForDock;
- (void)iconList:(id)a0 didReplaceIcon:(id)a1 withIcon:(id)a2;
- (void)iconList:(id)a0 didAddIcon:(id)a1;
- (id)nodeIdentifier;
- (void)scheduleIgnoredListConsistencyCheck;
- (void)delegateDidChange:(id)a0;
- (BOOL)_compactsFirstList;
- (BOOL)isIconAtIndexPathInTodayList:(id)a0;
- (unsigned long long)_specialIndexOfList:(id)a0;
- (unsigned long long)visibleIndexOfList:(id)a0;
- (void)enumerateTodayListIconsUsingBlock:(id /* block */)a0;
- (id)_handleBumpedIcons:(id)a0 afterInsertingIconIntoListAtIndex:(unsigned long long)a1 options:(unsigned long long)a2 didBump:(BOOL *)a3;
- (id)nodeDescriptionWithPrefix:(id)a0;
- (id)listAtIndex:(unsigned long long)a0;
- (id)icons;
- (BOOL)isIconAtIndexPathInFavoriteTodayList:(id)a0;
- (void)_notifyIndexChange:(int)a0 identifiers:(id)a1 withValidationBlock:(id /* block */)a2;
- (BOOL)canAddIconCount:(unsigned long long)a0 startingAtList:(id)a1;
- (void)node:(id)a0 didRemoveContainedNodeIdentifiers:(id)a1;
- (BOOL)canBounceIcon:(id)a0;
- (BOOL)isIconAtIndexPathInIgnoredList:(id)a0;
- (void)node:(id)a0 didAddContainedNodeIdentifiers:(id)a1;
- (void)checkIgnoredListConsistency;
- (void)dealloc;
- (BOOL)isRootFolder;
- (void)enumerateTodayListsUsingBlock:(id /* block */)a0;
- (BOOL)isIconAtIndexPathInDock:(id)a0;
- (unsigned long long)indexOfList:(id)a0;
- (BOOL)isIconInIgnoredList:(id)a0;
- (BOOL)canRemoveIcons;
- (BOOL)isExtraListIndex:(unsigned long long)a0;
- (void)_tearDownIgnoredListConsistencyCheckRunLoopObserverIfNeeded;
- (void)nodeDidMoveContainedNodes:(id)a0;
- (id)initWithFolder:(id)a0 copyLeafIcons:(BOOL)a1;
- (unsigned long long)hiddenIndexOfList:(id)a0;
- (BOOL)isIconAtIndexPathInDock:(id)a0 includingDockFolders:(BOOL)a1;
- (BOOL)canEditDisplayName;
- (void)_didExplicitlyRemoveHiddenLists:(id)a0;
- (void).cxx_destruct;
- (void)removeList:(id)a0;

@end
