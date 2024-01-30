@class _UIBarBackground, UIMotionEffect, UIView, UIScrollView, _UIBarBackgroundLayoutLegacy;

@interface _UITabBarVisualProviderLegacyTVOS : _UITabBarVisualProvider {
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
    UIView *_customBackgroundView;
    UIView *_accessoryView;
    UIScrollView *_itemsScrollView;
    UIView *_focusedItemHighlightView;
    UIMotionEffect *_focusedItemHighlightMotionEffect;
}

- (void)updateBackgroundGroupName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutRegion;
- (void)changeLayout;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_shim_setCustomBackgroundView:(id)a0;
- (void)_applyAppearanceCustomizationsToItem:(id)a0;
- (void)prepare;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_setShadowAlpha:(double)a0;
- (void)_updateBackground;
- (void)teardown;
- (void)changeSelectedItem:(id)a0 fromItem:(id)a1;
- (void)_updateAccessoryView;
- (double)_shim_shadowAlpha;
- (void).cxx_destruct;
- (id)preferredFocusedView;
- (void)updateArchivedSubviews:(id)a0;
- (void)changeAppearance;
- (id)exchangeItem:(id)a0 withItem:(id)a1;
- (void)setSemanticContentAttribute:(long long)a0;
- (BOOL)_shim_shadowHidden;
- (void)_shim_updateTabBarItemView:(id)a0;
- (id)_shim_accessoryView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_shadowFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 height:(double)a1;
- (void)_shim_setShadowHidden:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeGivenSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)_layoutTabBarItems;
- (void)changeItemsTo:(id)a0 removingItems:(id)a1 selectedItem:(id)a2 oldSelectedItem:(id)a3 animate:(BOOL)a4;
- (id)_focusedItemHighlightView;
- (void)_configureItems:(id)a0;
- (void)_shim_setAccessoryView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_shim_updateFocusHighlightVisibility;
- (id)createViewForTabBarItem:(id)a0;
- (id)_parentViewForItems;
- (BOOL)_focusedItemHighlightViewIsVisible;
- (void)_updateFocusedItemHighlightViewWithInterfaceStyle:(long long)a0 visible:(BOOL)a1;
- (void)_updateFocusedItemHighlightFrame;
- (void)_updateHighlightMotionEffect;
- (void)_setFocusedItemHightlightVisible:(BOOL)a0;
- (void)_shim_layoutItemsOnly;

@end
