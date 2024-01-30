@interface EFMutableInt64Set : NSObject <NSCopying, NSMutableCopying> {
    unsigned int _count;
    unsigned int _storageSize;
    unsigned int _cursor;
    long long *_storage;
}

+ (id)indexSetWithIndexesInRange:(struct _EFUInt64Range { unsigned long long x0; unsigned long long x1; })a0;
+ (id)indexSet;

- (unsigned long long)getIndexes:(long long *)a0 maxCount:(unsigned long long)a1 inIndexRange:(struct _EFUInt64Range { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)containsIndex:(long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)commaSeparatedString;
- (id)description;
- (long long)_insertionPositionOfIndex:(long long)a0;
- (void)addIndexes:(id)a0;
- (void)enumerateIndexesUsingBlock:(id /* block */)a0;
- (void)removeAllIndexes;
- (void)removeIndex:(long long)a0;
- (unsigned long long)count;
- (void)intersectIndexes:(id)a0;
- (void)addIndex:(long long)a0;
- (long long)lastIndex;
- (void)_garbageCollectStorageIfNecessary;
- (long long)_positionOfIndex:(long long)a0;
- (long long)firstIndex;
- (long long)indexGreaterThanIndex:(long long)a0;
- (void)removeIndexes:(id)a0;
- (void)_incrementStorageIfNecessaryForCount:(unsigned long long)a0;

@end
