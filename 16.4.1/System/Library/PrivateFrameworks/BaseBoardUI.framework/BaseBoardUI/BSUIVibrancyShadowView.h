@class BSUIVibrancyShadowValues, CAFilter;

@interface BSUIVibrancyShadowView : BSUIVibrancyView {
    CAFilter *_vibrantColorFilter;
    BSUIVibrancyShadowValues *_values;
}

+ (Class)layerClass;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)updateFilters;
- (id)_defaultGradientColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)gradientLayer;

@end
