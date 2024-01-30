@class NSArray;

@interface PXPhotoKitMoveToSharedLibraryActionPerformer : PXPhotoKitAssetActionPerformer {
    NSArray *_assetsToMove;
}

+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)_canPerformWithHasSharedLibraryOrPreview:(BOOL)a0 isExitingSharedLibrary:(BOOL)a1 collectionAllowsMoveToSharedLibrary:(BOOL)a2 isUnsavedSyndicatedAsset:(BOOL)a3 canMoveAssetsToSharedLibrary:(BOOL)a4;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (id)createPreviewActionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (BOOL)canPresentAlertInBackgroudState;
- (void)_moveAssetsToSharedLibraryWithCompletionHandler:(id /* block */)a0;
- (void)_presentFailureWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)performBackgroundTask;

@end
