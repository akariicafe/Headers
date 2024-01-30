@class TabBarItem, TabBar, TabBarItemView, UIView;

@interface TabBarItemLayoutInfo : NSObject {
    TabBarItemView *_tabBarItemView;
    UIView *_itemSnapshotView;
}

@property (readonly, weak, nonatomic) TabBar *tabBar;
@property (readonly, weak, nonatomic) TabBarItem *tabBarItem;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) BOOL canClose;
@property (nonatomic, getter=isReordering) BOOL reordering;
@property (nonatomic, getter=isLeadingEdgeVisible) BOOL leadingEdgeVisible;
@property (nonatomic, getter=isTrailingEdgeVisible) BOOL trailingEdgeVisible;
@property (nonatomic, getter=isTrailingActiveItem) BOOL trailingActiveItem;
@property (nonatomic) double titleLayoutWidth;
@property (nonatomic) BOOL hidesTitleText;
@property (nonatomic) double titleAnchorAdditionalOffset;
@property (readonly, nonatomic) TabBarItemView *tabBarItemView;
@property (readonly, nonatomic) UIView *viewForDragPreview;
@property (readonly, nonatomic) BOOL hasViews;
@property (nonatomic, getter=isVisibleInTabBar) BOOL visibleInTabBar;
@property (nonatomic, getter=isRemovedFromTabBar) BOOL removedFromTabBar;
@property (nonatomic) unsigned long long activeAnimationCount;

- (void)closeButtonTapped:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_reusableView;
- (void)_clearViews;
- (void)_updateHidesTitleText;
- (long long)_visibleEdge;
- (void)updateTitleTruncation;
- (void)updateTabBarStyle;
- (void)mediaStateMuteButtonTapped:(id)a0;
- (BOOL)_requiresViews;
- (void)_clearView:(id)a0;
- (void)_clearViewsIfNeeded;
- (id)initWithTabBar:(id)a0 item:(id)a1;
- (void)itemDidUpdateTitle;
- (void)itemDidUpdateIcon;
- (void)itemDidUpdateIsActive;
- (void)itemDidUpdateIsPlaceholder;
- (void)itemDidUpdateMediaState;

@end
