@interface VideosUI.PinningHeaderView : VUIBaseView {
    void /* unknown type, empty encoding */ statusBarView;
    void /* unknown type, empty encoding */ collapsingView;
    void /* unknown type, empty encoding */ pinnedView;
    void /* unknown type, empty encoding */ animator;
    void /* unknown type, empty encoding */ trackingScrollView;
    void /* unknown type, empty encoding */ scrollObserver;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
