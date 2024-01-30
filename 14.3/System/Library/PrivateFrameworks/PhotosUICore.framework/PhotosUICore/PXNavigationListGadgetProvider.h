@class NSNumber, NSString, NSPredicate, PXNavigationListDataSectionManager, PXExtendedTraitCollection;

@interface PXNavigationListGadgetProvider : PXGadgetProvider <PXNavigationListDataSectionManagerObserver, PXPreferencesObserver>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection;
@property (retain, nonatomic) PXNavigationListDataSectionManager *dataSourceManager;
@property (readonly, nonatomic) BOOL isPresentedInPicker;
@property (readonly, nonatomic) BOOL shouldShowNavigationListForDeviceAndLayoutClass;
@property (readonly, nonatomic) NSPredicate *assetsFilterPredicate;
@property (retain, nonatomic) NSNumber *hiddenAlbumVisibleCache;
@property (nonatomic) BOOL backgroundFetchingIsActive;
@property (nonatomic) BOOL shouldShowNavigationListOnIpad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)estimatedNumberOfGadgets;
- (void)preferencesDidChange;
- (void)generateGadgets;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithIdentifier:(id)a0;
- (void)pauseLoadingRemainingData;
- (void)_updateGadgets;
- (void)_initializeDataSourceManagerIfNeeded;
- (BOOL)_shouldHiddenAlbumBeVisible;
- (id)initWithType:(unsigned long long)a0 extendedTraitCollection:(id)a1 isPresentedInPicker:(BOOL)a2 assetsFilterPredicate:(id)a3;
- (void)loadDataForGadgets;
- (void)startLoadingRemainingData;

@end
