@interface HealthVisualization.ActivitySummaryInsetView : UIView {
    void /* unknown type, empty encoding */ containedView;
    void /* unknown type, empty encoding */ insetSpacing;
    void /* unknown type, empty encoding */ bottomSpacing;
    void /* unknown type, empty encoding */ topSpacing;
}

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
