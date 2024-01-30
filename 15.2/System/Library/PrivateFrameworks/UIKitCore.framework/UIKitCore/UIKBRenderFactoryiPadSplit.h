@interface UIKBRenderFactoryiPadSplit : UIKBRenderFactoryiPad

- (void)_customizeTraits:(id)a0 forPopupForKey:(id)a1 withRenderingContext:(id)a2 keycapsFontName:(id)a3;
- (id)variantGeometriesForGeometry:(id)a0 variantCount:(unsigned long long)a1 rowLimit:(long long)a2 annotationIndex:(unsigned long long)a3;
- (struct CGPoint { double x0; double x1; })internationalKeyOffset;
- (id)backgroundTraitsForKeyplane:(id)a0;
- (double)keyCornerRadius;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (id)shiftKeyImageName;
- (id)deleteKeyImageName;
- (id)deleteOnKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (double)skinnyKeyThreshold;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (id)dismissKeyImageName;
- (id)dictationKeyImageName;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (BOOL)supportsInputTraits:(id)a0 forKeyplane:(id)a1;
- (struct CGPoint { double x0; double x1; })shiftKeyOffset;
- (struct CGPoint { double x0; double x1; })dismissKeyOffset;
- (double)keyInsetBottom;
- (double)variantAnnotationTextFontSize;
- (void)_customizeSymbolStyle:(id)a0 forKey:(id)a1 contents:(id)a2;
- (void)_customizeGeometry:(id)a0 forKey:(id)a1 contents:(id)a2;
- (double)_row4ControlSegmentWidthLeft;
- (double)symbolFrameInset;
- (struct CGPoint { double x0; double x1; })variantAnnotationTextOffset;
- (double)defaultPathWeight;
- (struct CGPoint { double x0; double x1; })deleteKeyOffset;

@end
