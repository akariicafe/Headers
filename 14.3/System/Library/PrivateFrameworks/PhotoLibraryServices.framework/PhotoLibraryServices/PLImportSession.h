@class NSSet, NSString;

@interface PLImportSession : PLGenericAlbum <PLFileSystemAlbumMetadataPersistence>

@property (nonatomic) BOOL needsPersistenceUpdate;
@property (nonatomic) BOOL albumShouldBeAutomaticallyDeleted;
@property (retain, nonatomic) NSSet *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)insertNewImportSessionAlbumWithImportSessionID:(id)a0 inManagedObjectContext:(id)a1;
+ (id)albumsWithImportSessionIDs:(id)a0 inManagedObjectContext:(id)a1;
+ (id)albumWithImportSessionID:(id)a0 inManagedObjectContext:(id)a1;
+ (id)validKindsForPersistence;

- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (BOOL)isValidForPersistence;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (id)payloadForChangedKeys:(id)a0;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (void)willSave;
- (void)prepareForDeletion;
- (id)mutableAssets;
- (BOOL)isEmpty;
- (void)didSave;
- (unsigned long long)count;
- (void)_updateStartDate:(id)a0;
- (void)_updateEndDate:(id)a0;
- (void)revalidateImportDates;
- (void)updateImportDatesFromAddedAsset:(id)a0;
- (BOOL)_isAssetIncludedInImportDates:(id)a0;
- (BOOL)_isDateBeforeStartDate:(id)a0;
- (BOOL)_isDateAfterEndDate:(id)a0;
- (id)_orderedBatchedAssets;
- (BOOL)validateImportSessionID:(id *)a0 error:(id *)a1;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
