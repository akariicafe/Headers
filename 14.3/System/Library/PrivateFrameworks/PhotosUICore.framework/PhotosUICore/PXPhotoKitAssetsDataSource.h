@class NSCache, NSMutableDictionary, PXPhotosDataSourceChange, PXPhotosDataSource;

@interface PXPhotoKitAssetsDataSource : PXAssetsDataSource {
    NSMutableDictionary *_layoutItemByAssetCache;
    NSCache *_fetchedKeyAssetByAssetCollectionLocalIdentifierCache;
    NSCache *_assetReferenceNearestToAssetCache;
}

@property (readonly, nonatomic) PXPhotosDataSourceChange *change;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource;

+ (id)dataSourceWithAsset:(id)a0;
+ (id)dataSourceWithAssets:(id)a0;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)objectReferenceNearestToObjectReference:(id)a0 inSection:(long long)a1;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)a0;
- (id)filterPredicate;
- (long long)numberOfUncuratedItemsInAssetCollection:(id)a0;
- (unsigned long long)estimatedAssetCountForSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)isSorted;
- (long long)numberOfUncuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)isFilteringDisabledForAssetCollection:(id)a0;
- (unsigned long long)estimatedVideosCount;
- (BOOL)hasCurationForAssetCollection:(id)a0;
- (long long)numberOfCuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (void).cxx_destruct;
- (void)prefetchSections:(id)a0;
- (id)selectionSnapshotForAsset:(id)a0 assetCollection:(id)a1;
- (id)assetCollectionReferenceNearestToObjectReference:(id)a0;
- (id)objectReferenceNearestToObjectReference:(id)a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (long long)startingSection;
- (long long)numberOfSectionsWithEnrichmentState:(unsigned short)a0;
- (long long)numberOfCuratedItemsInAssetCollection:(id)a0;
- (id)keyAssetsInSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)containsAnyItems;
- (id)inputForItem:(id)a0;
- (id)keyAssetsForAssetCollection:(id)a0;
- (id)firstAssetCollection;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)a0 assetCollectionReferenceWithSameKeyAssetAsParent:(id *)a1;
- (BOOL)containsMultipleItems;
- (BOOL)startsAtEnd;
- (long long)estimatedAssetsCountWithEnrichmentState:(unsigned short)a0;
- (id)objectReferenceAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)indexPathSetForObjectIDs:(id)a0;
- (id)description;
- (unsigned long long)estimatedOtherCount;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForObjectID:(id)a0;
- (BOOL)isFilteringAssetCollection:(id)a0;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (void)prefetchIndexPaths:(id)a0;
- (id)startingAssetReference;
- (id)initWithImmutablePhotosDataSource:(id)a0 withChange:(id)a1;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })keyAssetIndexPathForSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (void)prefetchIndexPaths:(id)a0 level:(unsigned long long)a1;
- (BOOL)isFiltered;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)_assetCollectionReferenceNearestToObjectReferenceAssumingSortedByIncreasingCreationDate:(id)a0;
- (id)_fastKeyCuratedAssetForAssetCollection:(id)a0;
- (id)containerCollection;
- (id)photosGraphSuggestedContributions;
- (id)lastAssetCollection;
- (BOOL)couldObjectReferenceAppear:(id)a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })_indexPathForObjectReference:(id)a0 restrictedToSection:(long long)a1;
- (unsigned long long)estimatedPhotosCount;
- (id)_assetReferenceReferenceNearestToAssetReferenceUsingExhaustiveSearch:(id)a0;
- (id)assetIdentifierAtItemIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)areAllSectionsConsideredAccurate;
- (unsigned long long)identifier;

@end
