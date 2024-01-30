@class NSCache, NSMutableDictionary, PXPhotosDataSourceChange, PXPhotosDataSource;

@interface PXPhotoKitAssetsDataSource : PXAssetsDataSource {
    NSMutableDictionary *_layoutItemByAssetCache;
    NSCache *_fetchedKeyAssetByAssetCollectionLocalIdentifierCache;
    NSCache *_assetReferenceNearestToAssetCache;
}

@property (readonly, nonatomic) PXPhotosDataSourceChange *change;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource;

+ (id)dataSourceWithAssetCollections:(id)a0;
+ (id)dataSourceWithAsset:(id)a0;
+ (id)dataSourceWithAssets:(id)a0;

- (id)assetIdentifierAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)libraryFilter;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })keyAssetIndexPathForSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (BOOL)isFiltered;
- (unsigned long long)estimatedOtherCount;
- (id)selectionSnapshotForAsset:(id)a0 assetCollection:(id)a1;
- (id)indexPathSetForObjectIDs:(id)a0;
- (BOOL)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)startingSection;
- (id)objectReferenceNearestToObjectReference:(id)a0;
- (unsigned long long)estimatedVideosCount;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)a0 assetCollectionReferenceWithSameKeyAssetAsParent:(id *)a1;
- (long long)numberOfCuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)ignoreSharedLibraryFilters;
- (id)lastAssetCollection;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)a0;
- (BOOL)containsMultipleItems;
- (void)prefetchIndexPaths:(id)a0;
- (BOOL)isFilteringAssetCollection:(id)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_indexPathForObjectReference:(id)a0 restrictedToSection:(long long)a1;
- (long long)numberOfSections;
- (BOOL)isSorted;
- (id)_assetCollectionReferenceNearestToObjectReferenceAssumingSortedByIncreasingCreationDate:(id)a0;
- (long long)identifier;
- (BOOL)isFilteringDisabledForAssetCollection:(id)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)couldObjectReferenceAppear:(id)a0;
- (id)keyAssetsForAssetCollection:(id)a0;
- (id)assetCollectionReferenceNearestToObjectReference:(id)a0;
- (unsigned long long)estimatedAssetCountForSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfUncuratedItemsInAssetCollection:(id)a0;
- (BOOL)containsAnyItems;
- (id)_fastKeyCuratedAssetForAssetCollection:(id)a0;
- (long long)numberOfCuratedItemsInAssetCollection:(id)a0;
- (BOOL)getAssetCounts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a0 guestAssetCounts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a1 allowFetch:(BOOL)a2;
- (id)inputForItem:(id)a0;
- (id)uncuratedAssetsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)_assetReferenceReferenceNearestToAssetReferenceUsingExhaustiveSearch:(id)a0;
- (id)objectReferenceNearestToObjectReference:(id)a0 inSection:(long long)a1;
- (id)firstAssetCollection;
- (id)keyAssetsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)areAllSectionsConsideredAccurate;
- (long long)numberOfSectionsWithEnrichmentState:(unsigned short)a0;
- (id)objectReferenceAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)filterPredicate;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfUncuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (BOOL)hasCurationForAssetCollection:(id)a0;
- (id)description;
- (void)prefetchSections:(id)a0;
- (void)prefetchIndexPaths:(id)a0 level:(unsigned long long)a1;
- (long long)estimatedAssetsCountWithEnrichmentState:(unsigned short)a0;
- (id)initWithImmutablePhotosDataSource:(id)a0 withChange:(id)a1;
- (id)selectionSnapshotForAssetsByAssetCollection:(id)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_indexPathForSavedSyndicatedAssetReference:(id)a0;
- (id)startingAssetReference;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectID:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)estimatedPhotosCount;
- (id)photosGraphSuggestedContributions;
- (id)containerCollection;
- (BOOL)startsAtEnd;

@end
