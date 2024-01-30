@interface NTKModularSmallBatteryTemplateView : NTKModularSmallRingTemplateView

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)_update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)forcedRingColor;
- (void)_refreshRingImage;
- (void)applyColorScheme:(id)a0;
- (id)preferredRingColor;

@end
