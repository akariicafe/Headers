@class NSString, UITabBar;
@protocol _UIBarAppearanceChangeObserver;

@interface _UITabBarVisualProvider : NSObject

@property (readonly, nonatomic) UITabBar *tabBar;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) BOOL useModernAppearance;
@property (readonly, nonatomic) id<_UIBarAppearanceChangeObserver> appearanceObserver;
@property (nonatomic) double minimumWidthForHorizontalLayout;

- (void)updateBackgroundGroupName;
- (void)changeLayout;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_shim_setCustomBackgroundView:(id)a0;
- (void)prepare;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_setShadowAlpha:(double)a0;
- (void)teardown;
- (void)changeSelectedItem:(id)a0 fromItem:(id)a1;
- (double)_shim_shadowAlpha;
- (void)changeItemsTo:(id)a0 removingItems:(id)a1 selectedItem:(id)a2 animate:(BOOL)a3;
- (void).cxx_destruct;
- (id)preferredFocusedView;
- (void)updateArchivedSubviews:(id)a0;
- (void)changeAppearance;
- (id)exchangeItem:(id)a0 withItem:(id)a1;
- (void)setSemanticContentAttribute:(long long)a0;
- (BOOL)_shim_shadowHidden;
- (id)traitCollectionForChild:(id)a0 baseTraitCollection:(id)a1;
- (void)_shim_updateTabBarItemView:(id)a0;
- (id)_shim_accessoryView;
- (void)updateConstraints;
- (BOOL)wantsFocus;
- (void)_shim_setShadowHidden:(BOOL)a0;
- (double)_shim_heightForCustomizingItems;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeGivenSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (double)defaultAnimationDuration;
- (id)initWithTabBar:(id)a0;
- (void)changeItemsTo:(id)a0 removingItems:(id)a1 selectedItem:(id)a2 oldSelectedItem:(id)a3 animate:(BOOL)a4;
- (void)_shim_setAccessoryView:(id)a0;
- (id)_shim_shadowView;
- (void)traitCollectionDidChange:(id)a0;
- (id)defaultTintColor;
- (void)_shim_updateFocusHighlightVisibility;
- (id)createViewForTabBarItem:(id)a0;
- (void)tabBarSizeChanged:(struct CGSize { double x0; double x1; })a0;
- (void)_shim_layoutItemsOnly;

@end
