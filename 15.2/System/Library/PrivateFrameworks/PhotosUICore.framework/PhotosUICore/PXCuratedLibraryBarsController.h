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

- (id)toolbarItemIdentifiers;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (id)_defaultToolbarItemIdentifiers;
- (id)initWithCuratedLibraryViewController:(id)a0 viewModel:(id)a1;
- (id)createBarButtonItemForIdentifier:(id)a0 placement:(unsigned long long)a1;
- (void)_invalidateToolbarItems;
- (id)rightBarButtonItemIdentifiers;
- (void)handleSelectBarButtonItem:(id)a0;
- (id)_identifierForActionType:(id)a0;
- (void).cxx_destruct;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (id)init;
- (void)_applyZoomLevel:(long long)a0;
- (void)handleCancelBarButtonItem:(id)a0;
- (void)updateBars;
- (id)createAssetActionManagerForAssetReference:(id)a0;
- (id)curatedLibraryViewController;
- (void)_updateSelectModeCaptionLabel;

@end
