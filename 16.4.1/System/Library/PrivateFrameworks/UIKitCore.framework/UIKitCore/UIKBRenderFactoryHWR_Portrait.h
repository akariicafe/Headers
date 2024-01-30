@interface UIKBRenderFactoryHWR_Portrait : UIKBRenderFactory10Key_Round

- (double)symbolImageControlKeyFontSize;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (struct CGPoint { double x0; double x1; })deleteGlyphOffset;
- (struct CGPoint { double x0; double x1; })globeKeyTextOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })handwritingAreaInsets;
- (double)handwritingGradientStartLocation;
- (struct CGPoint { double x0; double x1; })moreKeyTextOffset;
- (void)setupLayoutSegments;
- (BOOL)shouldUseRoundCornerForKey:(id)a0;
- (double)spaceKeyFontSize;
- (struct CGPoint { double x0; double x1; })spaceKeyTextOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })symbolFrameInsets;

@end
