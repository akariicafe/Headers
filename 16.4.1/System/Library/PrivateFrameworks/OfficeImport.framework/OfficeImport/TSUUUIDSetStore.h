@class NSLock, NSMutableDictionary, TSUSparseArray;

@interface TSUUUIDSetStore : NSObject <NSCopying> {
    NSLock *_lock;
    TSUSparseArray *_uuidSetForIndex;
    NSMutableDictionary *_indexesUsingUuid;
    unsigned int _highestIndex;
}

@property (readonly) unsigned long long count;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (unsigned int)addSet:(id)a0;
- (unsigned int)addSetForUuids:(const void *)a0;
- (void)foreachUuidSet:(id /* block */)a0;
- (void)_foreachUuidSet:(id /* block */)a0;
- (unsigned int)addSetForSingleUuid:(const void *)a0;
- (BOOL)containsUuidSet:(id)a0;
- (unsigned int)indexOfSet:(id)a0;
- (id)indexesUsingAnyOfUuids:(const void *)a0;
- (id)indexesUsingUuid:(const void *)a0;
- (void)p_addSet:(id)a0 atIndex:(unsigned int)a1;
- (void)removeSetAtIndex:(unsigned int)a0;
- (id)setForIndex:(unsigned int)a0;
- (id)subsetStoreForIndexes:(id)a0;

@end
