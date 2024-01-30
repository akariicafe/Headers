@interface UIKBRenderFactoryHWR_Portrait : UIKBRenderFactory10Key_Round

- (void)setupLayoutSegments;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (struct CGPoint { double x0; double x1; })deleteGlyphOffset;
- (double)spaceKeyFontSize;
- (struct CGPoint { double x0; double x1; })globeKeyTextOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })symbolFrameInsets;
- (BOOL)shouldUseRoundCornerForKey:(id)a0;
- (struct CGPoint { double x0; double x1; })spaceKeyTextOffset;
- (struct CGPoint { double x0; double x1; })moreKeyTextOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })handwritingAreaInsets;
- (double)handwritingGradientStartLocation;

@end
