@interface MFSparseMutable64IndexSet : NSObject <NSCopying, NSMutableCopying> {
    unsigned int _count;
    unsigned int _storageSize;
    unsigned int _cursor;
    unsigned long long *_storage;
}

+ (id)indexSet;

- (unsigned long long)indexGreaterThanIndex:(unsigned long long)a0;
- (unsigned long long)_insertionPositionOfIndex:(unsigned long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)_positionOfIndex:(unsigned long long)a0;
- (BOOL)containsIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (void)_garbageCollectStorageIfNecessary;
- (void)addIndex:(unsigned long long)a0;
- (void)_incrementStorageIfNecessaryForCount:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)firstIndex;
- (void)addIndexes:(id)a0;
- (void)enumerateIndexesWithBlock:(id /* block */)a0;

@end
