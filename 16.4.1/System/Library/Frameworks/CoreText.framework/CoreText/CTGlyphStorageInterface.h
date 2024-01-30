@interface CTGlyphStorageInterface : NSObject {
    long long _glyphCount;
    unsigned short *_glyphs;
    struct CGSize { double x0; double x1; } *_advances;
    unsigned int *_props;
    long long *_stringIndexes;
    long long *_absorbedCounts;
    struct CGPoint { double x0; double x1; } *_origins;
}

- (void)getCustomAdvance:(struct CGSize { double x0; double x1; } *)a0 forIndex:(long long)a1;
- (void)setAbsorbedCount:(long long)a0 forIndex:(long long)a1;
- (struct __CTGlyphStorage { } *)createCopy:(struct { long long x0; long long x1; })a0;
- (void)disposeGlyphStack;
- (void)popGlyph:(long long)a0;
- (void)setStringIndex:(long long)a0 forIndex:(long long)a1;
- (void)initGlyphStack:(long long)a0;
- (void)setProps:(unsigned int)a0 forIndex:(long long)a1;
- (void)setGlyphID:(unsigned short)a0 forIndex:(long long)a1;
- (void)pushGlyph:(long long)a0;
- (void)moveGlyphsTo:(long long)a0 from:(struct { long long x0; long long x1; })a1;
- (void)insertGlyphs:(struct { long long x0; long long x1; })a0;
- (void)swapGlyph:(long long)a0 withIndex:(long long)a1;
- (void)setAdvance:(struct CGSize { double x0; double x1; })a0 forIndex:(long long)a1;

@end
