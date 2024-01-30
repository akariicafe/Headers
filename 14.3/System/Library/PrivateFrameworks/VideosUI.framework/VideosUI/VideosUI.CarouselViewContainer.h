@interface VideosUI.CarouselViewContainer : UIView {
    void /* unknown type, empty encoding */ carouselView;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ pageControl;
    void /* unknown type, empty encoding */ shouldShowPageControl;
    void /* unknown type, empty encoding */ headerView;
}

- (void)pageChangeEventWithSender:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
