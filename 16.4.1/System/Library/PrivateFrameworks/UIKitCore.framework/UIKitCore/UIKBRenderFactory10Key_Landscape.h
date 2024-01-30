@interface UIKBRenderFactory10Key_Landscape : UIKBRenderFactory10Key_Portrait

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })wideShadowPaddleInsets;
- (struct CGPoint { double x0; double x1; })numberPadKeySecondaryTextOffset;
- (struct CGPoint { double x0; double x1; })abcKeyTextOffset;
- (double)capitalAbcSymbolSize;
- (double)centerColumnWidthFactor;
- (double)controlColumnWidthFactor;
- (struct CGPoint { double x0; double x1; })longVowelSignKeyTextOffset;
- (double)numberPadKeyPrimarySymbolSize;
- (struct CGPoint { double x0; double x1; })numberPadKeyPrimaryTextOffset;
- (struct CGPoint { double x0; double x1; })numberPadVBarSecondaryTextOffset;
- (void)setupColumnLayoutSegmentsWithControlWidth:(double)a0;

@end
