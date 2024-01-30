@class PXCollectionsDataSource;

@interface PXCollectionsDataSourceManager : PXSectionedDataSourceManager

@property (readonly, nonatomic) PXCollectionsDataSource *dataSource;

- (void)unregisterChangeObserver:(id)a0 context:(void *)a1;
- (void)registerChangeObserver:(id)a0 context:(void *)a1;

@end
