@interface TeaUI.GradientSectionDecorationView : UICollectionReusableView <TeaUI.GutterViewBoundsObserver> {
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ gradientSize;
    void /* unknown type, empty encoding */ overscrollPinPosition;
    void /* unknown type, empty encoding */ offset;
}

- (void)applyLayoutAttributes:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)gutterViewBoundsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;

@end
