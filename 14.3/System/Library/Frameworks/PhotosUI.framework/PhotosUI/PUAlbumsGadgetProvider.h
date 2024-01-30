@class PXPhotoKitCollectionsDataSourceManager, NSString, PUAlbumListCellContentViewHelper, PXExtendedTraitCollection;

@interface PUAlbumsGadgetProvider : PXGadgetProvider <PXCollectionsDataSourceManagerObserver, PXChangeObserver, PUAlbumGadgetDelegate, PUHorizontalAlbumListGadgetLayoutDelegate>

@property (nonatomic) unsigned long long currentDataSourceIdentifier;
@property (retain, nonatomic) PUAlbumListCellContentViewHelper *contentViewHelper;
@property (nonatomic) BOOL hasGeneratedGadgets;
@property (readonly, nonatomic) unsigned long long albumListType;
@property (readonly, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) BOOL shouldShowSeeAllAccessoryButton;
@property (readonly, nonatomic) NSString *seeAllAccessoryButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (void).cxx_destruct;
- (void)_reconfigureGadgets;
- (void)_updateDataSourceWithChangeDetails:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)gadgetForCollection:(id)a0;
- (id)albumListCellContentViewHelperForAlbum:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (Class)_albumGadgetClassForCollection:(id)a0;
- (void)pauseLoadingRemainingData;
- (id)albumListCellContentViewHelperForLayout:(id)a0;
- (id)initWithAlbumListType:(unsigned long long)a0 dataSourceManager:(id)a1 extendedTraitCollection:(id)a2;
- (void)loadDataForGadgets;
- (void)startLoadingRemainingData;
- (id)gadgetForIndexPath:(id)a0;
- (id)_newGadgetForCollection:(id)a0;

@end
