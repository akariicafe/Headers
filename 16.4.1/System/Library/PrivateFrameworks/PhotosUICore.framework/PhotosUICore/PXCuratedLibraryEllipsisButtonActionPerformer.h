@class PXGLayout, PXCuratedLibraryActionManager;
@protocol PXCuratedLibraryLayoutAssetCollectionReferenceProvider;

@interface PXCuratedLibraryEllipsisButtonActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

@property (readonly, nonatomic) PXCuratedLibraryActionManager *actionManager;
@property (readonly, nonatomic) id<PXCuratedLibraryLayoutAssetCollectionReferenceProvider> assetCollectionReferenceProvider;
@property (weak, nonatomic) PXGLayout *layout;

- (id)buttonSpriteReference;
- (void)performUserInteractionTask;
- (id)assetCollectionReference;
- (BOOL)performerResetsAfterCompletion;
- (BOOL)presentsMenu;
- (void)_presentToUserOptionsFromActionPerformers:(id)a0 forAssetCollectionReference:(id)a1;
- (id)initWithActionType:(id)a0 viewModel:(id)a1 assetCollectionReference:(id)a2;
- (id)initWithViewModel:(id)a0 assetCollectionReference:(id)a1 actionManager:(id)a2;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0 assetCollectionReferenceProvider:(id)a1 actionManager:(id)a2;

@end
