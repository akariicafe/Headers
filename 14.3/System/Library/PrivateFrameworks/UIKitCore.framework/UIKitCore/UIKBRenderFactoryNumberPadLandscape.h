@interface UIKBRenderFactoryNumberPadLandscape : UIKBRenderFactoryNumberPad

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
- (void)_customizeSymbolStyle:(id)a0 secondaryStyle:(id)a1 forKey:(id)a2 contents:(id)a3;

@end
