@class NSString, UITabBar;
@protocol _UIBarAppearanceChangeObserver;

@interface _UITabBarVisualProvider : NSObject

@property (readonly, nonatomic) UITabBar *tabBar;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) BOOL useModernAppearance;
@property (readonly, nonatomic) id<_UIBarAppearanceChangeObserver> appearanceObserver;
@property (nonatomic) double minimumWidthForHorizontalLayout;
@property (nonatomic) double backgroundTransitionProgress;

- (void)_shim_updateFocusHighlightVisibility;
- (void)teardown;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeGivenSize:(struct CGSize { double x0; double x1; })a0;
- (id)_shim_compatibilityBackgroundView;
- (double)backgroundTransitionProgress;
- (double)_shim_shadowAlpha;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (BOOL)wantsFocus;
- (id)_shim_accessoryView;
- (void)changeItemsTo:(id)a0 removingItems:(id)a1 selectedItem:(id)a2 oldSelectedItem:(id)a3 animate:(BOOL)a4;
- (void)prepare;
- (void)changeItemsTo:(id)a0 removingItems:(id)a1 selectedItem:(id)a2 animate:(BOOL)a3;
- (void)_shim_layoutItemsOnly;
- (void)changeLayout;
- (void)tabBarSizeChanged:(struct CGSize { double x0; double x1; })a0;
- (void)_shim_updateTabBarItemView:(id)a0;
- (double)defaultAnimationDuration;
- (void)updateBackgroundGroupName;
- (void)_shim_setShadowAlpha:(double)a0;
- (void)changeAppearance;
- (id)traitCollectionForChild:(id)a0 baseTraitCollection:(id)a1;
- (void)setSemanticContentAttribute:(long long)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_shim_shadowHidden;
- (void)_shim_setShadowHidden:(BOOL)a0;
- (id)defaultTintColor;
- (void)setBackgroundTransitionProgress:(double)a0 forceUpdate:(BOOL)a1;
- (void)_shim_setAccessoryView:(id)a0;
- (void)updateArchivedSubviews:(id)a0;
- (id)preferredFocusedView;
- (void)changeSelectedItem:(id)a0 fromItem:(id)a1;
- (void)setBackgroundTransitionProgress:(double)a0;
- (id)initWithTabBar:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)createViewForTabBarItem:(id)a0;
- (id)exchangeItem:(id)a0 withItem:(id)a1;
- (id)_shim_shadowView;
- (double)_shim_heightForCustomizingItems;
- (void)_shim_setCustomBackgroundView:(id)a0;

@end
