@interface PXFileBackedAssetAddToLibraryActionPerformer : PXFileBackedAssetActionPerformer

+ (BOOL)canPerformOnImplicitSelection;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0;

- (void)performUserInteractionTask;
- (void)_completeSaveWithSuccess:(BOOL)a0 error:(id)a1;

@end
