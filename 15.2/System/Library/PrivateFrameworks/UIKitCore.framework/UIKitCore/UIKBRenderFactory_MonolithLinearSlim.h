@interface UIKBRenderFactory_MonolithLinearSlim : UIKBRenderFactory_MonolithLinear

- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (double)keyRoundRectRadius;
- (struct CGPoint { double x0; double x1; })_textOffsetForKey:(id)a0;
- (id)variantKeyColor;
- (void)configureSymbolStyle:(id)a0 forEnabledKeyplaneSwitchKey:(id)a1;
- (void)configureCornersOnGeometry:(id)a0 forKey:(id)a1;
- (id)_enabledTraitsForKeyplaneSwitchKey:(id)a0 onKeyplane:(id)a1;
- (void)configureSymbolStyle:(id)a0 forActiveKeyplaneSwitchKey:(id)a1;
- (double)pillRoundRectRadius;
- (id)_activeTraitsForKeyplaneSwitchKey:(id)a0 onKeyplane:(id)a1;
- (struct CGPoint { double x0; double x1; })symbolTextOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })switchPaddedFrameFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })spacePaddedFrameFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })switchSymbolFrameFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)variantBackgroundColor;
- (id)variantPillBackgroundColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })internationalSymbolFrameFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)highlightedVariantPillBackgroundColor;
- (id)highlightedVariantLayeredBackgroundColor;
- (id)_enabledTraitsForInternationalKey:(id)a0 onKeyplane:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })spaceSymbolFrameFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })spaceDisplayFrameFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_variantTraitsForKeyplaneSwitchKey:(id)a0 onKeyplane:(id)a1;
- (id)_activeTraitsForInternationalKey:(id)a0 onKeyplane:(id)a1;

@end
