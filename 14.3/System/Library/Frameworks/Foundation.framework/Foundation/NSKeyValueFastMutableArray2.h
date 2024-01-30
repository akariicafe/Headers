@class NSKeyValueGetter;

@interface NSKeyValueFastMutableArray2 : NSKeyValueFastMutableArray {
    NSKeyValueGetter *_valueGetter;
}

- (id)objectsAtIndexes:(id)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_nonNilArrayValueWithSelector:(SEL)a0;
- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;

@end
