@interface PXSmartScaleView : UIView

@property struct CGSize { double width; double height; } displaySize;
@property (readonly) double displayScale;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewScaleDidChange;

@end
