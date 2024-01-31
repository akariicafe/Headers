@class _CDSnapshot;

@interface NSSQLRow : NSPersistentCacheRow <NSCopying> {
    _CDSnapshot *_snapshot;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (unsigned int)newBatchRowAllocation:(id *)a0 count:(unsigned int)a1 forSQLEntity:(id)a2 withOwnedObjectIDs:(id *)a3 andTimestamp:(double)a4;
+ (void)initialize;

- (id)_snapshot_;
- (void)setObjectID:(id)a0;
- (id)objectID;
- (void)dealloc;
- (id)initWithSQLEntity:(id)a0 ownedObjectID:(id)a1 andTimestamp:(double)a2;
- (id)initWithSQLEntity:(id)a0 objectID:(id)a1;
- (void)setForeignKeySlot:(unsigned int)a0 int64:(long long)a1;
- (unsigned long long)version;
- (void)setOptLock:(long long)a0;
- (void)setForeignOrderKeySlot:(unsigned int)a0 orderKey:(unsigned int)a1;
- (void)setForeignEntityKeySlot:(unsigned int)a0 entityKey:(unsigned int)a1;
- (id)copy;
- (id)description;
- (unsigned int)_versionNumber;
- (id)newObjectIDForToOne:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)valueForKey:(id)a0;
- (const id *)knownKeyValuesPointer;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
