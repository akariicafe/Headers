@class _UIToolbarContentView, NSString, _UIBarBackgroundLayout, UIView, _UIBarBackground;

@interface _UIToolbarVisualProviderModernIOS : _UIToolbarVisualProvider <_UIBarButtonItemViewOwner, _UIBarAppearanceChangeObserver> {
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayout *_backgroundViewLayout;
    UIView *_customBackgroundView;
    _UIToolbarContentView *_contentView;
    long long _itemDistribution;
    BOOL _useModernAppearance;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_itemDidChangeHiddenState:(id)a0;
- (void)updateBackgroundGroupName;
- (void)_itemDidChangeEnabledState:(id)a0;
- (void)_itemDidChangeWidth:(id)a0;
- (void)updateBarForStyle:(long long)a0;
- (BOOL)useModernAppearance;
- (void)prepare;
- (void)updateAppearance;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundFrame;
- (BOOL)toolbarIsSmall;
- (void)setUseModernAppearance:(BOOL)a0;
- (void)updateBarBackgroundSize;
- (id)currentBackgroundView;
- (long long)itemDistribution;
- (void).cxx_destruct;
- (id)_currentCustomBackground;
- (void)updateArchivedSubviews:(id)a0;
- (void)updateBarBackground;
- (void)updateWithItems:(id)a0 fromOldItems:(id)a1 animate:(BOOL)a2;
- (id)appearanceObserver;
- (void)setCustomBackgroundView:(id)a0;
- (id)traitCollectionForChild:(id)a0 baseTraitCollection:(id)a1;
- (struct CGSize { double x0; double x1; })defaultSizeForOrientation:(long long)a0;
- (void)setItemDistribution:(long long)a0;
- (void)appearance:(id)a0 categoriesChanged:(long long)a1;
- (void)_updateBackgroundLegacyForPosition:(long long)a0;
- (void)_itemCustomViewDidChange:(id)a0 fromView:(id)a1;
- (void)_updateBackgroundModern;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundFrame;
- (void)layoutSubviews;
- (void)_itemDidChangeSelectionState:(id)a0;
- (void)_itemStandardViewNeedsUpdate:(id)a0;
- (void)_updateContentView;
- (void)_setViewOwnersAndUpdateContentViewForItems:(id)a0 withOldItems:(id)a1 animated:(BOOL)a2;

@end
