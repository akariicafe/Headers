@class PXPhotoKitCollectionsDataSourceManager, PXPhotoKitUIMediaProvider, NSString, PUAlbumListCellContentViewHelper, PXExtendedTraitCollection;

@interface PUAlbumsGadgetProvider : PXGadgetProvider <PXCollectionsDataSourceManagerObserver, PXChangeObserver, PUAlbumGadgetDelegate, PXAssetCollectionActionPerformerDelegate, PUHorizontalAlbumListGadgetLayoutDelegate>

@property (nonatomic) long long currentDataSourceIdentifier;
@property (retain, nonatomic) PUAlbumListCellContentViewHelper *contentViewHelper;
@property (retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider;
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

- (id)presentationEnvironmentForActionPerformer:(id)a0;
- (id)hostViewControllerForActionPerformer:(id)a0;
- (id)undoManagerForActionPerformer:(id)a0;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)pauseLoadingRemainingData;
- (id)gadgetHostingViewController;
- (id)initWithIdentifier:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)loadDataForGadgets;
- (id)gadgetForCollection:(id)a0;
- (void)_reconfigureGadgets;
- (id)gadgetForIndexPath:(id)a0;
- (Class)_albumGadgetClassForCollection:(id)a0;
- (id)albumListCellContentViewHelperForLayout:(id)a0;
- (void)generateGadgets;
- (void)assetCollectionActionPerformer:(id)a0 playMovieForAssetCollection:(id)a1;
- (id)initWithAlbumListType:(unsigned long long)a0 dataSourceManager:(id)a1 extendedTraitCollection:(id)a2;
- (BOOL)actionPerformer:(id)a0 transitionToViewController:(id)a1 transitionType:(long long)a2;
- (id)albumListCellContentViewHelperForAlbum:(id)a0;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)_updateDataSourceWithChangeDetails:(id)a0;
- (id)init;
- (id)actionPerformerDelegateForAlbum:(id)a0;
- (void)startLoadingRemainingData;
- (id)_newGadgetForCollection:(id)a0;
- (void).cxx_destruct;

@end
