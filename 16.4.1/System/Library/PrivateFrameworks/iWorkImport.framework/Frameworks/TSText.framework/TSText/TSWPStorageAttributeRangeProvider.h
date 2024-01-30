@interface TSWPStorageAttributeRangeProvider : TSWPStorageRangeProvider {
    struct TSWPAttributeEnumerator { void /* function */ **x0; id x1; unsigned long long x2; unsigned long long x3; struct TSWPAttributeArray *x4; BOOL x5; unsigned long long x6; BOOL x7; struct TSWPAttributeRecord { unsigned long long x0; union { id x0; struct TSWPParagraphData { union { struct { unsigned int x0; } x0; struct { unsigned short x0; unsigned short x1; } x1; struct { unsigned short x0; unsigned short x1; } x2; struct { int x0; } x3; struct { unsigned int x0; } x4; struct { unsigned short x0; unsigned short x1; } x5; } x0; } x1; } x1; } x8; } *_enumerator;
}

- (void)dealloc;
- (id)initWithStorage:(id)a0 kind:(unsigned long long)a1;
- (void)nextRange;

@end
