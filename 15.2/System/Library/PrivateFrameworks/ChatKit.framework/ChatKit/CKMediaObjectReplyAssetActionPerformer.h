@interface CKMediaObjectReplyAssetActionPerformer : CKMediaObjectAssetActionPerformer

+ (BOOL)canPerformWithActionManager:(id)a0 selectionSnapshot:(id)a1;
+ (BOOL)canPerformOnImplicitSelection;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;

- (void)performUserInteractionTask;

@end
