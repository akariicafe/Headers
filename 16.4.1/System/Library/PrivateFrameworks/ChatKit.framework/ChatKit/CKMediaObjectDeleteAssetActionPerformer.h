@interface CKMediaObjectDeleteAssetActionPerformer : CKMediaObjectAssetActionPerformer

+ (BOOL)canPerformOnImplicitSelection;
+ (BOOL)canPerformWithActionManager:(id)a0;
+ (id)createPreviewActionWithActionManager:(id)a0 handler:(id /* block */)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;

- (void)performUserInteractionTask;
- (void)_presentDeleteConfirmationDialogForTypedCount:(struct { unsigned long long x0; long long x1; })a0 completionHandler:(id /* block */)a1;

@end
