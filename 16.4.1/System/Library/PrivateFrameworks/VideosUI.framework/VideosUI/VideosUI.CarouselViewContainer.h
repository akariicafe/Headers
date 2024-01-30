@interface VideosUI.CarouselViewContainer : VUIBaseView {
    void /* unknown type, empty encoding */ carouselView;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ pageControl;
    void /* unknown type, empty encoding */ shouldShowPageControl;
    void /* unknown type, empty encoding */ headerView;
}

- (void)pageChangeEventWithSender:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
