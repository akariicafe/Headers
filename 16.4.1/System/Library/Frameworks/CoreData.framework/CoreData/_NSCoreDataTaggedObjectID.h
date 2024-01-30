@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID

+ (void)initialize;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)_usesTaggedPointers;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (void)_storeDeallocated;
+ (id)_storeInfo1;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (void)_setStoreInfo1:(id)a0;

- (id)retain;
- (id)initWithObject:(id)a0;
- (BOOL)_isPersistentStoreAlive;
- (id)entityName;
- (id)entity;
- (long long)_referenceData64;
- (oneway void)release;
- (id)_storeIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPK64:(long long)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)_storeInfo1;
- (id)persistentStore;
- (unsigned long long)hash;
- (id)copy;
- (BOOL)isTemporaryID;
- (id)_retainedURIString;
- (unsigned long long)retainCount;

@end
