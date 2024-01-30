@interface CKMediaObjectDeleteAssetActionPerformer : CKMediaObjectAssetActionPerformer

+ (BOOL)canPerformOnImplicitSelection;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformWithActionManager:(id)a0;
+ (id)createPreviewActionWithActionManager:(id)a0 handler:(id /* block */)a1;

- (void)_presentDeleteConfirmationDialogForTypedCount:(struct { unsigned long long x0; long long x1; })a0 completionHandler:(id /* block */)a1;
- (void)performUserInteractionTask;

@end
