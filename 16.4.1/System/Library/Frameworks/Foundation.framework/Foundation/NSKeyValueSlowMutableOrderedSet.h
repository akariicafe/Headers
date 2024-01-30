@class NSKeyValueSetter, NSKeyValueGetter;

@interface NSKeyValueSlowMutableOrderedSet : NSKeyValueMutableOrderedSet {
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    BOOL _treatNilValuesLikeEmptyOrderedSets;
    char _padding[3];
}

- (void)_proxyNonGCFinalize;
- (id)objectsAtIndexes:(id)a0;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (void)replaceObjectsAtIndexes:(id)a0 withObjects:(id)a1;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (unsigned long long)count;
- (void)_raiseNilValueExceptionWithSelector:(SEL)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (id)_createNonNilMutableOrderedSetValueWithSelector:(SEL)a0;
- (id)_nonNilOrderedSetValueWithSelector:(SEL)a0;

@end
