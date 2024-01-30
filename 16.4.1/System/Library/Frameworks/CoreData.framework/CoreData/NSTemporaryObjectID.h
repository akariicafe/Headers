@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (void)initialize;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)initWithEntity:(id)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)_retain_1;
+ (long long)version;
+ (BOOL)_usesTaggedPointers;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (unsigned int)allocateBatch:(id *)a0 forEntity:(id)a1 count:(unsigned int)a2;
+ (void)_storeDeallocated;
+ (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
+ (void)_release_1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (Class)classForStore:(id)a0;

- (id)initWithEntity:(id)a0;
- (id)retain;
- (BOOL)_isPersistentStoreAlive;
- (id)entity;
- (oneway void)release;
- (id)_storeIdentifier;
- (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)persistentStore;
- (unsigned long long)hash;
- (BOOL)isTemporaryID;
- (id)URIRepresentation;
- (id)_retainedURIString;
- (unsigned long long)retainCount;
- (id)_referenceData;
- (void)_setPersistentStore:(id)a0;
- (int)_temporaryIDCounter;

@end
