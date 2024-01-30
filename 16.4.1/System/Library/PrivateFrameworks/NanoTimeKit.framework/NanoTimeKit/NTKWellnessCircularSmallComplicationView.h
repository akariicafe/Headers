@class NTKRingsAndDotsView, NSMutableArray;

@interface NTKWellnessCircularSmallComplicationView : NTKCircularComplicationView {
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void)setForegroundColor:(id)a0;
- (void)_updateColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (double)_overlapStrokeWidth;
- (double)_ringDiameter;
- (double)_ringGapWidth;
- (double)_ringStrokeWidth;
- (void)_setLayoutEmptyRings;
- (void)_updateForTemplateChange;
- (void)setSecondaryForegroundColor:(id)a0;
- (void)setUsesMultiColor:(BOOL)a0;

@end
