@class NTKRingsAndDotsView, NSMutableArray;

@interface NTKCircularWellnessUtilityComplicationView : NTKUtilityCircularComplicationView {
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
    BOOL _animationsAllowed;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void)setForegroundColor:(id)a0;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyFaceColor:(unsigned long long)a0 units:(unsigned long long)a1;
- (id)_ringColor;
- (void)_setLayoutEmptyRings;
- (void)_updateForTemplateChange;
- (void)_applyForegroundAlpha;
- (void)_updateRingColors;

@end
