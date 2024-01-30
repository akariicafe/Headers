@interface NSMutableIndexSet : NSIndexSet {
    void *_reserved;
}

- (void)removeIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (void)_mergeOverlappingRangesStartingAtIndex:(unsigned long long)a0;
- (void)_replaceRangeInArrayAtIndex:(unsigned long long)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_removeAndDecrementBy:(unsigned long long)a0 startingAtIndex:(unsigned long long)a1;
- (void)removeIndexesWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)removeIndexesPassingTest:(id /* block */)a0;
- (void)_insertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inArrayAtIndex:(unsigned long long)a1;
- (void)shiftIndexesStartingAtIndex:(unsigned long long)a0 by:(long long)a1;
- (void)_incrementBy:(unsigned long long)a0 startingAtIndex:(unsigned long long)a1;
- (void)_removeRangeInArrayAtIndex:(unsigned long long)a0;
- (void)_addRangeToArray:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addIndexes:(const unsigned long long *)a0 count:(unsigned long long)a1;
- (void)removeIndexesFromIndexSet:(id)a0;
- (void)addIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_ensureRangeCapacity:(unsigned long long)a0;
- (void)removeIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addIndexesFromIndexSet:(id)a0;
- (void)addIndexes:(id)a0;
- (void)removeAllIndexes;
- (void)removeIndex:(unsigned long long)a0;
- (void)addIndex:(unsigned long long)a0;
- (Class)classForCoder;
- (void)removeIndexes:(id)a0;

@end
