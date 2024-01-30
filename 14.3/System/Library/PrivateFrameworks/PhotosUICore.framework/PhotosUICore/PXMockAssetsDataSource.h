@class NSArray;

@interface PXMockAssetsDataSource : PXAssetsDataSource

@property (readonly, nonatomic) NSArray *assetsBySection;
@property (readonly, nonatomic) NSArray *assetCollections;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)initWithAssetsBySection:(id)a0 assetCollections:(id)a1;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForObjectID:(id)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;

@end
