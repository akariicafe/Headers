@interface UIKBRenderFactory50On_Portrait : UIKBRenderFactory10Key_Round

- (void)_customizeTraits:(id)a0 forPopupForKey:(id)a1 withRenderingContext:(id)a2 keycapsFontName:(id)a3;
- (double)keyCornerRadius;
- (void)setupLayoutSegments;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (id)messagesWriteboardKeyImageName;
- (id)thinKeycapsFontName;
- (double)deleteKeyFontSize;
- (double)returnKeyFontSize;
- (double)spaceKeyFontSize;
- (BOOL)shouldShowBottomRowEdge;
- (BOOL)shouldShowTopRowEdge;
- (unsigned long long)roundCornersForKey:(id)a0 onKeyplane:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })symbolFrameInsets;
- (unsigned long long)edgesWithInsetsForKey:(id)a0 onKeyplane:(id)a1;
- (double)controlColumnWidthFactor;
- (double)keyplaneSwitchKeyFontSize;
- (id)lightKeycapsFontName;

@end
