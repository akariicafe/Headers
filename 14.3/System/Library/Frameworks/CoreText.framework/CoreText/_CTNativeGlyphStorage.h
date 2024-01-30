@interface _CTNativeGlyphStorage : _CTGlyphStorage {
    const long long *_attachCounts;
    const struct CGPoint { double x0; double x1; } *_origins;
    unsigned long long _retainCount;
    struct GlyphStack { long long x0; long long x1; struct GlyphStackEntry { unsigned short x0; struct CGSize { double x0; double x1; } x1; unsigned int x2; long long x3; long long x4; struct CGPoint { double x0; double x1; } x5; } x2[1]; } *_stack;
    long long _capacity;
    void *_preallocatedStorage;
}

+ (id)newWithCount:(long long)a0;

- (void)setProps:(unsigned int)a0 atIndex:(long long)a1;
- (id)initWithCount:(long long)a0;
- (void)puntStringIndicesInRange:(struct { long long x0; long long x1; })a0 by:(long long)a1;
- (oneway void)release;
- (void)dealloc;
- (void)swapGlyphsAtIndex:(long long)a0 withIndex:(long long)a1;
- (void)setGlyph:(unsigned short)a0 atIndex:(long long)a1;
- (unsigned long long)retainCount;
- (void)pushGlyphAtIndex:(long long)a0;
- (id)copyWithRange:(struct { long long x0; long long x1; })a0;
- (BOOL)implementsOrigins;
- (struct CGPoint { double x0; double x1; })originAtIndex:(long long)a0;
- (void)setAdvance:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)popGlyphAtIndex:(long long)a0;
- (id)retain;
- (void)initGlyphStackWithCapacity:(long long)a0;
- (long long)attachmentCountAtIndex:(long long)a0;
- (void)setAttachmentCount:(long long)a0 atIndex:(long long)a1;
- (void)moveGlyphsFromRange:(struct { long long x0; long long x1; })a0 toIndex:(long long)a1;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)insertGlyphsAtRange:(struct { long long x0; long long x1; })a0;
- (void)setStringIndex:(long long)a0 atIndex:(long long)a1;

@end
