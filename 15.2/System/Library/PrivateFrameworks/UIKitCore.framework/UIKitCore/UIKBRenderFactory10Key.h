@interface UIKBRenderFactory10Key : UIKBRenderFactory

+ (BOOL)_isActiveKeyplaneSwitchKey:(id)a0;

- (long long)assetIdiom;
- (id)displayContentsForKey:(id)a0;
- (double)keyCornerRadius;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (id)controlKeyBackgroundColorName;
- (long long)lightHighQualityEnabledBlendForm;
- (void)modifyTraitsForDetachedInputSwitcher:(id)a0 withKey:(id)a1;
- (id)controlKeyForegroundColorName;
- (id)defaultKeyDividerColorName;
- (id)controlKeyDividerColorName;
- (double)symbolImageControlKeyFontSize;
- (struct CGPoint { double x0; double x1; })symbolImageControlKeyOffset;
- (id)shiftedControlKeyTraits;
- (id)controlKeyTraits;
- (id)activeControlKeyTraits;
- (BOOL)shouldShowBottomRowEdge;
- (BOOL)useRoundCorner;
- (BOOL)shouldShowTopRowEdge;
- (double)interkeyGapsCenterXOfKeyplaneFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })topEdgeAdjustmentInsets;
- (unsigned long long)roundCornersForKey:(id)a0 onKeyplane:(id)a1;
- (unsigned long long)edgesAdjustedForTranslucentGapsForGeometry:(id)a0 key:(id)a1 onKeyplane:(id)a2;
- (double)numberPadKeyPrimarySymbolSize;
- (struct CGPoint { double x0; double x1; })numberPadKeyPrimaryTextOffset;
- (struct CGPoint { double x0; double x1; })numberPadVBarSecondaryTextOffset;
- (struct CGPoint { double x0; double x1; })longVowelSignKeyTextOffset;
- (struct CGPoint { double x0; double x1; })numberPadKeySecondaryTextOffset;
- (struct CGPoint { double x0; double x1; })dictationKeyTextOffset;
- (struct CGPoint { double x0; double x1; })globeKeyTextOffset;
- (double)capitalAbcSymbolSize;
- (struct CGPoint { double x0; double x1; })abcKeyTextOffset;
- (id)_preferredScriptFontForRendering:(int)a0;
- (id)shiftedWhiteControlKeyTraits;
- (void)setupColumnLayoutSegmentsWithControlWidth:(double)a0;

@end
