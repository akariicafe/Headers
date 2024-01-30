@class PXGLayout, PXCuratedLibraryActionManager;

@interface PXCuratedLibraryEllipsisButtonActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

@property (readonly, nonatomic) PXCuratedLibraryActionManager *actionManager;
@property (weak, nonatomic) PXGLayout *layout;

- (id)initWithActionType:(id)a0 viewModel:(id)a1 assetCollectionReference:(id)a2;
- (BOOL)performerResetsAfterCompletion;
- (void).cxx_destruct;
- (void)_presentToUserOptionsFromActionPerformers:(id)a0 forAssetCollectionReference:(id)a1;
- (id)initWithViewModel:(id)a0 assetCollectionReference:(id)a1 actionManager:(id)a2;
- (BOOL)presentsMenu;
- (void)performUserInteractionTask;
- (id)buttonSpriteReference;

@end
