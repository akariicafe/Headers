@class PLPhotoLibrary, NSExpressionDescription, NSString, PLPhotoLibraryPathManager;

@interface PLManagedObject : NSManagedObject <PLJournalEntryPayloadUpdateAdapter, PLValidatedManagedObject>

@property (class, readonly) NSExpressionDescription *objectIDDescription;

@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL isRegisteredWithUserInterfaceContext;
@property (readonly, copy, nonatomic) NSString *shortObjectIDURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)insertInManagedObjectContext:(id)a0;
+ (id)entityName;
+ (id)entityInManagedObjectContext:(id)a0;
+ (id)attributeValidationRules;

- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (void)willSave;
- (BOOL)supportsCloudUpload;
- (id)duplicateSortPropertyNamesSkip;
- (id)duplicateSortPropertyNames;
- (BOOL)isValidForJournalPersistence;
- (id)payloadIDForTombstone:(id)a0;
- (id)payloadsForChangedKeys:(id)a0;
- (BOOL)isSyncableChange;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (void)setValue:(id)a0 forKey:(id)a1 valueDidChangeHandler:(id /* block */)a2;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
