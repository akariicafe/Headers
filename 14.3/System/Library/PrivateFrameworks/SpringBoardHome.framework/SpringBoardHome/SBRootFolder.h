@class SBIconListModel, SBHIconModel;
@protocol SBRootFolderDelegate;

@interface SBRootFolder : SBFolder

@property (retain, nonatomic, setter=_setDock:) SBIconListModel *dock;
@property (retain, nonatomic, setter=_setTodayList:) SBIconListModel *todayList;
@property (retain, nonatomic, setter=_setFavoriteTodayList:) SBIconListModel *favoriteTodayList;
@property (retain, nonatomic, setter=_setIgnoredList:) SBIconListModel *ignoredList;
@property (weak, nonatomic) id<SBRootFolderDelegate> delegate;
@property (weak, nonatomic) SBHIconModel *model;
@property (readonly, nonatomic) BOOL supportsBadging;
@property (readonly, nonatomic) BOOL supportsDock;
@property (readonly, nonatomic) BOOL supportsTodayList;
@property (readonly, nonatomic) BOOL supportsIgnoredList;
@property (readonly, nonatomic) BOOL containsWidgetIconExcludingTodayList;
@property (readonly, nonatomic) BOOL containsVisibleWidgetIconExcludingTodayList;

+ (BOOL)isRootFolderClass;

- (BOOL)isIconAtIndexPathInDock:(id)a0;
- (BOOL)canBounceIcon:(id)a0;
- (BOOL)isIconAtIndexPathInTodayList:(id)a0;
- (id)nodeDescriptionWithPrefix:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsTodayPage;
- (id)listAtIndex:(unsigned long long)a0;
- (BOOL)isIconAtIndexPathInIgnoredList:(id)a0;
- (unsigned long long)hiddenIndexOfList:(id)a0;
- (BOOL)canAddIconCount:(unsigned long long)a0 startingAtList:(id)a1;
- (id)folderContainingIndexPath:(id)a0 relativeIndexPath:(id *)a1;
- (BOOL)canRemoveIcons;
- (BOOL)isIconAtIndexPathInDock:(id)a0 includingDockFolders:(BOOL)a1;
- (unsigned long long)_specialIndexOfList:(id)a0;
- (BOOL)isIconAtIndexPathInFavoriteTodayList:(id)a0;
- (void)_didExplicitlyRemoveHiddenLists:(id)a0;
- (unsigned long long)visibleIndexOfList:(id)a0;
- (BOOL)canEditDisplayName;
- (BOOL)isValidListIndex:(unsigned long long)a0;
- (unsigned long long)indexOfList:(id)a0;
- (void)removeList:(id)a0;
- (BOOL)isRootFolder;
- (void)enumerateExtraListsUsingBlock:(id /* block */)a0;
- (id)icons;
- (BOOL)_compactsFirstList;
- (id)nodeIdentifier;

@end
