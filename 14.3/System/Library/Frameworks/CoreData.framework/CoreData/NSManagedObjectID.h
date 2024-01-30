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
+ (long long)version;
+ (id)unarchivedScalarObjectIDsFromData:(id)a0 withCoordinator:(id)a1;
+ (id)_newArchiveForScalarObjectIDs:(id)a0;
+ (BOOL)accessInstanceVariablesDirectly;

- (BOOL)_isPersistentStoreAlive;
- (id)URIRepresentation;
- (id)entityName;
- (int)_temporaryIDCounter;
- (long long)_compareArbitraryValue:(id)a0 toValue:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_storeIdentifier;
- (id)_storeInfo1;
- (long long)_referenceData64;
- (id)_referenceData;
- (BOOL)_preferReferenceData64;
- (id)_retainedURIString;
- (void)encodeWithCoder:(id)a0;

@end
