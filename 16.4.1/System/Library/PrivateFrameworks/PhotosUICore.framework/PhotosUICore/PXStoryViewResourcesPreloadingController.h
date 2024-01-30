@class PXStoryViewModel, PXStoryResourcesPreloadingCoordinator, NSMapTable;

@interface PXStoryViewResourcesPreloadingController : PXStoryController <PXStoryDiagnosticHUDContentProvider>

@property (readonly, nonatomic) PXStoryResourcesPreloadingCoordinator *resourcesPreloadingCoordinator;
@property (readonly, nonatomic) NSMapTable *resourcesPreloadingControllers;
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel;
@property (readonly, nonatomic) BOOL isActive;

- (id)initWithViewModel:(id)a0;
- (void)setIsActive:(BOOL)a0;
- (void).cxx_destruct;
- (void)_invalidateResourcesPreloadingControllers;
- (void)_updateResourcesPreloadingControllers;
- (void)configureUpdater:(id)a0;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;
- (void)handleModelChange:(unsigned long long)a0;
- (id)initWithObservableModel:(id)a0;
- (id)resourcesPreloadingControllerForModel:(id)a0;

@end
