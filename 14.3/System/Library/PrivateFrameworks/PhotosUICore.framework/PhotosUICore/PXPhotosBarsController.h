@class PXAssetSelectionTypeCounter, PXPhotosGridActionMenuController, PXPhotosUIViewController, PXPhotosBarButtonItemsController, NSArray, NSString, PXPhotosViewModel, PLDateRangeFormatter, PXMiroMoviePresenter, PXActionPerformer, NSMapTable;

@interface PXPhotosBarsController : PXBarsController <PXChangeObserver, PXActionPerformerDelegate, PXPhotosGridActionPerformerDelegate, PXPhotosGridOptionsControllerDelegate, PXAssetCollectionActionPerformerDelegate, PXSettingsKeyObserver>

@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) PXPhotosUIViewController *photosViewController;
@property (readonly, nonatomic) PXAssetSelectionTypeCounter *assetTypeCounter;
@property (readonly, nonatomic) PXPhotosBarButtonItemsController *barButtonItemsController;
@property (retain, nonatomic) NSArray *leftBarButtonItemIdentifiers;
@property (retain, nonatomic) NSArray *rightBarButtonItemIdentifiers;
@property (retain, nonatomic) NSArray *toolbarItemIdentifiers;
@property (retain, nonatomic) PXActionPerformer *activeActionPerformer;
@property (retain, nonatomic) PXActionPerformer *lastActionPerformer;
@property (retain, nonatomic) PXPhotosGridActionMenuController *menuController;
@property (retain, nonatomic) PXMiroMoviePresenter *miroMoviePresenter;
@property (readonly, nonatomic) NSMapTable *actionTypeByBarButtonItem;
@property (retain, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) double interButtonSpacing;
@property (nonatomic) double endButtonSpacing;
@property (readonly, nonatomic) PLDateRangeFormatter *dateRangeFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBars;
- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (void)handleActionMenuBarButtonItem:(id)a0;
- (double)fixedSpaceForEndButtonSpacing;
- (id)createAssetActionManagerForAssetReference:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)createBarButtonItemForIdentifier:(id)a0 placement:(unsigned long long)a1;
- (id)_identifierForActionType:(id)a0;
- (BOOL)_actionPerformer:(id)a0 presentViewController:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didChangeActionPerformerTypeForOptionsController:(id)a0;
- (BOOL)actionPerformer:(id)a0 transitionToViewController:(id)a1 transitionType:(long long)a2;
- (void)assetCollectionActionPerformer:(id)a0 playMovieForAssetCollection:(id)a1;
- (void)photosGridActionPerformer:(id)a0 filterStateChanged:(id)a1;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleSelectBarButtonItem:(id)a0;
- (id)initWithPhotosViewController:(id)a0 viewModel:(id)a1;
- (double)fixedSpaceForInterButtonSpacing;
- (void)handleSelectAllBarButtonItem:(id)a0;
- (void)didChangeSystemItemForOptionsController:(id)a0;
- (void)handleCancelBarButtonItem:(id)a0;
- (id)hostViewControllerForActionPerformer:(id)a0;
- (void)handleDeselectAllBarButtonItem:(id)a0;
- (void)_handleActionTypeBarButtonItem:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_reloadOptionsButton;
- (void)handleAddButtonItem:(id)a0;
- (id)barAppearance;

@end
