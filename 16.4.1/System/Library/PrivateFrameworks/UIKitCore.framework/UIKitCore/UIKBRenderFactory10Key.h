@interface UIKBRenderFactory10Key : UIKBRenderFactory

+ (BOOL)_isActiveKeyplaneSwitchKey:(id)a0;

- (long long)assetIdiom;
- (double)symbolImageControlKeyFontSize;
- (double)keyCornerRadius;
- (void)populateFlickGuide:(id)a0 forKey:(id)a1 from:(id)a2;
- (struct CGPoint { double x0; double x1; })numberPadKeySecondaryTextOffset;
- (id)_preferredScriptFontForRendering:(int)a0;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (struct CGPoint { double x0; double x1; })abcKeyTextOffset;
- (id)activeControlKeyTraits;
- (double)capitalAbcSymbolSize;
- (id)controlKeyBackgroundColorName;
- (id)controlKeyDividerColorName;
- (id)controlKeyForegroundColorName;
- (id)controlKeyTraits;
- (id)defaultKeyDividerColorName;
- (struct CGPoint { double x0; double x1; })dictationKeyTextOffset;
- (id)displayContentsForKey:(id)a0;
- (unsigned long long)edgesAdjustedForTranslucentGapsForGeometry:(id)a0 key:(id)a1 onKeyplane:(id)a2;
- (struct CGPoint { double x0; double x1; })globeKeyTextOffset;
- (double)interkeyGapsCenterXOfKeyplaneFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)lightHighQualityEnabledBlendForm;
- (struct CGPoint { double x0; double x1; })longVowelSignKeyTextOffset;
- (void)modifyTraitsForDetachedInputSwitcher:(id)a0 withKey:(id)a1;
- (double)numberPadKeyPrimarySymbolSize;
- (struct CGPoint { double x0; double x1; })numberPadKeyPrimaryTextOffset;
- (struct CGPoint { double x0; double x1; })numberPadVBarSecondaryTextOffset;
- (unsigned long long)roundCornersForKey:(id)a0 onKeyplane:(id)a1;
- (void)setupColumnLayoutSegmentsWithControlWidth:(double)a0;
- (id)shiftedControlKeyTraits;
- (id)shiftedWhiteControlKeyTraits;
- (BOOL)shouldShowBottomRowEdge;
- (BOOL)shouldShowTopRowEdge;
- (struct CGPoint { double x0; double x1; })symbolImageControlKeyOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })topEdgeAdjustmentInsets;
- (BOOL)useRoundCorner;

@end
