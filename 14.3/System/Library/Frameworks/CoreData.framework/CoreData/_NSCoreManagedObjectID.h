@interface _NSCoreManagedObjectID : NSManagedObjectID

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (void)_setStoreInfo1:(id)a0;
+ (id)alloc;
+ (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (char *)generatedNameSuffix;
+ (id)_retain_1;
+ (void)release;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (BOOL)_usesTaggedPointers;
+ (id)_storeInfo1;
+ (long long)version;
+ (id)retain;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)_release_1;
+ (void)_storeDeallocated;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;

- (BOOL)_isPersistentStoreAlive;
- (id)persistentStore;
- (id)URIRepresentation;
- (id)entityName;
- (oneway void)release;
- (unsigned long long)retainCount;
- (unsigned long long)hash;
- (id)entity;
- (id)_storeIdentifier;
- (id)_storeInfo1;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (BOOL)isTemporaryID;

@end
