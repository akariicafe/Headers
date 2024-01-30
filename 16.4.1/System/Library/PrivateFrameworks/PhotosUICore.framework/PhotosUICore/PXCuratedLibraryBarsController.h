@class UIButton, NSString, PXActionPerformer, UILabel, PXCuratedLibraryViewModel, PXBarAppearance;

@interface PXCuratedLibraryBarsController : PXBarsController <PXChangeObserver, PXActionPerformerDelegate>

@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly, nonatomic) PXBarAppearance *barAppearance;
@property (readonly, nonatomic) UILabel *selectModeCaptionLabel;
@property (readonly, nonatomic) UIButton *selectModeChevronButton;
@property (retain, nonatomic) PXActionPerformer *activeActionPerformer;
@property (retain, nonatomic) PXActionPerformer *lastActionPerformer;
@property (nonatomic) double interbuttonSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)presentationEnvironmentForActionPerformer:(id)a0;
- (id)hostViewControllerForActionPerformer:(id)a0;
- (id)undoManagerForActionPerformer:(id)a0;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (id)initWithCuratedLibraryViewController:(id)a0 viewModel:(id)a1;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (id)curatedLibraryViewController;
- (id)progressToastViewControllerForActionPerformer:(id)a0;
- (void)_updateSelectModeCaption;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)_defaultToolbarItemIdentifiers;
- (id)_selectionModeIdentifier;
- (void)_invalidateToolbarItems;
- (void)handleCancelBarButtonItem:(id)a0;
- (void)_applyZoomLevel:(long long)a0;
- (void)handleSelectBarButtonItem:(id)a0;
- (id)toolbarItemIdentifiers;
- (void)updateBars;
- (id)init;
- (id)_identifierForActionType:(id)a0;
- (id)rightBarButtonItemIdentifiers;
- (double)fixedSpaceForInterButtonSpacing;
- (id)createBarButtonItemForIdentifier:(id)a0 placement:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)createAssetActionManagerForAssetReference:(id)a0;
- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (double)progressToastPaddingForActionPerformer:(id)a0;

@end
