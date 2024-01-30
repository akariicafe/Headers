@interface UIKBRenderFactory_MonolithLinearSlim : UIKBRenderFactory_MonolithLinear

- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (double)keyRoundRectRadius;
- (double)pillRoundRectRadius;
- (void)configureSymbolStyle:(id)a0 forEnabledKeyplaneSwitchKey:(id)a1;
- (id)_enabledTraitsForKeyplaneSwitchKey:(id)a0 onKeyplane:(id)a1;
- (struct CGPoint { double x0; double x1; })symbolTextOffset;
- (id)variantBackgroundColor;
- (id)_activeTraitsForKeyplaneSwitchKey:(id)a0 onKeyplane:(id)a1;
- (id)variantKeyColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })switchPaddedFrameFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })spacePaddedFrameFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })switchSymbolFrameFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)variantPillBackgroundColor;
- (id)highlightedVariantPillBackgroundColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })spaceSymbolFrameFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)highlightedVariantLayeredBackgroundColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })internationalSymbolFrameFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })spaceDisplayFrameFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_enabledTraitsForInternationalKey:(id)a0 onKeyplane:(id)a1;
- (id)_variantTraitsForKeyplaneSwitchKey:(id)a0 onKeyplane:(id)a1;
- (id)_activeTraitsForInternationalKey:(id)a0 onKeyplane:(id)a1;

@end
