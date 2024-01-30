@class NSATSTypesetter, NSString;

@interface NSATSGlyphStorage : CTGlyphStorageInterface {
    struct __CTGlyphStorage { } *_glyphStorage;
    struct __CFArray { } *_masterRuns;
    NSATSTypesetter *_typesetter;
    struct { id x0; id x1; long long x2; long long x3; double x4; double x5; double x6; double x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned int x8 : 24; } x9; } *_runs;
    long long _numRuns;
    long long _runBufferSize;
    struct _NSRange { unsigned long long location; unsigned long long length; } _glyphRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _characterRange;
    long long _bufferSize;
    NSATSGlyphStorage *_parent;
    struct __CFSet { } *_children;
    long long _paraEndElasticCharIndex;
    double _paraEndElasticCharWidth;
    NSString *_textString;
    struct { long long x0; struct { unsigned short x0; struct CGSize { double x0; double x1; } x1; unsigned int x2; long long x3; long long x4; } x1[0]; } *_stack;
    const struct { id x0; id x1; long long x2; long long x3; double x4; double x5; double x6; double x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned int x8 : 24; } x9; } *_lastElasticRun;
    long long _lastElasticRunLocation;
    long long _totalAbsorbedCount;
    struct { unsigned char _hasNonNominalGlyph : 1; unsigned char _hasPositionalStake : 1; unsigned char _hasBidiRun : 1; unsigned char _isEllipsisStorage : 1; unsigned char _hasNonNominalStringIndexes : 1; unsigned char _isUnordered : 1; unsigned char _hasTotalAbsorbedCount : 1; unsigned int _reserved : 25; } _gFlags;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)getCustomAdvance:(struct CGSize { double x0; double x1; } *)a0 forIndex:(long long)a1;
- (void)insertGlyphs:(struct { long long x0; long long x1; })a0;
- (void)setGlyphID:(unsigned short)a0 forIndex:(long long)a1;
- (oneway void)release;
- (void)swapGlyph:(long long)a0 withIndex:(long long)a1;
- (void)dealloc;
- (void)disposeGlyphStack;
- (void)pushGlyph:(long long)a0;
- (void)moveGlyphsTo:(long long)a0 from:(struct { long long x0; long long x1; })a1;
- (struct __CTGlyphStorage { } *)createCopy:(struct { long long x0; long long x1; })a0;
- (void)finalize;
- (void)setProps:(unsigned int)a0 forIndex:(long long)a1;
- (void)setAdvance:(struct CGSize { double x0; double x1; })a0 forIndex:(long long)a1;
- (void)setStringIndex:(long long)a0 forIndex:(long long)a1;
- (void)setAbsorbedCount:(long long)a0 forIndex:(long long)a1;
- (void)initGlyphStack:(long long)a0;
- (void)popGlyph:(long long)a0;

@end
