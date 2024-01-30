@class NSPredicate;
@protocol PXDisplayAsset, PXDisplayAssetCollection, PXDisplayCollection;

@interface PXAssetsDataSource : PXSectionedDataSource {
    long long _cachedNumberOfAssets;
}

@property (readonly, nonatomic) id<PXDisplayCollection> containerCollection;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> firstAssetCollection;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> lastAssetCollection;
@property (readonly, nonatomic) unsigned long long estimatedPhotosCount;
@property (readonly, nonatomic) unsigned long long estimatedVideosCount;
@property (readonly, nonatomic) unsigned long long estimatedOtherCount;
@property (readonly, nonatomic) unsigned long long numberOfAssets;
@property (readonly, nonatomic) long long startingSection;
@property (readonly, nonatomic) BOOL startsAtEnd;
@property (readonly, nonatomic) BOOL isFiltered;
@property (readonly, nonatomic) NSPredicate *filterPredicate;
@property (readonly, nonatomic) BOOL isSorted;
@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) BOOL areAllSectionsConsideredAccurate;

- (id)objectReferenceNearestToObjectReference:(id)a0 inSection:(long long)a1;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)a0;
- (long long)numberOfUncuratedItemsInAssetCollection:(id)a0;
- (unsigned long long)estimatedAssetCountForSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfUncuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)isFilteringDisabledForAssetCollection:(id)a0;
- (id)assetsInSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)hasCurationForAssetCollection:(id)a0;
- (long long)numberOfCuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)assetReferenceForAssetReference:(id)a0;
- (id)objectIDAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (Class)objectReferenceClassForSection;
- (Class)objectReferenceClassForItem;
- (id)metadataAssetAtItemIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)assetReferenceAtItemIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)assetCollectionReferenceNearestToObjectReference:(id)a0;
- (id)objectReferenceNearestToObjectReference:(id)a0;
- (id)assetCollectionAtSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)assetCollectionReferenceAtSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForAssetCollectionReference:(id)a0;
- (id)assetCollectionReferenceForAssetCollectionReference:(id)a0;
- (BOOL)isFilteringSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)isFilteringDisabledForSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSectionsWithEnrichmentState:(unsigned short)a0;
- (long long)numberOfCuratedItemsInAssetCollection:(id)a0;
- (id)keyAssetsInSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)keyAssetsForAssetCollection:(id)a0;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)a0 assetCollectionReferenceWithSameKeyAssetAsParent:(id *)a1;
- (long long)estimatedAssetsCountWithEnrichmentState:(unsigned short)a0;
- (BOOL)isFilteringAssetCollection:(id)a0;
- (BOOL)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)startingAssetReference;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })keyAssetIndexPathForSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (void)prefetchIndexPaths:(id)a0 level:(unsigned long long)a1;
- (long long)aggregateMediaType;
- (id)photosGraphSuggestedContributions;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForAssetReference:(id)a0;
- (long long)totalNumberOfItems;
- (id)assetAtItemIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)assetIdentifierAtItemIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;

@end
