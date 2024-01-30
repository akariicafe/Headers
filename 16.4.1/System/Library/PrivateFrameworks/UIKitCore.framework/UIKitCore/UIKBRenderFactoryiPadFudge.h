@interface UIKBRenderFactoryiPadFudge : UIKBRenderFactoryiPad

- (double)symbolImageControlKeyFontSize;
- (id)lightKeycapsFontName;
- (struct CGPoint { double x0; double x1; })dictationKeyOffset;
- (struct CGPoint { double x0; double x1; })internationalKeyOffset;
- (unsigned long long)_isFullHeightKeyFor:(id)a0 onKeyplane:(id)a1;
- (double)moreKeyFontSize;
- (BOOL)iPadFudgeLayout;
- (void)_customizeGeometry:(id)a0 forKey:(id)a1 contents:(id)a2;
- (double)_row4ControlSegmentWidthLeft;
- (double)_row4ControlSegmentWidthRight;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (double)controlKeyFontSize;
- (struct CGSize { double x0; double x1; })defaultVariantGeometrySize;
- (double)deleteKeyFontSize;
- (struct CGPoint { double x0; double x1; })deleteKeyOffset:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })dismissKeyOffset;
- (id)displayContentsForKey:(id)a0;
- (double)dualStringKeyBottomFontSize:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })dualStringKeyBottomTextOffset:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })dualStringKeyBottomTextOffset:(id)a0 keyplane:(id)a1;
- (double)dualStringKeyTopFontSize:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })dualStringKeyTopTextOffset:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })dualStringKeyTopTextOffset:(id)a0 keyplane:(id)a1;
- (struct CGPoint { double x0; double x1; })iPadFudgeControlKeyOffset;
- (id)messagesWriteboardKeyImageName;
- (struct CGPoint { double x0; double x1; })moreKeyOffset;
- (double)spaceKeyFontSize;
- (double)stringKeyFontSize:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })stringKeyOffset:(unsigned long long)a0;
- (BOOL)supportsInputTraits:(id)a0 forKeyplane:(id)a1;
- (struct CGPoint { double x0; double x1; })symbolImageControlKeyOffset;

@end
