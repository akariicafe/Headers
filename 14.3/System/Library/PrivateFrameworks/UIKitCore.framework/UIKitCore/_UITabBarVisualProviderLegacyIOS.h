@class _UICursorInteraction, NSString, _UIBarBackgroundLayout, UIView, _UIBarBackground;

@interface _UITabBarVisualProviderLegacyIOS : _UITabBarVisualProvider <_UIBarAppearanceChangeObserver, _UICursorInteractionDelegate> {
    _UICursorInteraction *_cursorInteraction;
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayout *_backgroundViewLayout;
    UIView *_customBackgroundView;
    UIView *_accessoryView;
    double _minimumWidthForHorizontalLayout;
    BOOL _useModernAppearance;
    long long _style;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBackgroundGroupName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutRegion;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1;
- (void)changeLayout;
- (void)_shim_setCustomBackgroundView:(id)a0;
- (BOOL)useModernAppearance;
- (void)_applyAppearanceCustomizationsToItem:(id)a0;
- (void)prepare;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_setShadowAlpha:(double)a0;
- (void)_updateBackground;
- (void)teardown;
- (void)changeSelectedItem:(id)a0 fromItem:(id)a1;
- (void)setUseModernAppearance:(BOOL)a0;
- (id)_preferredFocusedViewiOS;
- (void)_updateAccessoryView;
- (double)_shim_shadowAlpha;
- (void).cxx_destruct;
- (id)preferredFocusedView;
- (void)updateArchivedSubviews:(id)a0;
- (void)changeAppearance;
- (id)exchangeItem:(id)a0 withItem:(id)a1;
- (void)setSemanticContentAttribute:(long long)a0;
- (id)appearanceObserver;
- (BOOL)_shim_shadowHidden;
- (id)traitCollectionForChild:(id)a0 baseTraitCollection:(id)a1;
- (void)_shim_updateTabBarItemView:(id)a0;
- (id)_shim_accessoryView;
- (void)appearance:(id)a0 categoriesChanged:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_shadowFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 height:(double)a1;
- (void)_shim_setShadowHidden:(BOOL)a0;
- (id)_preferredFocusedViewCarplay;
- (void)_updateBackgroundModern;
- (double)_shim_heightForCustomizingItems;
- (id)cursorInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeGivenSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (long long)_styleForTraitCollection:(id)a0;
- (void)_layoutTabBarItems;
- (void)changeItemsTo:(id)a0 removingItems:(id)a1 selectedItem:(id)a2 oldSelectedItem:(id)a3 animate:(BOOL)a4;
- (id)_focusedItemHighlightView;
- (void)_updateBackgroundLegacy;
- (void)_configureItems:(id)a0;
- (void)_shim_setAccessoryView:(id)a0;
- (double)minimumWidthForHorizontalLayout;
- (void)traitCollectionDidChange:(id)a0;
- (id)createViewForTabBarItem:(id)a0;
- (void)_updateAppearanceForTransitionFromItem:(id)a0 toItem:(id)a1;
- (void)setMinimumWidthForHorizontalLayout:(double)a0;
- (void)_shim_layoutItemsOnly;

@end
