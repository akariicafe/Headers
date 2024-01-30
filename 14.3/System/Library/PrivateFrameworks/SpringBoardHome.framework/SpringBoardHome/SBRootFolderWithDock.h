@class NSString, SBIconListModel;

@interface SBRootFolderWithDock : SBRootFolder <SBIconIndexNodeObserver> {
    SBIconListModel *_dock;
    SBIconListModel *_todayList;
    SBIconListModel *_favoriteTodayList;
    SBIconListModel *_ignoredList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dock;
- (void)_setDock:(id)a0;
- (void)node:(id)a0 didRemoveContainedNodeIdentifiers:(id)a1;
- (void)node:(id)a0 didAddContainedNodeIdentifiers:(id)a1;
- (void).cxx_destruct;
- (id)favoriteTodayList;
- (void)_notifyIndexChange:(int)a0 identifiers:(id)a1 withValidationBlock:(id /* block */)a2;
- (void)_setIgnoredList:(id)a0;
- (void)nodeDidMoveContainedNodes:(id)a0;
- (void)_setFavoriteTodayList:(id)a0;
- (void)_setTodayList:(id)a0;
- (BOOL)supportsDock;
- (id)todayList;
- (id)ignoredList;
- (BOOL)supportsIgnoredList;
- (BOOL)supportsTodayList;
- (id)initWithUniqueIdentifier:(id)a0 displayName:(id)a1 maxListCount:(unsigned long long)a2 listGridSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a3 iconGridSizeClassSizes:(struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; })a4;

@end
