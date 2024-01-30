@class NSArray;
@protocol PXDisplayAssetCollection;

@interface PXForYouSuggestionsAssetsDataSource : PXAssetsDataSource {
    id<PXDisplayAssetCollection> _collection;
}

@property (copy, nonatomic) NSArray *assets;

+ (id)new;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDisplayAssets:(id)a0 collection:(id)a1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForAssetReference:(id)a0;

@end
