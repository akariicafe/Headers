@interface UIKBRenderFactoryiPad10Key_Portrait : UIKBRenderFactory10Key

- (void)_customizeTraits:(id)a0 forPopupForKey:(id)a1 withRenderingContext:(id)a2 keycapsFontName:(id)a3;
- (id)backgroundTraitsForKeyplane:(id)a0;
- (double)keyCornerRadius;
- (void)setupLayoutSegments;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (id)shiftKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (id)messagesWriteboardKeyImageName;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (id)thinKeycapsFontName;
- (struct CGPoint { double x0; double x1; })abcKeyTextOffset;
- (struct CGPoint { double x0; double x1; })globeKeyTextOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })topEdgeAdjustmentInsets;
- (double)numberPadKeyPrimarySymbolSize;
- (unsigned long long)edgesAdjustedForTranslucentGapsForGeometry:(id)a0 key:(id)a1 onKeyplane:(id)a2;
- (struct CGPoint { double x0; double x1; })numberPadKeyPrimaryTextOffset;
- (struct CGPoint { double x0; double x1; })numberPadVBarSecondaryTextOffset;
- (struct CGPoint { double x0; double x1; })numberPadKeySecondaryTextOffset;
- (struct CGPoint { double x0; double x1; })dictationKeyTextOffset;
- (double)controlColumnWidthFactor;
- (id)lightKeycapsFontName;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })wideShadowPaddleInsets;

@end
