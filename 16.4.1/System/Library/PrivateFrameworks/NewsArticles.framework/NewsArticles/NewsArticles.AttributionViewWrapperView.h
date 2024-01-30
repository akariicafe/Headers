@interface NewsArticles.AttributionViewWrapperView : UIView {
    void /* unknown type, empty encoding */ attributionView;
    void /* unknown type, empty encoding */ navigationItemStyle;
    void /* unknown type, empty encoding */ intrinsicWidth;
    void /* unknown type, empty encoding */ isTransitioning;
}

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)attributionViewShouldDisableHackForNewsLayout;

@end
