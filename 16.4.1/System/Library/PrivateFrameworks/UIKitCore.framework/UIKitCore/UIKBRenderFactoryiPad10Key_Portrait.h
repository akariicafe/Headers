@interface UIKBRenderFactoryiPad10Key_Portrait : UIKBRenderFactory10Key

- (long long)assetIdiom;
- (id)lightKeycapsFontName;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })wideShadowPaddleInsets;
- (double)keyCornerRadius;
- (struct CGPoint { double x0; double x1; })numberPadKeySecondaryTextOffset;
- (void)_customizeTraits:(id)a0 forPopupForKey:(id)a1 withRenderingContext:(id)a2 keycapsFontName:(id)a3;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (struct CGPoint { double x0; double x1; })abcKeyTextOffset;
- (id)backgroundTraitsForKeyplane:(id)a0;
- (double)controlColumnWidthFactor;
- (struct CGPoint { double x0; double x1; })dictationKeyTextOffset;
- (unsigned long long)edgesAdjustedForTranslucentGapsForGeometry:(id)a0 key:(id)a1 onKeyplane:(id)a2;
- (struct CGPoint { double x0; double x1; })globeKeyTextOffset;
- (id)messagesWriteboardKeyImageName;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (double)numberPadKeyPrimarySymbolSize;
- (struct CGPoint { double x0; double x1; })numberPadKeyPrimaryTextOffset;
- (struct CGPoint { double x0; double x1; })numberPadVBarSecondaryTextOffset;
- (void)setupLayoutSegments;
- (id)thinKeycapsFontName;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })topEdgeAdjustmentInsets;

@end
