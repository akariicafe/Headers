@interface DOCSeparatorView : UIView

+ (double)separatorThicknessForTraitCollection:(id)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)didMoveToWindow;

@end
