@class CHDChart;

@interface EDChartSheet : EDSheet {
    CHDChart *mMainChart;
    BOOL mIsBoundsSet;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBounds;
}

- (void)teardown;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void).cxx_destruct;
- (void)addDrawable:(id)a0;
- (void)setMainChart:(id)a0;
- (id)mainChart;
- (BOOL)areBoundsSet;

@end
