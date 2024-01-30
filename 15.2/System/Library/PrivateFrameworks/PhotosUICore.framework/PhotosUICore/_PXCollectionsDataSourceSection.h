@class PXCollectionsDataSource;

@interface _PXCollectionsDataSourceSection : PXCollectionsDataSection {
    long long _count;
}

@property (readonly, nonatomic) PXCollectionsDataSource *collectionsDataSource;
@property (readonly, nonatomic) unsigned long long section;

- (id)objectAtIndex:(long long)a0;
- (long long)countForCollection:(id)a0;
- (id)initWithCollectionsDataSource:(id)a0;
- (void).cxx_destruct;
- (long long)indexOfCollection:(id)a0;
- (long long)count;
- (id)existingAssetsFetchResultAtIndex:(long long)a0;
- (id)content;

@end
