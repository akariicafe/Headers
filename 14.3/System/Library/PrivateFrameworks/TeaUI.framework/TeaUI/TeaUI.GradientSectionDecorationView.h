@interface TeaUI.GradientSectionDecorationView : UICollectionReusableView <TUGutterViewBoundsObserver> {
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ gradientSize;
    void /* unknown type, empty encoding */ overscrollPinPosition;
}

- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)gutterViewBoundsDidChange;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
