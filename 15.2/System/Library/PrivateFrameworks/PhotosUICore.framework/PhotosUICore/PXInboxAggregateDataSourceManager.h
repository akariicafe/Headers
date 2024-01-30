@class PXInboxAggregateDataSource, NSArray, NSString;

@interface PXInboxAggregateDataSourceManager : PXSectionedDataSourceManager <PXSectionedDataSourceManagerObserver, PXChangeObserver>

@property (readonly, nonatomic) PXInboxAggregateDataSource *dataSource;
@property (readonly, nonatomic) NSArray *dataSourceManagers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateDataSource;
- (id)createInitialDataSource;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)_dataSourceSnapshot;
- (id)initWithDataSourceManagers:(id)a0;

@end
