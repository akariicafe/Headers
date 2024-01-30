@interface PUPXPhotoKitPasteAdjustmentsActionPerformer : PXPhotoKitAssetActionPerformer

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1;
+ (id)createPreviewActionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;
+ (BOOL)_canPasteOnAsset:(id)a0;
+ (id)newActivityProgressAlertForAction:(id)a0 assets:(id)a1;
+ (id)newEditActionForPerformer:(id)a0 class:(Class)a1 assets:(id)a2;
+ (id)newProgressToastForAction:(id)a0 assets:(id)a1;

- (void)performUserInteractionTask;

@end
