@class NSArray;

@interface VideosUI.TomatometerTableView : VUIBaseView <VUILabelBaselineProtocol> {
    void /* unknown type, empty encoding */ itemViews;
}

@property (nonatomic, readonly) NSArray *accessibilityItemViews;

- (double)bottomMarginWithBaselineMargin:(double)a0;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (double)vui_baselineOffsetFromBottom;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;

@end
