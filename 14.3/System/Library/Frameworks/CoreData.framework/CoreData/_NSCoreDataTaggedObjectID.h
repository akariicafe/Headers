@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (void)_setStoreInfo1:(id)a0;
+ (id)alloc;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (BOOL)_usesTaggedPointers;
+ (id)_storeInfo1;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (void)_storeDeallocated;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;

- (BOOL)_isPersistentStoreAlive;
- (id)persistentStore;
- (id)entityName;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)copy;
- (id)initWithPK64:(long long)a0;
- (unsigned long long)hash;
- (id)entity;
- (id)_storeIdentifier;
- (id)_storeInfo1;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (long long)_referenceData64;
- (id)_retainedURIString;
- (BOOL)isTemporaryID;

@end
