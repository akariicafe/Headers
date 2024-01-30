@interface __NSArrayReversed : NSArray {
    id _array;
    unsigned long long _cnt;
}

- (void)dealloc;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)count;
- (id)initWithArray:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;

@end
