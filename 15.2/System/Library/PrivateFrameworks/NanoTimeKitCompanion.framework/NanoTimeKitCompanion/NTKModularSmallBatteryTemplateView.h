@interface NTKModularSmallBatteryTemplateView : NTKModularSmallRingTemplateView

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_update;
- (id)forcedRingColor;
- (id)preferredRingColor;
- (void)applyColorScheme:(id)a0;
- (void)applyTransitionFraction:(double)a0 fromFaceColor:(unsigned long long)a1 toFaceColor:(unsigned long long)a2 units:(unsigned long long)a3 brightenedUnits:(unsigned long long)a4;
- (void)_refreshRingImage;

@end
