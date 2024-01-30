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
@property (readonly, nonatomic) BOOL containsNonDefaultSizedIconExcludingTodayList;
@property (readonly, nonatomic) BOOL containsVisibleNonDefaultSizedIconExcludingTodayList;

+ (BOOL)isRootFolderClass;

- (BOOL)isRootFolder;
- (BOOL)canBounceIcon:(id)a0;
- (BOOL)canEditDisplayName;
- (unsigned long long)_specialIndexOfList:(id)a0;
- (void)enumerateExtraListsUsingBlock:(id /* block */)a0;
- (BOOL)isExtraListIndex:(unsigned long long)a0;
- (BOOL)canAddIconCount:(unsigned long long)a0 startingAtList:(id)a1;
- (id)icons;
- (void)enumerateTodayListIconsUsingBlock:(id /* block */)a0;
- (BOOL)isIconAtIndexPathInTodayList:(id)a0;
- (BOOL)isIconInIgnoredList:(id)a0;
- (BOOL)isIconAtIndexPathInFavoriteTodayList:(id)a0;
- (BOOL)isIconAtIndexPathInIgnoredList:(id)a0;
- (BOOL)isIconAtIndexPathInDock:(id)a0 includingDockFolders:(BOOL)a1;
- (void)enumerateTodayListsUsingBlock:(id /* block */)a0;
- (id)nodeIdentifier;
- (void).cxx_destruct;
- (void)removeList:(id)a0;
- (unsigned long long)visibleIndexOfList:(id)a0;
- (BOOL)isIconAtIndexPathInDock:(id)a0;
- (id)nodeDescriptionWithPrefix:(id)a0;
- (BOOL)canRemoveIcons;
- (BOOL)supportsTodayPage;
- (id)listAtIndex:(unsigned long long)a0;
- (unsigned long long)hiddenIndexOfList:(id)a0;
- (void)checkIgnoredListConsistency;
- (BOOL)_compactsFirstList;
- (void)delegateDidChange:(id)a0;
- (unsigned long long)indexOfList:(id)a0;
- (void)_didExplicitlyRemoveHiddenLists:(id)a0;

@end
