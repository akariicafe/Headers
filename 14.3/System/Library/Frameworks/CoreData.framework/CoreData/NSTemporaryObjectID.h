@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)alloc;
+ (Class)classForStore:(id)a0;
+ (id)_retain_1;
+ (void)release;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
+ (BOOL)_usesTaggedPointers;
+ (unsigned int)allocateBatch:(id *)a0 forEntity:(id)a1 count:(unsigned int)a2;
+ (long long)version;
+ (id)retain;
+ (id)initWithEntity:(id)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)_release_1;
+ (void)_storeDeallocated;
+ (void)setObjectStoreIdentifier:(id)a0;

- (BOOL)_isPersistentStoreAlive;
- (id)persistentStore;
- (id)URIRepresentation;
- (int)_temporaryIDCounter;
- (oneway void)release;
- (void)dealloc;
- (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
- (unsigned long long)retainCount;
- (unsigned long long)hash;
- (id)entity;
- (id)_storeIdentifier;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (id)initWithEntity:(id)a0;
- (void)finalize;
- (id)_referenceData;
- (void)_setPersistentStore:(id)a0;
- (id)_retainedURIString;
- (BOOL)isTemporaryID;

@end
