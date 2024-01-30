@interface Highlights.ComparisonHorizontalBarView : UIView {
    void /* unknown type, empty encoding */ value;
    void /* unknown type, empty encoding */ maximumValue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_barLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ side;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ barColor;
    void /* unknown type, empty encoding */ titleInsideColor;
    void /* unknown type, empty encoding */ titleOutsideColor;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
