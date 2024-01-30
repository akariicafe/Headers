@class NSString, _UIBarBackgroundLayout, UIPointerInteraction, UIView, _UIBarBackground;

@interface _UITabBarVisualProviderLegacyIOS : _UITabBarVisualProvider <_UIBarAppearanceChangeObserver, UIPointerInteractionDelegate, PTSettingsKeyObserver> {
    UIPointerInteraction *_pointerInteraction;
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayout *_backgroundViewLayout;
    UIView *_customBackgroundView;
    UIView *_accessoryView;
    double _minimumWidthForHorizontalLayout;
    BOOL _useModernAppearance;
    long long _style;
    double _backgroundTransitionProgress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateBackground;
- (void)_configureItems:(id)a0;
- (void)changeLayout;
- (void)appearance:(id)a0 categoriesChanged:(long long)a1;
- (void)updateBackgroundGroupName;
- (long long)_styleForTraitCollection:(id)a0;
- (id)appearanceObserver;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutRegion;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (BOOL)useModernAppearance;
- (id)traitCollectionForChild:(id)a0 baseTraitCollection:(id)a1;
- (id)_preferredFocusedViewCarplay;
- (void)_shim_setAccessoryView:(id)a0;
- (void)changeSelectedItem:(id)a0 fromItem:(id)a1;
- (void)_updateAppearanceForTransitionFromItem:(id)a0 toItem:(id)a1;
- (id)_preferredFocusedViewiOS;
- (double)_shim_heightForCustomizingItems;
- (double)backgroundTransitionProgress;
- (void)setUseModernAppearance:(BOOL)a0;
- (id)_shim_compatibilityBackgroundView;
- (void)_updateBackgroundModern;
- (void)setBackgroundTransitionProgress:(double)a0;
- (void)changeAppearance;
- (void)_shim_setShadowAlpha:(double)a0;
- (void)_shim_updateTabBarItemView:(id)a0;
- (void)setMinimumWidthForHorizontalLayout:(double)a0;
- (void)_updateAccessoryView;
- (void)changeItemsTo:(id)a0 removingItems:(id)a1 selectedItem:(id)a2 oldSelectedItem:(id)a3 animate:(BOOL)a4;
- (void)_shim_setShadowHidden:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeGivenSize:(struct CGSize { double x0; double x1; })a0;
- (void)_shim_setCustomBackgroundView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_shadowFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 height:(double)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (double)_shim_shadowAlpha;
- (id)_focusedItemHighlightView;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_layoutTabBarItems;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)layoutSubviews;
- (id)_shim_accessoryView;
- (void)teardown;
- (void)updateArchivedSubviews:(id)a0;
- (void)_applyAppearanceCustomizationsToItem:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (double)minimumWidthForHorizontalLayout;
- (void)_updateBackgroundLegacy;
- (id)exchangeItem:(id)a0 withItem:(id)a1;
- (void)_shim_layoutItemsOnly;
- (void)setBackgroundTransitionProgress:(double)a0 forceUpdate:(BOOL)a1;
- (BOOL)_shim_shadowHidden;
- (id)createViewForTabBarItem:(id)a0;
- (void)prepare;
- (void).cxx_destruct;
- (id)preferredFocusedView;

@end
