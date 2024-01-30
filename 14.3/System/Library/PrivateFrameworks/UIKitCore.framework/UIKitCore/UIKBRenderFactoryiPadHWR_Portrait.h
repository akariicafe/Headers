@interface UIKBRenderFactoryiPadHWR_Portrait : UIKBRenderFactory10Key_Round

- (void)_customizeTraits:(id)a0 forPopupForKey:(id)a1 withRenderingContext:(id)a2 keycapsFontName:(id)a3;
- (double)keyCornerRadius;
- (void)setupLayoutSegments;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (id)messagesWriteboardKeyImageName;
- (id)thinKeycapsFontName;
- (double)deleteKeyFontSize;
- (double)moreKeyFontSize;
- (struct CGPoint { double x0; double x1; })dismissKeyOffset;
- (double)spaceKeyFontSize;
- (double)internationalKeyFontSize;
- (double)dictationKeyFontSize;
- (double)dismissKeyFontSize;
- (BOOL)_displaysAsControlKeyStyle:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })symbolFrameInsets;
- (BOOL)shouldUseRoundCornerForKey:(id)a0;
- (double)controlColumnWidthFactor;
- (BOOL)_anchorControlKeys;
- (struct CGPoint { double x0; double x1; })spaceReturnKeyTextOffset;
- (struct CGPoint { double x0; double x1; })_controlKeyOffset;
- (id)lightKeycapsFontName;

@end
