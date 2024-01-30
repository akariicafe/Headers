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
- (void)_updateRingColors;
- (void).cxx_destruct;
- (void)_applyForegroundAlpha;
- (id)_ringColor;
- (void)_setLayoutEmptyRings;
- (void)_updateForTemplateChange;
- (void)applyFaceColorPalette:(id)a0 units:(unsigned long long)a1;

@end
