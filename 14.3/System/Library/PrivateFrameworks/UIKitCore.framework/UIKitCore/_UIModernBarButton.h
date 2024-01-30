@interface _UIModernBarButton : UIButton

@property (nonatomic, setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets { double top; double left; double bottom; double right; } _additionalSelectionInsets;

- (BOOL)_supportsMacIdiom;
- (id)_newLabelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedIndicatorBounds;
- (BOOL)_likelyToHaveTitle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_shouldAdjustToTraitCollection;
- (struct CGSize { double x0; double x1; })_roundSize:(struct CGSize { double x0; double x1; })a0;

@end
