@class NSAttributeDictionary;

@interface _NSCachedAttributedString : NSMutableAttributedString {
    id _contents;
    NSAttributeDictionary *_baseAttributes;
    long long _length;
    unsigned long long _hashValue;
    struct { id x0; long long x1; } *_runs;
    long long _numRuns;
    long long _allocedRunsSize;
    long long _numHits;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (unsigned long long)length;
- (void)cache;
- (BOOL)_isStringDrawingTextStorage;
- (id)copyCachedInstance;
- (id)init;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_baselineMode;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (id)initWithAttributedString:(id)a0;
- (void)dealloc;
- (BOOL)_tryRetain;
- (id)initWithString:(id)a0;
- (id)string;
- (unsigned long long)hash;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)hasColorGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isEqual:(id)a0;
- (void)finalize;

@end
