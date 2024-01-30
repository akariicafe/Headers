@class _CDSnapshot;

@interface NSSQLRow : NSPersistentCacheRow <NSCopying> {
    _CDSnapshot *_snapshot;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (unsigned int)newBatchRowAllocation:(id *)a0 count:(unsigned int)a1 forSQLEntity:(id)a2 withOwnedObjectIDs:(id *)a3 andTimestamp:(double)a4;

- (void)setForeignOrderKeySlot:(unsigned int)a0 orderKey:(unsigned int)a1;
- (id)initWithSQLEntity:(id)a0 ownedObjectID:(id)a1 andTimestamp:(double)a2;
- (id)valueForKey:(id)a0;
- (void)setObjectID:(id)a0;
- (void)setOptLock:(long long)a0;
- (id)objectID;
- (unsigned long long)version;
- (id)description;
- (void)setForeignEntityKeySlot:(unsigned int)a0 entityKey:(unsigned int)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const id *)knownKeyValuesPointer;
- (unsigned int)_versionNumber;
- (id)copy;
- (void)dealloc;
- (void)setForeignKeySlot:(unsigned int)a0 int64:(long long)a1;
- (id)newObjectIDForToOne:(id)a0;
- (id)initWithSQLEntity:(id)a0 objectID:(id)a1;
- (id)_snapshot_;

@end
