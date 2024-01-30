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
@property (nonatomic) short searchIndexRebuildState;
@property (readonly, nonatomic) BOOL hasAssetsCache;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_predicateForAssetSubtype:(short)a0;
+ (id)predicateForAlbumKind:(int)a0 includeGuest:(BOOL)a1;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (BOOL)contextShouldIgnoreChangesForFetchRequest;
+ (id)_predicateForVisibleAsset;
+ (id)sortDescriptorsForAlbumKind:(int)a0;
+ (id)validKindsForPersistence;
+ (BOOL)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
+ (id)predicateForAlbumKind:(int)a0;
+ (BOOL)contextShouldIgnoreChangesForFetchedAssets;

- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (void)awakeFromFetch;
- (id)payloadForChangedKeys:(id)a0;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (BOOL)isEmpty;
- (BOOL)canPerformDeleteOperation;
- (BOOL)isValidForPersistence;
- (void)didSave;
- (unsigned long long)approximateCount;
- (void)willSave;
- (id)filteredIndexesForPredicate:(id)a0;
- (id)mutableAssets;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (void)setAssets:(id)a0;
- (id)assets;
- (unsigned long long)count;
- (void)didTurnIntoFault;
- (unsigned long long)countForAssetsOfKind:(short)a0;
- (void).cxx_destruct;
- (void)batchFetchAssets:(id)a0;
- (id)keyAsset;
- (id)secondaryKeyAsset;
- (void)setKeyAsset:(id)a0;
- (void)setSecondaryKeyAsset:(id)a0;
- (void)setTertiaryKeyAsset:(id)a0;
- (id)tertiaryKeyAsset;
- (id)primitiveAssets;
- (id)_cachedKeyAssets;
- (unsigned long long)_fetchedCountForAssetsOfKind:(short)a0;
- (id)_performFetchWithRequest:(id)a0;
- (id)fastPointerAccessSetForAssets:(id)a0;
- (BOOL)mayHaveAssetsInCommon:(id)a0;
- (void)setupFetchRequest;
- (void)updateSnapshotAndClearCaches:(id)a0;

@end
