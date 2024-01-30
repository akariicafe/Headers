@interface UIKBRenderFactory10Key_Round : UIKBRenderFactory10Key

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })wideShadowPaddleInsets;
- (void)_customizeGeometry:(id)a0 forKey:(id)a1 contents:(id)a2 onKeyplane:(id)a3;
- (void)_customizeTraits:(id)a0 forPopupForKey:(id)a1 withRenderingContext:(id)a2 keycapsFontName:(id)a3;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (id)activeControlKeyTraits;
- (id)controlKeyBackgroundColorName;
- (id)controlKeyShadowColorName;
- (id)controlKeyTraits;
- (id)defaultKeyShadowColorName;
- (unsigned long long)edgesWithInsetsForKey:(id)a0 onKeyplane:(id)a1;
- (long long)lightHighQualityEnabledBlendForm;
- (unsigned long long)roundCornersForKey:(id)a0 onKeyplane:(id)a1;
- (id)shiftLockControlKeyTraits;
- (id)shiftedControlKeyTraits;
- (BOOL)shouldUseRoundCornerForKey:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })symbolFrameInsets;
- (BOOL)useRoundCorner;

@end
