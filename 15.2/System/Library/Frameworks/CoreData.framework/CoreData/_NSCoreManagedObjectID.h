@interface _NSCoreManagedObjectID : NSManagedObjectID

+ (void)initialize;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
+ (id)_retain_1;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (char *)generatedNameSuffix;
+ (void)_setStoreInfo1:(id)a0;
+ (id)alloc;
+ (void)_storeDeallocated;
+ (id)retain;
+ (long long)version;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_release_1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (BOOL)_usesTaggedPointers;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (void)release;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (id)_storeInfo1;

- (id)entity;
- (BOOL)_isPersistentStoreAlive;
- (id)entityName;
- (id)URIRepresentation;
- (id)_storeIdentifier;
- (BOOL)isTemporaryID;
- (unsigned long long)retainCount;
- (id)retain;
- (id)persistentStore;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (oneway void)release;
- (id)_storeInfo1;

@end
