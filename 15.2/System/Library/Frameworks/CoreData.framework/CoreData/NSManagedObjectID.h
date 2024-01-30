@class NSString, NSEntityDescription, NSPersistentStore;

@interface NSManagedObjectID : NSObject <NSFetchRequestResult, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSEntityDescription *entity;
@property (readonly, weak) NSPersistentStore *persistentStore;
@property (readonly, getter=isTemporaryID) BOOL temporaryID;

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
+ (long long)version;

- (long long)compare:(id)a0;
- (BOOL)_isPersistentStoreAlive;
- (id)entityName;
- (id)URIRepresentation;
- (id)_storeIdentifier;
- (id)_retainedURIString;
- (id)initWithObject:(id)a0;
- (BOOL)_isDeallocating;
- (id)initWithPK64:(long long)a0;
- (id)_referenceData;
- (BOOL)_preferReferenceData64;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)_temporaryIDCounter;
- (long long)_referenceData64;
- (BOOL)_tryRetain;

@end
