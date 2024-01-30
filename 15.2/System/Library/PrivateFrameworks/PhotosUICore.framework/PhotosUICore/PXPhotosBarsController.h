@class NSMapTable, PXAssetSelectionTypeCounter, PXPhotosGridActionMenuController, PXPhotosBarButtonItemsController, PXPhotosContentController, NSArray, NSString, PXPhotosViewModel, PLDateRangeFormatter, PXActionPerformer, PXMoviePresenter;
@protocol PXPhotosBarsControllerDelegate;

@interface PXPhotosBarsController : PXBarsController <PXChangeObserver, PXActionPerformerDelegate, PXPhotosGridActionPerformerDelegate, PXPhotosGridOptionsControllerDelegate, PXAssetCollectionActionPerformerDelegate, PXSettingsKeyObserver>

@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, weak, nonatomic) PXPhotosContentController *contentController;
@property (readonly, nonatomic) PXAssetSelectionTypeCounter *assetTypeCounter;
@property (readonly, nonatomic) PXPhotosBarButtonItemsController *barButtonItemsController;
@property (retain, nonatomic) NSArray *leftBarButtonItemIdentifiers;
@property (retain, nonatomic) NSArray *rightBarButtonItemIdentifiers;
@property (retain, nonatomic) NSArray *toolbarItemIdentifiers;
@property (retain, nonatomic) PXActionPerformer *activeActionPerformer;
@property (retain, nonatomic) PXActionPerformer *lastActionPerformer;
@property (retain, nonatomic) PXPhotosGridActionMenuController *menuController;
@property (retain, nonatomic) PXMoviePresenter *moviePresenter;
@property (readonly, nonatomic) NSMapTable *actionTypeByBarButtonItem;
@property (retain, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) double interButtonSpacing;
@property (nonatomic) double endButtonSpacing;
@property (readonly, nonatomic) PLDateRangeFormatter *dateRangeFormatter;
@property (weak, nonatomic) id<PXPhotosBarsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)didChangeActionPerformerTypeForOptionsController:(id)a0;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)viewControllerDidChange;
- (void)assetCollectionActionPerformer:(id)a0 playMovieForAssetCollection:(id)a1;
- (void)_handleActionTypeBarButtonItem:(id)a0;
- (id)createBarButtonItemForIdentifier:(id)a0 placement:(unsigned long long)a1;
- (BOOL)_actionPerformer:(id)a0 presentViewController:(id)a1;
- (void)handleActionMenuBarButtonItem:(id)a0;
- (void)handleSelectAllBarButtonItem:(id)a0;
- (void)handleSelectBarButtonItem:(id)a0;
- (id)createActionMenuController;
- (void)handleAddButtonItem:(id)a0;
- (void)_reloadOptionsButton;
- (id)hostViewControllerForActionPerformer:(id)a0;
- (id)_identifierForActionType:(id)a0;
- (id)barAppearance;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (id)init;
- (double)fixedSpaceForInterButtonSpacing;
- (double)fixedSpaceForEndButtonSpacing;
- (void)handleCancelBarButtonItem:(id)a0;
- (void)photosGridActionPerformer:(id)a0 contentFilterStateChanged:(id)a1;
- (void)updateBars;
- (id)createAssetActionManagerForAssetReference:(id)a0;
- (id)initWithPhotosContentController:(id)a0;
- (void)handleInfoButton:(id)a0;
- (void)didChangeSystemItemForOptionsController:(id)a0;
- (BOOL)actionPerformer:(id)a0 transitionToViewController:(id)a1 transitionType:(long long)a2;
- (void)handleDeselectAllBarButtonItem:(id)a0;
- (void)handleDismissButton:(id)a0;
- (id)existingBarItemForIdentifier:(id)a0;

@end
