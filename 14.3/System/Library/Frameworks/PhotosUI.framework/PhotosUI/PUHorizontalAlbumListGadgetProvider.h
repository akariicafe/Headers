@class PXPhotoKitCollectionsDataSourceManager, PUAlbumsGadgetProvider, NSString, PUSessionInfo, PXExtendedTraitCollection;

@interface PUHorizontalAlbumListGadgetProvider : PXGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXCollectionsDataSourceManagerObserver>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection;
@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PUAlbumsGadgetProvider *albumsGadgetProvider;
@property (readonly, nonatomic) NSString *title;
@property (readonly) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_accountStoreDidChange:(id)a0;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)_seeAllViewController;
- (void)generateGadgets;
- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 extendedTraitCollection:(id)a1 sessionInfo:(id)a2;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithIdentifier:(id)a0;
- (void)pauseLoadingRemainingData;
- (id)_peoplePlacesAndMediaTypesConfiguration;
- (id)_fromMyMacConfiguration;
- (BOOL)_canProvideGadgets;
- (id)_newConfiguration;
- (void)_resetGadgets;
- (void)_handleDataSourceChange;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)loadDataForGadgets;
- (void)startLoadingRemainingData;

@end
