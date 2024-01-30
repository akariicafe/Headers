@class _UIToolbarContentView, NSString, _UIBarBackgroundLayout, UIView, _UIBarBackground;

@interface _UIToolbarVisualProviderModernIOS : _UIToolbarVisualProvider <_UIBarButtonItemViewOwner, _UIBarAppearanceChangeObserver> {
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayout *_backgroundViewLayout;
    UIView *_customBackgroundView;
    _UIToolbarContentView *_contentView;
    long long _itemDistribution;
    BOOL _useModernAppearance;
    double _backgroundTransitionProgress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_itemDidChangeWidth:(id)a0;
- (void)setCustomBackgroundView:(id)a0;
- (void)updateBarBackground;
- (void)_itemDidChangeHiddenState:(id)a0;
- (void)appearance:(id)a0 categoriesChanged:(long long)a1;
- (void)updateBackgroundGroupName;
- (void)_setViewOwnersAndUpdateContentViewForItems:(id)a0 withOldItems:(id)a1 animated:(BOOL)a2;
- (void)_updateBackgroundLegacyForPosition:(long long)a0;
- (struct CGSize { double x0; double x1; })defaultSizeForOrientation:(long long)a0;
- (void)updateWithItems:(id)a0 fromOldItems:(id)a1 animate:(BOOL)a2;
- (void)_itemDidChangeSelectionState:(id)a0;
- (void)_itemStandardViewNeedsUpdate:(id)a0;
- (void)_itemDidChangeEnabledState:(id)a0;
- (id)appearanceObserver;
- (void)_updateContentView;
- (void)_itemCustomViewDidChange:(id)a0 fromView:(id)a1;
- (BOOL)useModernAppearance;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundFrame;
- (id)traitCollectionForChild:(id)a0 baseTraitCollection:(id)a1;
- (id)currentBackgroundView;
- (void)updateBarForStyle:(long long)a0;
- (long long)itemDistribution;
- (void)updateBarBackgroundSize;
- (double)backgroundTransitionProgress;
- (void)setUseModernAppearance:(BOOL)a0;
- (void)_updateBackgroundModern;
- (void)setItemDistribution:(long long)a0;
- (void)setBackgroundTransitionProgress:(double)a0;
- (BOOL)toolbarIsSmall;
- (void)updateAppearance;
- (id)_currentCustomBackground;
- (void)layoutSubviews;
- (void)updateArchivedSubviews:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundFrame;
- (void)prepare;
- (void).cxx_destruct;

@end
