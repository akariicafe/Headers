@interface UIKBRenderFactory10Key_Round : UIKBRenderFactory10Key

- (void)_customizeTraits:(id)a0 forPopupForKey:(id)a1 withRenderingContext:(id)a2 keycapsFontName:(id)a3;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (id)controlKeyBackgroundColorName;
- (id)defaultKeyShadowColorName;
- (long long)lightHighQualityEnabledBlendForm;
- (id)controlKeyShadowColorName;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })wideShadowPaddleInsets;
- (id)shiftedControlKeyTraits;
- (id)shiftLockControlKeyTraits;
- (id)controlKeyTraits;
- (id)activeControlKeyTraits;
- (BOOL)useRoundCorner;
- (unsigned long long)roundCornersForKey:(id)a0 onKeyplane:(id)a1;
- (unsigned long long)edgesWithInsetsForKey:(id)a0 onKeyplane:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })symbolFrameInsets;
- (BOOL)shouldUseRoundCornerForKey:(id)a0;
- (void)_customizeGeometry:(id)a0 forKey:(id)a1 contents:(id)a2 onKeyplane:(id)a3;

@end
