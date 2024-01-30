@class UnifiedBar, NSSet, UnifiedTabBar, BookmarksBarView, NSHashTable, SFUnifiedTabBarItemArrangement;

@interface TabBarManager : NSObject {
    NSHashTable *_observers;
    UnifiedTabBar *_cachedInlineTabBar;
}

@property (nonatomic) long long displayMode;
@property (retain, nonatomic) NSSet *hiddenItems;
@property (retain, nonatomic) SFUnifiedTabBarItemArrangement *itemArrangement;
@property (retain, nonatomic) UnifiedBar *unifiedBar;
@property (nonatomic) BOOL suppressesStandaloneTabBar;
@property (readonly, nonatomic) UnifiedTabBar *inlineTabBar;
@property (readonly, nonatomic) UnifiedTabBar *standaloneTabBar;
@property (readonly, nonatomic) UnifiedTabBar *effectiveTabBar;
@property (retain, nonatomic) BookmarksBarView *bookmarksBar;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setActiveItem:(id)a0 animated:(BOOL)a1;
- (void)setActiveItemIsExpanded:(BOOL)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)scrollToActiveItemAnimated:(BOOL)a0;
- (void)setItemArrangement:(id)a0 animated:(BOOL)a1 keepingItemVisible:(id)a2;
- (void)_updateUnifiedBarContentArrangement;
- (void)_setUsesInlineTabBar:(BOOL)a0;
- (void)_updateUsesStandaloneTabBar;
- (id)_inlineItemArrangementForItemArrangement:(id)a0 displayMode:(long long)a1;
- (void)_configureStandaloneTabBar;
- (void)_notifyDidUpdateDisplayMode;
- (void)_notifyDidCreateTabBar:(id)a0;
- (void)_setUsesStandaloneTabBar:(BOOL)a0;
- (id)_standaloneItemArrangementForItemArrangement:(id)a0 displayMode:(long long)a1;
- (void)_setItemArrangement:(id)a0 animated:(BOOL)a1 keepingItemVisible:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)_canAnimateInlineTabBarForTransitionToItemArrangement:(id)a0;
- (BOOL)_canAnimateStandaloneTabBarForTransitionToItemArrangement:(id)a0;

@end
