@class _CDSnapshot;

@interface NSSQLRow : NSPersistentCacheRow {
    _CDSnapshot *_snapshot;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)allocForSQLEntity:(id)a0;
+ (unsigned int)newBatchRowAllocation:(id *)a0 count:(unsigned int)a1 forSQLEntity:(id)a2 withOwnedObjectIDs:(id *)a3 andTimestamp:(double)a4;

- (const id *)knownKeyValuesPointer;
- (unsigned int)sqlEntityID;
- (struct __CFBitVector { } *)newUpdateMaskForConstrainedValues;
- (long long)pk64;
- (id)objectID;
- (long long)optLock;
- (long long)foreignKeyForSlot:(unsigned int)a0;
- (void)setForeignKeySlot:(unsigned int)a0 int64:(long long)a1;
- (void)dealloc;
- (unsigned int)foreignOrderKeyForSlot:(unsigned int)a0;
- (id)valueForKey:(id)a0;
- (void)setObjectID:(id)a0;
- (id)copy;
- (void)_validateToOnes;
- (id)initWithSQLEntity:(id)a0 objectID:(id)a1;
- (id)description;
- (unsigned int)foreignEntityKeyForSlot:(unsigned int)a0;
- (void)setForeignOrderKeySlot:(unsigned int)a0 orderKey:(unsigned int)a1;
- (unsigned long long)version;
- (void)setOptLock:(long long)a0;
- (unsigned int)_versionNumber;
- (BOOL)isEqual:(id)a0;
- (struct __CFBitVector { } *)newUpdateMaskFrom:(id)a0;
- (void)setForeignEntityKeySlot:(unsigned int)a0 entityKey:(unsigned int)a1;
- (id)sqlEntity;
- (id)attributeValueForSlot:(unsigned int)a0;
- (struct __CFBitVector { } *)newColumnMaskFrom:(id)a0 columnInclusionOptions:(unsigned long long)a1;
- (BOOL)hasUniqueConstraintDiffFrom:(id)a0;
- (id)initWithSQLEntity:(id)a0 ownedObjectID:(id)a1 andTimestamp:(double)a2;
- (struct __CFBitVector { } *)newUpdateMaskWithChangedConstraintsFrom:(id)a0;
- (id)_snapshot_;
- (id)newObjectIDForToOne:(id)a0;

@end
