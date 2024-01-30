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

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithString:(id)a0;
- (id)copyCachedInstance;
- (id)string;
- (unsigned long long)length;
- (void)cache;
- (id)initWithAttributedString:(id)a0;
- (void)finalize;
- (BOOL)_baselineMode;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)_isStringDrawingTextStorage;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasColorGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
