@interface UIKBRenderFactoryNumberPad : UIKBRenderFactory

- (double)symbolImageControlKeyFontSize;
- (void)_customizeSymbolStyle:(id)a0 secondaryStyle:(id)a1 forKey:(id)a2 contents:(id)a3;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (struct CGPoint { double x0; double x1; })centerColumnLetterOffset;
- (struct CGPoint { double x0; double x1; })centerColumnNumberOffset;
- (id)controlKeyBackgroundColorName;
- (id)controlKeyDividerColorName;
- (id)controlKeyForegroundColorName;
- (id)defaultKeyDividerColorName;
- (struct CGPoint { double x0; double x1; })deleteGlyphOffset;
- (struct CGPoint { double x0; double x1; })dictationGlyphOffset;
- (struct CGPoint { double x0; double x1; })leftColumnLetterOffset;
- (struct CGPoint { double x0; double x1; })leftColumnNumberOffset;
- (double)letterFontSize;
- (long long)lightHighQualityEnabledBlendForm;
- (struct CGPoint { double x0; double x1; })loneZeroOffset;
- (double)numberFontSize;
- (struct CGPoint { double x0; double x1; })rightColumnLetterOffset;
- (struct CGPoint { double x0; double x1; })rightColumnNumberOffset;
- (void)setupLayoutSegments;
- (struct CGPoint { double x0; double x1; })specialSymbolOffset;

@end
