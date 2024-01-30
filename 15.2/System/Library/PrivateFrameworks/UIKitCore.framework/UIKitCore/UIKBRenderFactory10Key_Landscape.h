@interface UIKBRenderFactory10Key_Landscape : UIKBRenderFactory10Key_Portrait

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })wideShadowPaddleInsets;
- (double)numberPadKeyPrimarySymbolSize;
- (struct CGPoint { double x0; double x1; })numberPadKeyPrimaryTextOffset;
- (struct CGPoint { double x0; double x1; })numberPadVBarSecondaryTextOffset;
- (struct CGPoint { double x0; double x1; })longVowelSignKeyTextOffset;
- (struct CGPoint { double x0; double x1; })numberPadKeySecondaryTextOffset;
- (double)capitalAbcSymbolSize;
- (struct CGPoint { double x0; double x1; })abcKeyTextOffset;
- (void)setupColumnLayoutSegmentsWithControlWidth:(double)a0;
- (double)controlColumnWidthFactor;
- (double)centerColumnWidthFactor;

@end
