@class NTKRingsAndDotsView, NSMutableArray;

@interface NTKWellnessCircularSmallComplicationView : NTKCircularComplicationView {
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void)setForegroundColor:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateColors;
- (double)_ringDiameter;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_setLayoutEmptyRings;
- (void)setSecondaryForegroundColor:(id)a0;
- (double)_ringGapWidth;
- (void)_updateForTemplateChange;
- (void)setUsesMultiColor:(BOOL)a0;
- (double)_ringStrokeWidth;
- (double)_overlapStrokeWidth;

@end
