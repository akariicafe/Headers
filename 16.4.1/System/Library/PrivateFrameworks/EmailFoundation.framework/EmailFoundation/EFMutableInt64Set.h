@interface EFMutableInt64Set : NSObject <NSCopying, NSMutableCopying> {
    unsigned int _count;
    unsigned int _storageSize;
    unsigned int _cursor;
    long long *_storage;
}

+ (id)indexSet;
+ (id)indexSetWithIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; })a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (long long)lastIndex;
- (void)intersectIndexes:(id)a0;
- (long long)_insertionPositionOfIndex:(long long)a0;
- (long long)_positionOfIndex:(long long)a0;
- (BOOL)containsIndex:(long long)a0;
- (id)getIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; })a0 maxCount:(unsigned long long)a1;
- (long long)indexGreaterThanIndex:(long long)a0;
- (void)addIndex:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (long long)firstIndex;
- (unsigned long long)getIndexes:(long long *)a0 maxCount:(unsigned long long)a1 inIndexRange:(struct _EFInt64Range { long long x0; unsigned long long x1; } *)a2;
- (void)dealloc;
- (void)enumerateIndexesUsingBlock:(id /* block */)a0;
- (void)removeIndex:(long long)a0;
- (id)commaSeparatedString;
- (void)removeIndexes:(id)a0;
- (void)removeAllIndexes;
- (unsigned long long)_enumerateIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; } *)a0 maxCount:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)description;
- (id)getMaxCountOfIndexes:(unsigned long long)a0;
- (void)_garbageCollectStorageIfNecessary;
- (void)addIndexes:(id)a0;
- (void)_incrementStorageIfNecessaryForCount:(unsigned long long)a0;

@end
