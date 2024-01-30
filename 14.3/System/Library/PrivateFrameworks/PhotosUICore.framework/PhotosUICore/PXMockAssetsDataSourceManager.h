@class NSString, NSArray, PXMockAssetsDataSource, NSMutableArray, PXSectionedChangeDetailsCoalescer;

@interface PXMockAssetsDataSourceManager : PXAssetsDataSourceManager <PXMutableMockAssetsDataSourceManager> {
    NSArray *_initialAssetsBySection;
    NSArray *_initialAssetCollections;
    BOOL _isPerformingDataSourceChanges;
    NSMutableArray *_nextAssetsBySection;
    NSMutableArray *_nextAssetCollections;
    PXSectionedChangeDetailsCoalescer *_changeDetailsCoalescer;
    BOOL _changeIsReload;
}

@property (readonly, nonatomic) PXMockAssetsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)markChangeAsReload;
- (void)insertItemAtIndexPath:(id)a0 assetProperties:(id)a1;
- (void)changeItemAtIndexPath:(id)a0 toAssetProperties:(id)a1;
- (void)insertSectionAtIndex:(long long)a0 count:(long long)a1 assetProperties:(id)a2 assetCollection:(id)a3;
- (void)changeSectionAtIndex:(long long)a0 toAssetCollection:(id)a1;
- (void)performDataSourceChanges:(id /* block */)a0;
- (void)_appendIncrementalChangeDetails:(id)a0;
- (id)createInitialDataSource;
- (void).cxx_destruct;
- (void)removeSectionAtIndex:(long long)a0;
- (void)removeItemAtIndexPath:(id)a0;
- (id)initWithConfigurationBlock:(id /* block */)a0;

@end
