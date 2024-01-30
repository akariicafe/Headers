@class NTKRingsAndDotsView, NSMutableArray;

@interface NTKCircularWellnessUtilityComplicationView : NTKUtilityCircularComplicationView {
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
    BOOL _animationsAllowed;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void)setForegroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)_updateRingColors;
- (void)_setLayoutEmptyRings;
- (void)applyFaceColorPalette:(id)a0 units:(unsigned long long)a1;
- (void)_updateForTemplateChange;
- (void)_applyForegroundAlpha;
- (id)_ringColor;

@end
