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

- (void)setCustomBackgroundView:(id)a0;
- (void)setItemDistribution:(long long)a0;
- (void)_updateContentView;
- (void)_itemStandardViewNeedsUpdate:(id)a0;
- (void)layoutSubviews;
- (void)_itemDidChangeHiddenState:(id)a0;
- (void)_itemCustomViewDidChange:(id)a0 fromView:(id)a1;
- (id)_currentCustomBackground;
- (void)_itemDidChangeEnabledState:(id)a0;
- (void)_itemDidChangeSelectionState:(id)a0;
- (void)_itemDidChangeWidth:(id)a0;
- (long long)itemDistribution;
- (double)backgroundTransitionProgress;
- (void)_updateBackgroundModern;
- (void)appearance:(id)a0 categoriesChanged:(long long)a1;
- (void)prepare;
- (void)updateBarBackgroundSize;
- (void)updateWithItems:(id)a0 fromOldItems:(id)a1 animate:(BOOL)a2;
- (void)updateBarBackground;
- (void)updateAppearance;
- (void)updateBackgroundGroupName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundFrame;
- (id)traitCollectionForChild:(id)a0 baseTraitCollection:(id)a1;
- (id)appearanceObserver;
- (void)_updateBackgroundLegacyForPosition:(long long)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })defaultSizeForOrientation:(long long)a0;
- (BOOL)useModernAppearance;
- (id)currentBackgroundView;
- (void)updateArchivedSubviews:(id)a0;
- (void)_setViewOwnersAndUpdateContentViewForItems:(id)a0 withOldItems:(id)a1 animated:(BOOL)a2;
- (void)setBackgroundTransitionProgress:(double)a0;
- (BOOL)toolbarIsSmall;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundFrame;
- (void)updateBarForStyle:(long long)a0;
- (void)setUseModernAppearance:(BOOL)a0;

@end
