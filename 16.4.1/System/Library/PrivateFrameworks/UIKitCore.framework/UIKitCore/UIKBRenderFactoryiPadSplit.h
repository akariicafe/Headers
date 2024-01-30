@interface UIKBRenderFactoryiPadSplit : UIKBRenderFactoryiPad

- (double)symbolImageControlKeyFontSize;
- (struct CGPoint { double x0; double x1; })variantAnnotationTextOffset;
- (struct CGPoint { double x0; double x1; })internationalKeyOffset;
- (struct CGPoint { double x0; double x1; })deleteKeyOffset;
- (double)keyCornerRadius;
- (void)_customizeGeometry:(id)a0 forKey:(id)a1 contents:(id)a2;
- (void)_customizeSymbolStyle:(id)a0 forKey:(id)a1 contents:(id)a2;
- (void)_customizeTraits:(id)a0 forPopupForKey:(id)a1 withRenderingContext:(id)a2 keycapsFontName:(id)a3;
- (double)_row4ControlSegmentWidthLeft;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (id)backgroundTraitsForKeyplane:(id)a0;
- (double)defaultPathWeight;
- (struct CGPoint { double x0; double x1; })dismissKeyOffset;
- (double)dynamicBottomRowMultiplier;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })dynamicInsets;
- (double)keyInsetBottom;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (struct CGPoint { double x0; double x1; })shiftKeyOffset;
- (double)skinnyKeyThreshold;
- (BOOL)supportsInputTraits:(id)a0 forKeyplane:(id)a1;
- (double)symbolFrameInset;
- (double)variantAnnotationTextFontSize;
- (id)variantGeometriesForGeometry:(id)a0 variantCount:(unsigned long long)a1 rowLimit:(long long)a2 annotationIndex:(unsigned long long)a3;

@end
