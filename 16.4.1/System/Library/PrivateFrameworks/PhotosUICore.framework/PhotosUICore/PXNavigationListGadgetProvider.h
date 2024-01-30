@class NSNumber, NSString, NSPredicate, PXNavigationListDataSectionManager, PXExtendedTraitCollection;

@interface PXNavigationListGadgetProvider : PXGadgetProvider <PXNavigationListDataSectionManagerObserver, PXPreferencesObserver>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection;
@property (retain, nonatomic) PXNavigationListDataSectionManager *dataSourceManager;
@property (readonly, nonatomic) BOOL isPresentedInPicker;
@property (readonly, nonatomic) BOOL isLimitedLibraryPicker;
@property (readonly, nonatomic) BOOL excludesHiddenAlbum;
@property (readonly, nonatomic) BOOL shouldShowNavigationListForDeviceAndLayoutClass;
@property (readonly, nonatomic) NSPredicate *assetsFilterPredicate;
@property (retain, nonatomic) NSNumber *hiddenAlbumVisibleCache;
@property (retain, nonatomic) NSNumber *contentPrivacyEnabledCache;
@property (nonatomic) BOOL backgroundFetchingIsActive;
@property (nonatomic) BOOL shouldShowNavigationListOnIpad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preferencesDidChange;
- (BOOL)_isContentPrivacyEnabled;
- (void)pauseLoadingRemainingData;
- (id)initWithIdentifier:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)loadDataForGadgets;
- (void)_initializeDataSourceManagerIfNeeded;
- (void)generateGadgets;
- (void)dealloc;
- (id)initWithType:(unsigned long long)a0 extendedTraitCollection:(id)a1 isPresentedInPicker:(BOOL)a2 isLimitedLibraryPicker:(BOOL)a3 assetsFilterPredicate:(id)a4 excludesHiddenAlbum:(BOOL)a5;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)_updateGadgets;
- (id)init;
- (BOOL)_shouldHiddenAlbumBeVisible;
- (void)_resetGadgets;
- (void)startLoadingRemainingData;
- (void).cxx_destruct;

@end
