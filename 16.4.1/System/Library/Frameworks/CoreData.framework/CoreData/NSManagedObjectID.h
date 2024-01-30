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

- (id)initWithObject:(id)a0;
- (BOOL)_isPersistentStoreAlive;
- (id)entityName;
- (long long)_referenceData64;
- (id)_storeIdentifier;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPK64:(long long)a0;
- (BOOL)_isDeallocating;
- (long long)compare:(id)a0;
- (id)URIRepresentation;
- (id)_retainedURIString;
- (BOOL)_preferReferenceData64;
- (id)_referenceData;
- (int)_temporaryIDCounter;

@end
