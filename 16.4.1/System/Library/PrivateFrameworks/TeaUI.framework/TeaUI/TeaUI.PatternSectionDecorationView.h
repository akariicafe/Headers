@interface TeaUI.PatternSectionDecorationView : UICollectionReusableView <TeaUI.GutterViewBoundsObserver> {
    void /* unknown type, empty encoding */ patternView;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ token;
}

- (void)applyLayoutAttributes:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)gutterViewBoundsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)traitCollectionDidChange:(id)a0;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;

@end
