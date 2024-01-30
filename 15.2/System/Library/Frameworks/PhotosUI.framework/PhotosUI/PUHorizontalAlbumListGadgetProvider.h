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

- (id)initWithIdentifier:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_accountStoreDidChange:(id)a0;
- (void)startLoadingRemainingData;
- (id)_peoplePlacesAndMediaTypesConfiguration;
- (id)_newConfiguration;
- (id)initWithType:(unsigned long long)a0 extendedTraitCollection:(id)a1 sessionInfo:(id)a2;
- (void)_resetGadgets;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)pauseLoadingRemainingData;
- (id)_fromMyMacConfiguration;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)_seeAllViewController;
- (void)_handleDataSourceChange;
- (BOOL)_canProvideGadgets;
- (void)generateGadgets;

@end
