@class NSString, PXActionPerformer, UILabel, PXCuratedLibraryViewModel, PXBarAppearance;

@interface PXCuratedLibraryBarsController : PXBarsController <PXChangeObserver, PXActionPerformerDelegate>

@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly, nonatomic) PXBarAppearance *barAppearance;
@property (readonly, nonatomic) UILabel *selectModeCaptionLabel;
@property (retain, nonatomic) PXActionPerformer *activeActionPerformer;
@property (retain, nonatomic) PXActionPerformer *lastActionPerformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBars;
- (id)curatedLibraryViewController;
- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (id)createAssetActionManagerForAssetReference:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)createBarButtonItemForIdentifier:(id)a0 placement:(unsigned long long)a1;
- (id)_identifierForActionType:(id)a0;
- (void)_invalidateToolbarItems;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateSelectModeCaptionLabel;
- (id)toolbarItemIdentifiers;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleSelectBarButtonItem:(id)a0;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (id)initWithCuratedLibraryViewController:(id)a0 viewModel:(id)a1;
- (void)_applyZoomLevel:(long long)a0;
- (id)_defaultToolbarItemIdentifiers;
- (void)handleCancelBarButtonItem:(id)a0;
- (id)rightBarButtonItemIdentifiers;

@end
