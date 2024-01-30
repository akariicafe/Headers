@interface VideosUI.SegmentedControl : UISegmentedControl {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ handleActionForHostedView;
    void /* unknown type, empty encoding */ textPadding;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)segmentSelectionChanged;

@end
