@class NSString, SBIconListModel;

@interface SBRootFolderWithDock : SBRootFolder <SBIconIndexNodeObserver> {
    struct __CFRunLoopObserver { } *_checkIgnoredListRunLoopObserver;
    SBIconListModel *_dock;
    SBIconListModel *_todayList;
    SBIconListModel *_favoriteTodayList;
    SBIconListModel *_ignoredList;
}

@property (nonatomic, getter=isCheckingIgnoredListConsistency) BOOL checkingIgnoredListConsistency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)allowedGridSizeClassesForDock;
- (unsigned long long)maxIconCountForDock;
- (unsigned long long)columnCountForTodayList;
- (unsigned long long)allowedGridSizeClassesForTodayList;
- (BOOL)supportsDock;
- (id)todayList;
- (void)scheduleIgnoredListConsistencyCheck;
- (void)_setFavoriteTodayList:(id)a0;
- (void)iconList:(id)a0 didReplaceIcon:(id)a1 withIcon:(id)a2;
- (id)ignoredList;
- (void)iconList:(id)a0 didAddIcon:(id)a1;
- (void)_setDock:(id)a0;
- (id)favoriteTodayList;
- (void)_notifyIndexChange:(int)a0 identifiers:(id)a1 withValidationBlock:(id /* block */)a2;
- (void)node:(id)a0 didRemoveContainedNodeIdentifiers:(id)a1;
- (BOOL)supportsTodayList;
- (void)_setTodayList:(id)a0;
- (void).cxx_destruct;
- (void)_setIgnoredList:(id)a0;
- (void)nodeDidMoveContainedNodes:(id)a0;
- (id)dock;
- (void)checkIgnoredListConsistency;
- (void)_tearDownIgnoredListConsistencyCheckRunLoopObserverIfNeeded;
- (void)dealloc;
- (void)delegateDidChange:(id)a0;
- (void)node:(id)a0 didAddContainedNodeIdentifiers:(id)a1;
- (BOOL)supportsIgnoredList;

@end
