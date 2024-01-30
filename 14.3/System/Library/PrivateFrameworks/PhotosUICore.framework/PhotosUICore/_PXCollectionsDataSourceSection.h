@class PXCollectionsDataSource;

@interface _PXCollectionsDataSourceSection : PXCollectionsDataSection {
    long long _count;
}

@property (readonly, nonatomic) PXCollectionsDataSource *collectionsDataSource;

- (void).cxx_destruct;
- (id)initWithCollectionsDataSource:(id)a0;
- (id)existingAssetsFetchResultAtIndex:(long long)a0;
- (long long)countForCollection:(id)a0;
- (long long)count;
- (id)content;
- (id)objectAtIndex:(long long)a0;
- (long long)indexOfCollection:(id)a0;

@end
