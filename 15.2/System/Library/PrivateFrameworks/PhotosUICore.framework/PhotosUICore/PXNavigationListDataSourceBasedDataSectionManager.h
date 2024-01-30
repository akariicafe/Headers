@class PXSectionedDataSource, PXSectionedDataSourceManager, NSString, PXDataSectionEnablementForwarder;

@interface PXNavigationListDataSourceBasedDataSectionManager : PXDataSectionManager <PXCollectionsDataSourceManagerObserver, PXDataSectionManagerEnabling>

@property (retain, nonatomic) PXSectionedDataSource *dataSource;
@property (readonly, nonatomic, getter=isDataSourceEmpty) BOOL dataSourceEmpty;
@property (readonly, nonatomic, getter=isDataSectionVisible) BOOL dataSectionVisible;
@property (readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager;
@property (nonatomic, getter=isHiddenWhenEmpty) BOOL hiddenWhenEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) PXDataSectionEnablementForwarder *enablementForwarder;

- (id)createDataSection;
- (id)initWithChildDataSectionManagers:(id)a0;
- (BOOL)allowsEmptyDataSection;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_handleDataSourceChange;
- (id)initWithDataSourceManager:(id)a0;
- (id)dataSectionFromDataSource:(id)a0;
- (void)_updateVisibilityViaDataSectionIfNecessary;

@end
