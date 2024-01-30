@interface UIKBRenderFactoryiPadHWR_Portrait : UIKBRenderFactory10Key_Round

- (long long)assetIdiom;
- (id)lightKeycapsFontName;
- (double)keyCornerRadius;
- (double)moreKeyFontSize;
- (BOOL)_anchorControlKeys;
- (struct CGPoint { double x0; double x1; })_controlKeyOffset;
- (void)_customizeTraits:(id)a0 forPopupForKey:(id)a1 withRenderingContext:(id)a2 keycapsFontName:(id)a3;
- (BOOL)_displaysAsControlKeyStyle:(id)a0;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (double)controlColumnWidthFactor;
- (double)deleteKeyFontSize;
- (double)dictationKeyFontSize;
- (double)dismissKeyFontSize;
- (struct CGPoint { double x0; double x1; })dismissKeyOffset;
- (double)internationalKeyFontSize;
- (id)messagesWriteboardKeyImageName;
- (void)setupLayoutSegments;
- (BOOL)shouldUseRoundCornerForKey:(id)a0;
- (double)spaceKeyFontSize;
- (struct CGPoint { double x0; double x1; })spaceReturnKeyTextOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })symbolFrameInsets;
- (id)thinKeycapsFontName;

@end
