@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)_retain_1;
+ (id)initWithEntity:(id)a0;
+ (unsigned int)allocateBatch:(id *)a0 forEntity:(id)a1 count:(unsigned int)a2;
+ (id)alloc;
+ (void)_storeDeallocated;
+ (long long)version;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (Class)classForStore:(id)a0;
+ (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
+ (void)_release_1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (BOOL)_usesTaggedPointers;
+ (void)setObjectStoreIdentifier:(id)a0;

- (id)entity;
- (BOOL)_isPersistentStoreAlive;
- (id)URIRepresentation;
- (id)_storeIdentifier;
- (BOOL)isTemporaryID;
- (id)initWithEntity:(id)a0;
- (unsigned long long)retainCount;
- (id)_retainedURIString;
- (id)retain;
- (id)persistentStore;
- (BOOL)isEqual:(id)a0;
- (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
- (id)_referenceData;
- (void)_setPersistentStore:(id)a0;
- (int)_temporaryIDCounter;
- (unsigned long long)hash;
- (void)dealloc;
- (oneway void)release;

@end
