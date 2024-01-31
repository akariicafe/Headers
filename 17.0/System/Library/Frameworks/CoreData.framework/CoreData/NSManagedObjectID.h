@class NSString, NSEntityDescription, NSPersistentStore;

@interface NSManagedObjectID : NSObject <NSFetchRequestResult, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSEntityDescription *entity;
@property (readonly, weak) NSPersistentStore *persistentStore;
@property (readonly, getter=isTemporaryID) BOOL temporaryID;

+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (long long)version;
+ (id)_generateTemporaryIDForEntity:(id)a0;

- (id)initWithObject:(id)a0;
- (BOOL)_isPersistentStoreAlive;
- (id)entityName;
- (BOOL)_tryRetain;
- (long long)compare:(id)a0;
- (id)_storeIdentifier;
- (id)URIRepresentation;
- (BOOL)_isDeallocating;
- (long long)_referenceData64;
- (id)initWithPK64:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_retainedURIString;
- (BOOL)_preferReferenceData64;
- (id)_referenceData;
- (int)_temporaryIDCounter;

@end
