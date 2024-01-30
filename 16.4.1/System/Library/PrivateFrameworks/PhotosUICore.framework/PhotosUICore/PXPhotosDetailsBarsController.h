@class NSMutableDictionary, PXBarAppearance, PXAssetCollectionActionManager, PXAssetActionManager, PXPhotoDetailsActionMenuController, UIView, PXExtendedTraitCollection, PXPhotosDetailsBarSpec, NSString, PXPhotosDetailsContext, PXActionPerformer, PXPhotosDetailsUIViewController, PXSectionedSelectionManager, PXPhotosDataSource, PXPhotosDetailsViewModel;

@interface PXPhotosDetailsBarsController : PXBarsController <PXPhotosDataSourceChangeObserver, PXChangeObserver, PXAssetCollectionActionPerformerDelegate, PXPhotosDetailsActionMenuDelegate, UIPopoverPresentationControllerDelegate> {
    struct { BOOL assetActionManager; BOOL assetCollectionActionManager; } _needsUpdateFlags;
}

@property (retain, nonatomic, setter=_setBarAppearance:) PXBarAppearance *_barAppearance;
@property (readonly, nonatomic) PXPhotosDetailsViewModel *_viewModel;
@property (retain, nonatomic, setter=_setSelectionManager:) PXSectionedSelectionManager *_selectionManager;
@property (readonly, nonatomic) PXAssetCollectionActionManager *_assetCollectionActionManager;
@property (readonly, nonatomic) PXAssetActionManager *_assetActionManager;
@property (retain, nonatomic, setter=_setActivePerformer:) PXActionPerformer *_activePerformer;
@property (weak, nonatomic, setter=_setLastActionPerformer:) PXActionPerformer *_lastActionPerformer;
@property (retain, nonatomic) PXPhotoDetailsActionMenuController *_activeMenuController;
@property (readonly, nonatomic) UIView *_titleView;
@property (nonatomic, setter=_setShowTitleView:) BOOL _showTitleView;
@property (readonly, nonatomic) PXPhotosDetailsContext *_context;
@property (readonly, nonatomic) PXPhotosDataSource *_dataSource;
@property (readonly, nonatomic) PXExtendedTraitCollection *_extendedTraitCollection;
@property (readonly, nonatomic) NSMutableDictionary *_barButtonItemByActionType;
@property (readonly, nonatomic) NSMutableDictionary *_barButtonItemCacheByBarItemIdentifier;
@property (nonatomic) BOOL shouldAddActionButton;
@property (retain, nonatomic) PXPhotosDetailsBarSpec *barSpec;
@property (weak, nonatomic) PXPhotosDetailsUIViewController *viewController;
@property (nonatomic) BOOL topTrailingSelectCancelButtonVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)photosDataSource:(id)a0 didChange:(id)a1;
- (id)undoManagerForActionPerformer:(id)a0;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)prepareForPopoverPresentation:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateAssetActionManager;
- (id)_flexibleSpaceBarButtonItem;
- (void)updateBars;
- (void)_invalidateAssetCollectionActionManager;
- (id)init;
- (void).cxx_destruct;
- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (id)_assetCollection;
- (id)createTitleView;
- (id)_barButtonItemForBarItemIdentifier:(id)a0;
- (id)_barButtonItemsForBarItems:(id)a0 placement:(unsigned long long)a1;
- (id)_centeredBarButtonItem;
- (id)_configureActionMenuButton;
- (BOOL)_dismissViewControllerIfSafeAnimated:(BOOL)a0;
- (id)_localizedSelectionTitle;
- (BOOL)_shouldAddBarItemForBarItemIdentifier:(id)a0;
- (BOOL)_shouldEnableActionWithBarItemIdentifier:(id)a0;
- (id)_sourceBarButtonItemForActionType:(id)a0;
- (long long)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)a0;
- (void)_updateTitleViewAlpha;
- (void)actionMenu:(id)a0 actionPerformer:(id)a1 didChangeState:(unsigned long long)a2;
- (BOOL)actionMenu:(id)a0 actionPerformer:(id)a1 dismissViewController:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)actionMenu:(id)a0 actionPerformer:(id)a1 presentViewController:(id)a2;
- (void)actionMenu:(id)a0 assetCollectionActionPerformer:(id)a1 playMovieForAssetCollection:(id)a2;
- (void)actionMenuButtonItemTapped:(id)a0;
- (void)cancelBarButtonItemTapped:(id)a0;
- (id)createAssetActionManager;
- (id)createAssetCollectionActionManager;
- (void)doneBarButtonItemTapped:(id)a0;
- (void)faceModeButtonItemTapped:(id)a0;
- (id)initWithContext:(id)a0 viewModel:(id)a1 extendedTraitCollection:(id)a2;
- (void)removeActionButton;
- (void)selectBarButtonItemTapped:(id)a0;
- (void)setTopTrailingSelectCancelButtonVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)shouldShowTitleView:(BOOL)a0 animated:(BOOL)a1;
- (id)undoManagerForActionMenuController:(id)a0;

@end
