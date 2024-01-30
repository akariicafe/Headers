@interface _NSCoreManagedObjectID : NSManagedObjectID

+ (void)initialize;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)retain;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)_retain_1;
+ (long long)version;
+ (BOOL)_usesTaggedPointers;
+ (void)release;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (void)_storeDeallocated;
+ (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
+ (void)_release_1;
+ (id)_storeInfo1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (char *)generatedNameSuffix;
+ (void)_setStoreInfo1:(id)a0;

- (id)retain;
- (BOOL)_isPersistentStoreAlive;
- (id)entityName;
- (id)entity;
- (oneway void)release;
- (id)_storeIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)_storeInfo1;
- (id)persistentStore;
- (unsigned long long)hash;
- (BOOL)isTemporaryID;
- (id)URIRepresentation;
- (unsigned long long)retainCount;

@end
