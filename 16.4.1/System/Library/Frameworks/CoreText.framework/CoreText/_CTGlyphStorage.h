@interface _CTGlyphStorage : NSObject {
    long long _count;
    const unsigned short *_glyphs;
    const double *_advanceWidths;
    const struct CGSize { double x0; double x1; } *_advances;
    const unsigned int *_props;
    const long long *_stringIndices;
}

- (void)sync;
- (const struct CGSize { double x0; double x1; } *)allocatedAdvances;
- (void)pushGlyphAtIndex:(long long)a0;
- (void *)refCon;
- (id)copyWithRange:(struct { long long x0; long long x1; })a0;
- (void)popGlyphAtIndex:(long long)a0;
- (void)setAttachmentCount:(long long)a0 atIndex:(long long)a1;
- (BOOL)implementsOrigins;
- (void)disposeGlyphStack;
- (void)swapGlyphsAtIndex:(long long)a0 withIndex:(long long)a1;
- (void)setAdvance:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (struct CGPoint { double x0; double x1; })originAtIndex:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)resetOrigins:(struct { long long x0; long long x1; })a0;
- (void)setStringIndex:(long long)a0 atIndex:(long long)a1;
- (void)insertGlyphsAtRange:(struct { long long x0; long long x1; })a0;
- (void)setGlyph:(unsigned short)a0 atIndex:(long long)a1;
- (void)initGlyphStackWithCapacity:(long long)a0;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0 atIndex:(long long)a1;
- (id)initWithCount:(long long)a0;
- (void)puntStringIndicesInRange:(struct { long long x0; long long x1; })a0 by:(long long)a1;
- (long long)attachmentCountAtIndex:(long long)a0;
- (void)setProps:(unsigned int)a0 atIndex:(long long)a1;
- (void)moveGlyphsFromRange:(struct { long long x0; long long x1; })a0 toIndex:(long long)a1;

@end
