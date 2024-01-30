@class PLPerson, NSString, NSArray, NSURL, NSDictionary;

@interface PLPersistedPersonMetadata : NSObject {
    BOOL _cplEnabled;
}

@property (retain, nonatomic) PLPerson *person;
@property (retain, nonatomic) NSURL *metadataURL;
@property (retain, nonatomic) NSString *personUUID;
@property (retain, nonatomic) NSString *mergeTargetPersonUUID;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *personUri;
@property (nonatomic) unsigned int manualOrder;
@property (nonatomic) int type;
@property (nonatomic) int verifiedType;
@property (nonatomic) int cloudVerifiedType;
@property (retain, nonatomic) NSArray *detectedFaces;
@property (retain, nonatomic) NSArray *rejectedFaces;
@property (copy, nonatomic) NSDictionary *contactMatchingDictionary;
@property (nonatomic) short keyFacePickSource;
@property (nonatomic) long long fromVersion;

+ (id)_clusterRejectedFaceIDsWithPerson:(id)a0;
+ (id)_rejectedFacesToArchiveWithPerson:(id)a0;
+ (id)_persistedFaceMetadataWithFaces:(id)a0 keyFace:(id)a1 clusterRejectedFaceIDs:(id)a2;
+ (id)_detectedFacesToArchiveWithPerson:(id)a0;
+ (BOOL)_deleteMetadataFileForPersonUUID:(id)a0 metadataURL:(id)a1;
+ (id)_metadataFileURLForPersonUUID:(id)a0 pathManager:(id)a1;
+ (id)urlsForPersistedPersonsInMetadataDirectoryOfLibrary:(id)a0;
+ (id)_fetchFacesWithPredicate:(id)a0 resultType:(unsigned long long)a1 managedObjectContext:(id)a2 error:(id *)a3;
+ (BOOL)isValidPath:(id)a0;
+ (void)performPostImportMigrationFromVersion:(unsigned long long)a0 fromDataInManagedObjectContext:(id)a1;
+ (void)updateMergeTargetPersonWithPersonUUIDMapping:(id)a0 fromDataInManagedObjectContext:(id)a1;
+ (id)personUUIDsToDedupeWithMetadataURLs:(id)a0 cplEnabled:(BOOL)a1;
+ (BOOL)deleteMetadataFileForPersonUUID:(id)a0 pathManager:(id)a1;
+ (BOOL)isValidPath:(id)a0 outPersonUUID:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)writePersistedData;
- (id)_metadataData;
- (void)_saveMetadata;
- (BOOL)readMetadata;
- (id)initWithPLPerson:(id)a0 pathManager:(id)a1;
- (id)initWithPLPerson:(id)a0 metadataURL:(id)a1;
- (id)initWithPersistedDataAtURL:(id)a0 cplEnabled:(BOOL)a1;
- (id)detectedFaceIdentifiers;
- (BOOL)readDetectedFaces;
- (void)_addAssetUUIDsFromFaces:(id)a0 toMutableSet:(id)a1;
- (BOOL)_insertDetectedFacesOnPerson:(id)a0 fromDataInManagedObjectContext:(id)a1 deferUnmatched:(BOOL)a2;
- (BOOL)_insertRejectedFacesOnPerson:(id)a0 fromDataInManagedObjectContext:(id)a1 deferUnmatched:(BOOL)a2;
- (BOOL)matchesEntityInLibraryBackedByManagedObjectContext:(id)a0 diff:(id *)a1;
- (id)insertPersonFromDataInManagedObjectContext:(id)a0;
- (BOOL)updateFacesInPerson:(id)a0 fromDataInManagedObjectContext:(id)a1 deferUnmatched:(BOOL)a2;
- (id)description;
- (id)initWithPersistedDataAtURL:(id)a0 deferUnarchiving:(BOOL)a1 cplEnabled:(BOOL)a2;
- (void)removePersistedData;
- (BOOL)hasAllAssetsAvailableInManagedObjectContext:(id)a0 includePendingAssetChanges:(BOOL)a1;
- (id)jsonDictionary;
- (BOOL)_readUUID;

@end
