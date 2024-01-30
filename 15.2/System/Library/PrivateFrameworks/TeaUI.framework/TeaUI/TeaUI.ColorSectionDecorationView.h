@interface TeaUI.ColorSectionDecorationView : UICollectionReusableView <TeaUI.GutterViewBoundsObserver>

- (void)willMoveToSuperview:(id)a0;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)gutterViewBoundsDidChange;

@end
