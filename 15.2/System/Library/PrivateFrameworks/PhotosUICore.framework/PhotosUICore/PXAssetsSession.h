@class PXSectionedSelectionManager, PXSectionedDataSource, PXSectionedDataSourceManager, PXSelectionSnapshot, NSString, PXUIMediaProvider;

@interface PXAssetsSession : PXObservable <PXSectionedDataSourceManagerObserver>

@property (retain, nonatomic) PXSectionedDataSource *dataSource;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property (retain, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableChangeObject;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateDataSourceDependentProperties;
- (id)init;
- (id)initWithDataSourceManager:(id)a0 mediaProvider:(id)a1;
- (id)initWithDataSourceManager:(id)a0 mediaProvider:(id)a1 selectionManager:(id)a2;

@end
