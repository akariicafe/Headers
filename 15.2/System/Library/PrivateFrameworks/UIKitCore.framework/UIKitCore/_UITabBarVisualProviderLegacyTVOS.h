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

- (void)_shim_updateFocusHighlightVisibility;
- (void)teardown;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeGivenSize:(struct CGSize { double x0; double x1; })a0;
- (id)_parentViewForItems;
- (void)_setFocusedItemHightlightVisible:(BOOL)a0;
- (id)_shim_compatibilityBackgroundView;
- (double)_shim_shadowAlpha;
- (id)_shim_accessoryView;
- (void)_updateBackground;
- (void)changeItemsTo:(id)a0 removingItems:(id)a1 selectedItem:(id)a2 oldSelectedItem:(id)a3 animate:(BOOL)a4;
- (void)prepare;
- (void)_layoutTabBarItems;
- (void)_shim_layoutItemsOnly;
- (void)changeLayout;
- (void)_configureItems:(id)a0;
- (void)_updateAccessoryView;
- (void)_shim_updateTabBarItemView:(id)a0;
- (void)_updateFocusedItemHighlightViewWithInterfaceStyle:(long long)a0 visible:(BOOL)a1;
- (void)updateBackgroundGroupName;
- (void)_shim_setShadowAlpha:(double)a0;
- (void)changeAppearance;
- (void)setSemanticContentAttribute:(long long)a0;
- (void).cxx_destruct;
- (void)_updateHighlightMotionEffect;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_shim_shadowHidden;
- (void)_applyAppearanceCustomizationsToItem:(id)a0;
- (void)_shim_setShadowHidden:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_shadowFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 height:(double)a1;
- (void)_shim_setAccessoryView:(id)a0;
- (void)updateArchivedSubviews:(id)a0;
- (void)_updateFocusedItemHighlightFrame;
- (id)preferredFocusedView;
- (void)changeSelectedItem:(id)a0 fromItem:(id)a1;
- (id)_focusedItemHighlightView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutRegion;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)_focusedItemHighlightViewIsVisible;
- (id)createViewForTabBarItem:(id)a0;
- (id)exchangeItem:(id)a0 withItem:(id)a1;
- (void)_shim_setCustomBackgroundView:(id)a0;

@end
