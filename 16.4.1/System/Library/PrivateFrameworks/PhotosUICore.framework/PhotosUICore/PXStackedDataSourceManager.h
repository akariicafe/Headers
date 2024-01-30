@class NSArray, NSString;

@interface PXStackedDataSourceManager : PXSectionedDataSourceManager <PXDataSectionManagerChangeObserver>

@property (nonatomic) BOOL initialDataSourceCreated;
@property (copy, nonatomic) NSArray *dataSectionManagers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createInitialDataSource;
- (id)_newDataSource;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (void)_registerAsChangeObserverForDataSectionManagers:(id)a0;
- (void)_unregisterAsChangeObserverForDataSectionManagers:(id)a0;
- (void)_updateDataSourceWithSectionChanges:(id)a0 itemChanges:(id)a1;
- (id)initWithDataSectionManagers:(id)a0;

@end
