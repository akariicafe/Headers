@class NSKeyValueGetter;

@interface NSKeyValueFastMutableOrderedSet2 : NSKeyValueFastMutableOrderedSet {
    NSKeyValueGetter *_valueGetter;
}

- (void)_proxyNonGCFinalize;
- (id)objectsAtIndexes:(id)a0;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (unsigned long long)indexOfObject:(id)a0;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_nonNilOrderedSetValueWithSelector:(SEL)a0;

@end
