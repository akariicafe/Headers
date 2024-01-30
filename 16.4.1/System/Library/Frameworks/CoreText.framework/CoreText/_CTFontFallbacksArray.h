@class NSMutableArray;

@interface _CTFontFallbacksArray : NSArray {
    struct TUnfairLock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fLock; } _lock;
    const void *_baseFont;
    const struct TTraitsValues { unsigned int x0; double x1; double x2; double x3; } *_refTraits;
    unsigned long long _count;
    NSMutableArray *_cascade;
    NSMutableArray *_fallbacks;
    unsigned long long _hash;
    int _uiUse;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id).cxx_construct;
- (unsigned long long)count;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
