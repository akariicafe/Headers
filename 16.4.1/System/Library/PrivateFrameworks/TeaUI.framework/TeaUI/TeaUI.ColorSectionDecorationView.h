@interface TeaUI.ColorSectionDecorationView : UICollectionReusableView <TeaUI.GutterViewBoundsObserver>

- (void)applyLayoutAttributes:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)gutterViewBoundsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)a0;

@end
