@class NSSet;

@interface PLDuplicateAlbum : PLManagedAlbum

@property (nonatomic) long long processingVersion;
@property (nonatomic) short duplicateType;
@property (retain, nonatomic) NSSet *metadataMatchingAssets;
@property (retain, nonatomic) NSSet *perceptualMatchingAssets;

+ (id)entityName;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0 predicate:(id)a1;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0 type:(short)a1;
+ (id)insertIntoPhotoLibrary:(id)a0;
+ (id)albumSupportsAssetOrderKeysPredicate;

- (BOOL)supportsAssetOrderKeys;
- (void)cleanupAlbumForDeletedDuplicateAsset;
- (void)awakeFromInsert;
- (void)removeAssetsAtIndexes:(id)a0;
- (void)sortAssets;
- (void)updateAlbumType;
- (id)albumAssetsFetchRequestForDuplicateSort;
- (void)addAssets:(id)a0 type:(short)a1;
- (void)updateDuplicateAssetVisibilityStatePropertyForAsset:(id)a0 duplicateAssetVisibilityState:(short)a1;
- (void)updateDuplicateAssetVisibilityStateWithDuplicateAssets:(id)a0;
- (void)removeInternalAssets:(id)a0;
- (BOOL)hasDuplicateAssetVisibilityStateVisibleAssets:(id)a0;
- (id)duplicateAssetsFromCollection;
- (id)mutablePerceptualMatchingAssets;
- (id)mutableMetadataMatchingAssets;

@end
