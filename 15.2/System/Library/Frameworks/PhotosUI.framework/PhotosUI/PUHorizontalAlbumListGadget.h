@class PUPhotoPinchGestureRecognizer, NSUserActivity, PUAlbumListViewControllerSpec, PUAlbumsGadgetProvider, PUSessionInfo, NSString;

@interface PUHorizontalAlbumListGadget : PXHorizontalCollectionGadget <PUStackedAlbumTransitionDelegate, PUCloudSharedAlbumViewControllerDelegate, PXAssetCollectionActionPerformerDelegate, PXNavigableCollectionContainer>

@property (readonly, nonatomic) PUPhotoPinchGestureRecognizer *pinchGestureRecognizer;
@property (readonly, nonatomic) PUAlbumListViewControllerSpec *albumListViewControllerSpec;
@property (retain, nonatomic) NSUserActivity *siriActionActivity;
@property (nonatomic) BOOL shouldUseSingleHeightLayout;
@property (readonly, nonatomic) PUAlbumsGadgetProvider *provider;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_showsHorizontalScrollIndicator;

- (id)px_gridPresentation;
- (void)setGadgetSpec:(id)a0;
- (unsigned long long)gadgetCapabilities;
- (BOOL)collectionView:(id)a0 shouldSpringLoadItemAtIndexPath:(id)a1 withContext:(id)a2;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)_handlePinch:(id)a0;
- (void)viewDidLoad;
- (unsigned long long)gadgetType;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (BOOL)canNavigateToCollection:(id)a0;
- (void)_navigateToCollection:(id)a0 animated:(BOOL)a1 interactive:(BOOL)a2 completion:(id /* block */)a3;
- (id)stackedAlbumTransition:(id)a0 layoutForCollection:(id)a1 forCollectionView:(id)a2;
- (void)stackedAlbumTransition:(id)a0 setVisibility:(BOOL)a1 forCollection:(id)a2;
- (BOOL)_canUseStackedAlbumTransitionToNavigationToCollection:(id)a0;
- (id)initWithAlbumsGadgetProvider:(id)a0;
- (id)accessoryButtonTitle;
- (void)_updateCollectionViewLayout;
- (void).cxx_destruct;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (id)stackedAlbumTransition:(id)a0 layoutForPHCollection:(id)a1 forCollectionView:(id)a2;
- (void)sharedAlbumDeletedBySharedAlbumViewController:(id)a0;
- (void)navigateToCollection:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)init;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (unsigned long long)accessoryButtonType;
- (void)_updateCollectionHeight;
- (void)stackedAlbumTransition:(id)a0 setVisibility:(BOOL)a1 forPHCollection:(id)a2;

@end
