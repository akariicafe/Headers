@interface UIKBRenderFactory_MonolithLinearSlim : UIKBRenderFactory_MonolithLinear

- (id)_enabledTraitsForControlKey:(id)a0;
- (id)_highlightedTraitsForControlKey:(id)a0;
- (struct CGPoint { double x0; double x1; })_textOffsetForKey:(id)a0;
- (id)_variantTraitsForControlKey:(id)a0 onKeyplane:(id)a1;
- (void)configureCornersOnGeometry:(id)a0 forKey:(id)a1;
- (void)configureGeometry:(id)a0 forControlKey:(id)a1;
- (void)configureSymbolStyle:(id)a0 forControlKey:(id)a1;
- (id)highlightedVariantLayeredBackgroundColor;
- (id)highlightedVariantPillBackgroundColor;
- (id)variantPillBackgroundColor;
- (double)variantPlatterHeight;
- (id)variantTextColor;

@end
