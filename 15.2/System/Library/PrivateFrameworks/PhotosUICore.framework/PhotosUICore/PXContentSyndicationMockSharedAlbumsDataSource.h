@class PXCollectionsDataSource;

@interface PXContentSyndicationMockSharedAlbumsDataSource : PXContentSyndicationDataSource

@property (readonly, nonatomic) PXCollectionsDataSource *sharedAlbumsDataSource;

- (long long)numberOfSections;
- (long long)identifier;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)countForCollection:(id)a0;
- (void).cxx_destruct;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)collectionListForSection:(long long)a0;
- (id)collectionAtIndexPath:(id)a0;
- (id)initWithSharedAlbumsDataSource:(id)a0;
- (id)contentSyndicationItemAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)assetCollectionAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)mostRecentlyAddedDate;

@end
