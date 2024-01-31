@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)alloc;
+ (id)initWithEntity:(id)a0;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (BOOL)_usesTaggedPointers;
+ (void)initialize;
+ (id)_retain_1;
+ (long long)version;
+ (Class)classForStore:(id)a0;
+ (void)_release_1;
+ (void)_storeDeallocated;
+ (unsigned int)allocateBatch:(id *)a0 forEntity:(id)a1 count:(unsigned int)a2;

- (id)entity;
- (BOOL)_isPersistentStoreAlive;
- (id)retain;
- (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
- (unsigned long long)hash;
- (id)initWithEntity:(id)a0;
- (id)persistentStore;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)_storeIdentifier;
- (id)URIRepresentation;
- (BOOL)isEqual:(id)a0;
- (BOOL)isTemporaryID;
- (oneway void)release;
- (id)_retainedURIString;
- (id)_referenceData;
- (void)_setPersistentStore:(id)a0;
- (int)_temporaryIDCounter;

@end
