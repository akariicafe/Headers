@class PLPhotoLibrary, NSExpressionDescription, NSString, PLPhotoLibraryPathManager;

@interface PLManagedObject : NSManagedObject <PLJournalEntryPayloadManagedObjectUpdate, PLValidatedManagedObject>

@property (class, readonly) NSExpressionDescription *objectIDDescription;

@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL isRegisteredWithUserInterfaceContext;
@property (readonly, copy, nonatomic) NSString *shortObjectIDURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)a0;
+ (id)attributeValidationRules;
+ (id)entityInManagedObjectContext:(id)a0;

- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (id)payloadForChangedKeys:(id)a0;
- (void)willSave;
- (BOOL)supportsCloudUpload;
- (BOOL)isSyncableChange;
- (id)payloadsForChangedKeys:(id)a0;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
