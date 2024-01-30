@class PLPerson, NSString, PLMemory, NSDate;

@interface PLUserFeedback : PLManagedObject <PLCloudDeletable, PLFileSystemMetadataPersistence>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (nonatomic) NSString *uuid;
@property (nonatomic) short type;
@property (nonatomic) short feature;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) PLPerson *person;
@property (retain, nonatomic) PLMemory *memory;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudDeleteState;
@property (readonly, nonatomic) NSString *detailedDescription;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)insertIntoManagedObjectContext:(id)a0 withDictionaryRepresentation:(id)a1;
+ (id)userFeedbacksToUploadInManagedObjectContext:(id)a0 limit:(long long)a1;
+ (id)updateUserFeedback:(id)a0 withCPLSuggestionChange:(id)a1 inManagedObjectContext:(id)a2;
+ (id)userFeedbacksWithUUIDs:(id)a0 inManagedObjectContext:(id)a1;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (id)_userFeedbacksMatchingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(long long)a2 inManagedObjectContext:(id)a3;
+ (id)insertIntoManagedObjectContext:(id)a0 withUUID:(id)a1;
+ (id)userFeedbackWithUUID:(id)a0 inManagedObjectContext:(id)a1;
+ (BOOL)shouldHandleCPLSuggestionChange:(id)a0;
+ (id)newestUserFeedbackInSet:(id)a0;

- (id)payloadID;
- (BOOL)isValidForPersistence;
- (id)cplFullRecord;
- (BOOL)validateForInsert:(id *)a0;
- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (void)prepareForDeletion;
- (id)payloadForChangedKeys:(id)a0;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (id)cplSuggestionChange;
- (BOOL)isSyncableChange;
- (BOOL)_relationshipsInInvalidState;
- (BOOL)_validateRelationshipConstraintForInsert:(BOOL)a0 error:(id *)a1;
- (BOOL)_validateNonNilUUID:(id *)a0;
- (id)_objectUsedForPersistence;
- (BOOL)supportsCloudUpload;
- (id)dictionaryRepresentation;

@end
