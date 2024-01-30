@class PXStoryConfiguration, PXStoryModel, NSProgress, PXStoryRecipeAssetEdits, NSError, PXStoryPersistableRecipeManager;
@protocol PXStoryErrorReporter, PXStoryPersistableRecipeWriter, PFStoryRecipe;

@interface PXStoryPersistenceController : PXStoryController <PXStoryDiagnosticHUDContentProvider>

@property (retain, nonatomic) PXStoryConfiguration *configuration;
@property (readonly, nonatomic) id<PXStoryErrorReporter> errorReporter;
@property (retain, nonatomic) PXStoryPersistableRecipeManager *persistableRecipeManager;
@property (retain, nonatomic) id<PFStoryRecipe> persistableRecipe;
@property (retain, nonatomic) PXStoryRecipeAssetEdits *recipeAssetEdits;
@property (readonly, nonatomic) id<PXStoryPersistableRecipeWriter> writer;
@property (retain, nonatomic) NSProgress *writerProgress;
@property (nonatomic) BOOL persisted;
@property (retain, nonatomic) NSError *error;
@property (readonly, weak, nonatomic) PXStoryModel *model;
@property (readonly, nonatomic) BOOL isActive;

- (void)setIsActive:(BOOL)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithModel:(id)a0;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (id)initWithObservableModel:(id)a0;
- (void)configureUpdater:(id)a0;
- (void)_ensureWriter;
- (void)_invalidatePersistableRecipeManager;
- (void)_updatePersistableRecipeManager;
- (void)_invalidatePersistableRecipe;
- (void)_updatePersistableRecipe;
- (void)_invalidateRecipeAssetEdits;
- (void)_updateRecipeAssetEdits;
- (void)_invalidateWrite;
- (void)_updateWrite;
- (void)_handleWriteSuccess:(BOOL)a0 createdAssetCollection:(id)a1 error:(id)a2 forPersistableRecipe:(id)a3 recipeAssetEdits:(id)a4;

@end
