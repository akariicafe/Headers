@interface UIKBRenderFactory_MonolithLinear : UIKBRenderFactory_Monolith

- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (double)tldKeyFontSize;
- (BOOL)preferGlyphForDelete;
- (BOOL)preferGlyphForClear;
- (BOOL)spaceKeyIsPressed;
- (double)tldKeyFontWeight;
- (BOOL)smallTextForSpaceAndClear;
- (BOOL)includeDeleteInVariants;
- (BOOL)forceVariantsInsideKeyplane;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_insetRectForSpaceKeyRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 yOffset:(double)a1;

@end
