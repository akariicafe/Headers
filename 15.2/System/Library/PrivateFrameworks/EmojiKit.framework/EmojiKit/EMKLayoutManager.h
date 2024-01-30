@class UIColor, NSArray, EMKTextEnumerator, EMKGlyphRippler, NSMutableData, NSMutableAttributedString;

@interface EMKLayoutManager : NSLayoutManager {
    NSMutableAttributedString *_attributes;
    EMKGlyphRippler *_rippler;
    UIColor *_currentColor;
    double _currentScale;
    struct CGSize { double width; double height; } _currentOffset;
    UIColor *_currentShadowColor;
    NSArray *_emojiConversionLanguages;
    EMKTextEnumerator *_enumerator;
    NSMutableData *_glyphIndexTable;
    BOOL _emojiConversionEnabled;
    BOOL _emojiConversionActive;
    BOOL _darkModeEnabled;
}

@property (getter=isEmojiConversionEnabled) BOOL emojiConversionEnabled;

- (void)showCGGlyphs:(const unsigned short *)a0 positions:(const struct CGPoint { double x0; double x1; } *)a1 count:(unsigned long long)a2 font:(id)a3 matrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 attributes:(id)a5 inContext:(struct CGContext { } *)a6;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)processEditingForTextStorage:(id)a0 edited:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3 invalidatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (void).cxx_destruct;
- (id)init;
- (void)setDarkModeEnabled:(BOOL)a0;
- (id)attributes;
- (void)setPreFrames:(unsigned long long)a0;
- (void)setPostFrames:(unsigned long long)a0;
- (void)setDelayFrames:(unsigned long long)a0;
- (BOOL)convertGlyphIndex:(unsigned long long)a0 toAttributeRelativeGlyphIndex:(unsigned long long *)a1 numberOfAttributedGlyphs:(unsigned long long *)a2;
- (BOOL)isDarkModeEnabled;
- (void)startOrStopTimer;
- (void)drawAttributedGlyphsForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)flushGlyphIndexTable;
- (BOOL)isEmojiAnimationActive;
- (BOOL)isEmojiConversionActive;
- (void)setEmojiConversionActive:(BOOL)a0;
- (id)emojiConversionLanguages;
- (void)setEmojiConversionLanguages:(id)a0;

@end
