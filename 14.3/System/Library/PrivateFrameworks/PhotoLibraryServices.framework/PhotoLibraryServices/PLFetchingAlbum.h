@class NSString, NSOrderedSet, NSData, NSPredicate, NSFetchRequest, NSArray;

@interface PLFetchingAlbum : _PLFetchingAlbum <PLCloudDeletable, PLFileSystemAlbumMetadataPersistence> {
    unsigned long long _countForDisplay;
    unsigned long long _photosCount;
    unsigned long long _videosCount;
    int _emptyState;
    NSArray *_cachedKeyAssets;
}

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (retain, nonatomic) NSOrderedSet *fetchedAssets;
@property (nonatomic) BOOL needsPersistenceUpdate;
@property (retain, nonatomic) NSFetchRequest *fetchRequest;
@property (retain, nonatomic) NSData *customQueryParameters;
@property (retain, nonatomic) NSString *customQueryType;
@property (readonly, nonatomic) NSPredicate *extraFilterPredicate;
@property (retain, nonatomic) NSPredicate *ALAssetsGroupFilterPredicate;
@property (nonatomic) unsigned long long batchSize;
@property (readonly, nonatomic) BOOL hasAssetsCache;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_predicateForAssetSubtype:(short)a0;
+ (id)predicateForAlbumKind:(int)a0;
+ (BOOL)contextShouldIgnoreChangesForFetchRequest;
+ (id)sortDescriptorsForAlbumKind:(int)a0;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (BOOL)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
+ (BOOL)contextShouldIgnoreChangesForFetchedAssets;
+ (id)validKindsForPersistence;

- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (BOOL)isValidForPersistence;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (id)payloadForChangedKeys:(id)a0;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (void)willSave;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (id)mutableAssets;
- (BOOL)isEmpty;
- (unsigned long long)countForAssetsOfKind:(short)a0;
- (void).cxx_destruct;
- (id)assets;
- (void)didTurnIntoFault;
- (id)keyAsset;
- (void)setAssets:(id)a0;
- (id)primitiveAssets;
- (void)awakeFromFetch;
- (void)didSave;
- (BOOL)canPerformDeleteOperation;
- (void)updateSnapshotAndClearCaches:(id)a0;
- (unsigned long long)count;
- (void)setKeyAsset:(id)a0;
- (id)filteredIndexesForPredicate:(id)a0;
- (id)_cachedKeyAssets;
- (void)setupFetchRequest;
- (id)_performFetchWithRequest:(id)a0;
- (unsigned long long)_fetchedCountForAssetsOfKind:(short)a0;
- (id)fastPointerAccessSetForAssets:(id)a0;
- (BOOL)mayHaveAssetsInCommon:(id)a0;
- (void)batchFetchAssets:(id)a0;
- (id)secondaryKeyAsset;
- (void)setSecondaryKeyAsset:(id)a0;
- (id)tertiaryKeyAsset;
- (void)setTertiaryKeyAsset:(id)a0;
- (unsigned long long)approximateCount;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
