@interface NewsArticles.AttributionViewWrapperView : UIView {
    void /* unknown type, empty encoding */ attributionView;
    void /* unknown type, empty encoding */ navigationItemStyle;
    void /* unknown type, empty encoding */ intrinsicWidth;
    void /* unknown type, empty encoding */ isTransitioning;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)attributionViewShouldDisableHackForNewsLayout;

@end
