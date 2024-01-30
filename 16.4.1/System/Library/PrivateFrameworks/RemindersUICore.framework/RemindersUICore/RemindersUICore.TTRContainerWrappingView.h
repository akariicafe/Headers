@interface RemindersUICore.TTRContainerWrappingView : NUIContainerView {
    void /* unknown type, empty encoding */ horizontalSpacing;
    void /* unknown type, empty encoding */ verticalSpacing;
    void /* unknown type, empty encoding */ maxRowCount;
    void /* unknown type, empty encoding */ lastLayoutResult;
    void /* unknown type, empty encoding */ viewsRequiringNewRows;
    void /* unknown type, empty encoding */ customSpacingByView;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithArrangedSubviews:(id)a0;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })calculateArrangedSizeFittingSize:(struct CGSize { double x0; double x1; })a0;

@end
