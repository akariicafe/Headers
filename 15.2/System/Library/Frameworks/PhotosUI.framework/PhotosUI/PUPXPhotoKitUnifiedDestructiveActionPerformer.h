@interface PUPXPhotoKitUnifiedDestructiveActionPerformer : PXPhotoKitAssetActionPerformer

+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (id)_containedPerformerClasses;

- (void)performUserInteractionTask;
- (void)_handleActionPick:(id)a0 forPerformerClass:(Class)a1;
- (BOOL)_isDestructiveAction:(Class)a0;

@end
