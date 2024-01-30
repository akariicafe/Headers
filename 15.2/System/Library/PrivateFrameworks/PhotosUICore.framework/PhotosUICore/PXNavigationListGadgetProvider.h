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

- (void)preferencesDidChange;
- (id)initWithIdentifier:(id)a0;
- (void)_updateGadgets;
- (BOOL)_shouldHiddenAlbumBeVisible;
- (void)startLoadingRemainingData;
- (void)_resetGadgets;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)pauseLoadingRemainingData;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)_initializeDataSourceManagerIfNeeded;
- (id)initWithType:(unsigned long long)a0 extendedTraitCollection:(id)a1 isPresentedInPicker:(BOOL)a2 assetsFilterPredicate:(id)a3;
- (void)dealloc;
- (void)generateGadgets;

@end
