@class CTGlyphStorageInterface;

@interface _CTMutableGlyphStorage : _CTGlyphStorage <_CTGlyphStorageAdvanceLookup> {
    CTGlyphStorageInterface *_interface;
}

@property (readonly, nonatomic) BOOL implementsOrigins;
@property (readonly, nonatomic) BOOL hasCustomAdvances;
@property (readonly, nonatomic) BOOL implementsCustomAdvancesForIndexes;

- (void)sync;
- (id)initWithInterface:(id)a0;
- (void)pushGlyphAtIndex:(long long)a0;
- (void *)refCon;
- (id)copyWithRange:(struct { long long x0; long long x1; })a0;
- (void)popGlyphAtIndex:(long long)a0;
- (void)setAttachmentCount:(long long)a0 atIndex:(long long)a1;
- (void)disposeGlyphStack;
- (void)swapGlyphsAtIndex:(long long)a0 withIndex:(long long)a1;
- (void)setAdvance:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (struct CGPoint { double x0; double x1; })originAtIndex:(long long)a0;
- (void)resetOrigins:(struct { long long x0; long long x1; })a0;
- (void)setStringIndex:(long long)a0 atIndex:(long long)a1;
- (void)getCustomAdvances:(struct CGSize { double x0; double x1; } *)a0 forIndexes:(const long long *)a1 count:(long long)a2;
- (struct CGSize { double x0; double x1; })customAdvanceForIndex:(long long)a0;
- (void)insertGlyphsAtRange:(struct { long long x0; long long x1; })a0;
- (void)setGlyph:(unsigned short)a0 atIndex:(long long)a1;
- (void)initGlyphStackWithCapacity:(long long)a0;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)puntStringIndicesInRange:(struct { long long x0; long long x1; })a0 by:(long long)a1;
- (long long)attachmentCountAtIndex:(long long)a0;
- (void)setProps:(unsigned int)a0 atIndex:(long long)a1;
- (id)initWithInterface:(id)a0 options:(unsigned int)a1;
- (void)moveGlyphsFromRange:(struct { long long x0; long long x1; })a0 toIndex:(long long)a1;

@end
