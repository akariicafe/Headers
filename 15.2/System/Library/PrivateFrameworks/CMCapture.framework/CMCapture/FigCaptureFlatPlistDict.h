@class FigCaptureFlatPlist;

@interface FigCaptureFlatPlistDict : NSDictionary {
    FigCaptureFlatPlist *_flatPlist;
    const struct { void *x0; void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned char x6; unsigned char x7; } *_bplist;
    unsigned long long _offset;
    unsigned long long _count;
}

- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithFlatPlist:(id)a0 offset:(unsigned long long)a1;

@end
