@class PHFetchResult;

@interface PXContentSyndicationPhotoKitDataSource : PXContentSyndicationDataSource {
    PHFetchResult *_fetchResult;
}

- (long long)numberOfItemsInSection:(long long)a0;
- (long long)countForCollection:(id)a0;
- (long long)numberOfSections;
- (id)indexPathForCollection:(id)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)collectionAtIndexPath:(id)a0;
- (id)collectionListForSection:(long long)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)initWithFetchResult:(id)a0;
- (void).cxx_destruct;
- (id)existingAssetsFetchResultAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)assetCollectionAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)contentSyndicationItemAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)dataSourceUpdatedWithChange:(id)a0 underlyingArrayChangeDetails:(id *)a1;
- (id)mostRecentlyAddedDate;

@end
