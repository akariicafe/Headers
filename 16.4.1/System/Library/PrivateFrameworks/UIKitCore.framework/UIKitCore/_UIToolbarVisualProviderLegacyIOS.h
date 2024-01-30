@class UIView, _UIBarBackgroundLayoutLegacy, _UIBarBackground;

@interface _UIToolbarVisualProviderLegacyIOS : _UIToolbarVisualProvider {
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
    UIView *_customBackgroundView;
}

- (void)setCustomBackgroundView:(id)a0;
- (void)updateBarBackground;
- (void)updateBackgroundGroupName;
- (struct CGSize { double x0; double x1; })defaultSizeForOrientation:(long long)a0;
- (void)updateWithItems:(id)a0 fromOldItems:(id)a1 animate:(BOOL)a2;
- (void)updateItemsForNewFrame:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundFrame;
- (id)_repositionedItemsFromItems:(id)a0 withBarButtonFrames:(id *)a1 withHitRects:(id *)a2 buttonIndexes:(id *)a3 textButtonIndexes:(id *)a4;
- (double)_edgeMarginForBorderedItem:(BOOL)a0 isText:(BOOL)a1;
- (id)currentBackgroundView;
- (void)updateBarForStyle:(long long)a0;
- (void)updateBarBackgroundSize;
- (void)customViewChangedForButtonItem:(id)a0;
- (void)drawBackgroundViewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)a0;
- (BOOL)toolbarIsSmall;
- (id)_currentCustomBackground;
- (void)layoutSubviews;
- (id)_positionToolbarButtons:(id)a0 ignoringItem:(id)a1 resetFontScaleAdjustment:(BOOL)a2 actuallyRepositionButtons:(BOOL)a3;
- (void)_createViewsForItems:(id)a0;
- (void).cxx_destruct;

@end
