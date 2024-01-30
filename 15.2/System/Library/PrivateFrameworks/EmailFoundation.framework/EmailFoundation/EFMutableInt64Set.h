@interface EFMutableInt64Set : NSObject <NSCopying, NSMutableCopying> {
    unsigned int _count;
    unsigned int _storageSize;
    unsigned int _cursor;
    long long *_storage;
}

+ (id)indexSetWithIndexesInRange:(struct _EFUInt64Range { unsigned long long x0; unsigned long long x1; })a0;
+ (id)indexSet;

- (long long)indexGreaterThanIndex:(long long)a0;
- (id)commaSeparatedString;
- (void)enumerateIndexesUsingBlock:(id /* block */)a0;
- (long long)_insertionPositionOfIndex:(long long)a0;
- (void)removeAllIndexes;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (long long)_positionOfIndex:(long long)a0;
- (unsigned long long)getIndexes:(long long *)a0 maxCount:(unsigned long long)a1 inIndexRange:(struct _EFUInt64Range { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)removeIndexes:(id)a0;
- (void)intersectIndexes:(id)a0;
- (long long)lastIndex;
- (BOOL)containsIndex:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeIndex:(long long)a0;
- (unsigned long long)count;
- (void)_garbageCollectStorageIfNecessary;
- (void)addIndex:(long long)a0;
- (void)_incrementStorageIfNecessaryForCount:(unsigned long long)a0;
- (void)dealloc;
- (long long)firstIndex;
- (void)addIndexes:(id)a0;

@end
