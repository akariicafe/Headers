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

- (void)_updateBackground;
- (void)_configureItems:(id)a0;
- (void)changeLayout;
- (void)updateBackgroundGroupName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutRegion;
- (void)_shim_setAccessoryView:(id)a0;
- (void)changeSelectedItem:(id)a0 fromItem:(id)a1;
- (id)_shim_compatibilityBackgroundView;
- (void)changeAppearance;
- (void)_shim_setShadowAlpha:(double)a0;
- (void)_shim_updateTabBarItemView:(id)a0;
- (void)_updateAccessoryView;
- (void)changeItemsTo:(id)a0 removingItems:(id)a1 selectedItem:(id)a2 oldSelectedItem:(id)a3 animate:(BOOL)a4;
- (void)_shim_setShadowHidden:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeGivenSize:(struct CGSize { double x0; double x1; })a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_shim_setCustomBackgroundView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_shadowFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 height:(double)a1;
- (double)_shim_shadowAlpha;
- (id)_focusedItemHighlightView;
- (void)_layoutTabBarItems;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)layoutSubviews;
- (id)_shim_accessoryView;
- (void)teardown;
- (void)updateArchivedSubviews:(id)a0;
- (void)_applyAppearanceCustomizationsToItem:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)exchangeItem:(id)a0 withItem:(id)a1;
- (void)_shim_layoutItemsOnly;
- (BOOL)_shim_shadowHidden;
- (id)createViewForTabBarItem:(id)a0;
- (void)prepare;
- (void).cxx_destruct;
- (id)preferredFocusedView;
- (BOOL)_focusedItemHighlightViewIsVisible;
- (id)_parentViewForItems;
- (void)_setFocusedItemHightlightVisible:(BOOL)a0;
- (void)_shim_updateFocusHighlightVisibility;
- (void)_updateFocusedItemHighlightFrame;
- (void)_updateFocusedItemHighlightViewWithInterfaceStyle:(long long)a0 visible:(BOOL)a1;
- (void)_updateHighlightMotionEffect;

@end
