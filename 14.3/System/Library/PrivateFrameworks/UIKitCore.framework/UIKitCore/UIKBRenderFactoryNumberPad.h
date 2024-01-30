@interface UIKBRenderFactoryNumberPad : UIKBRenderFactory

- (void)setupLayoutSegments;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (id)controlKeyBackgroundColorName;
- (long long)lightHighQualityEnabledBlendForm;
- (id)controlKeyForegroundColorName;
- (struct CGPoint { double x0; double x1; })deleteGlyphOffset;
- (struct CGPoint { double x0; double x1; })dictationGlyphOffset;
- (struct CGPoint { double x0; double x1; })specialSymbolOffset;
- (struct CGPoint { double x0; double x1; })loneZeroOffset;
- (double)numberFontSize;
- (double)letterFontSize;
- (struct CGPoint { double x0; double x1; })leftColumnNumberOffset;
- (struct CGPoint { double x0; double x1; })leftColumnLetterOffset;
- (struct CGPoint { double x0; double x1; })rightColumnNumberOffset;
- (struct CGPoint { double x0; double x1; })rightColumnLetterOffset;
- (struct CGPoint { double x0; double x1; })centerColumnNumberOffset;
- (struct CGPoint { double x0; double x1; })centerColumnLetterOffset;
- (id)defaultKeyDividerColorName;
- (void)_customizeSymbolStyle:(id)a0 secondaryStyle:(id)a1 forKey:(id)a2 contents:(id)a3;
- (id)controlKeyDividerColorName;

@end
