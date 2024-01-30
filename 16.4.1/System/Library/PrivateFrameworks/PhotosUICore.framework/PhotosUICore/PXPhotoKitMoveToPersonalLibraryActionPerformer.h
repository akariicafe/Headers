@protocol PXFastEnumeration;

@interface PXPhotoKitMoveToPersonalLibraryActionPerformer : PXPhotoKitAssetActionPerformer

@property (retain, nonatomic) id<PXFastEnumeration> assetsToMove;

+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (void)_assetTypeCountsForAssets:(id)a0 photosCount:(long long *)a1 videosCount:(long long *)a2 othersCount:(long long *)a3;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1;
+ (id)createPreviewActionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (BOOL)canPresentAlertInBackgroudState;
- (void)_moveAssetsToPersonalLibraryWithCompletionHandler:(id /* block */)a0;
- (id)_multiContributorConfirmationAlertControllerForAssets:(id)a0 contributorName:(id)a1;
- (void)_presentFailureWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)performBackgroundTask;
- (BOOL)shouldExitSelectModeForState:(unsigned long long)a0;
- (BOOL)shouldShowConfirmation;

@end
