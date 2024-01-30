@interface PUPXPhotoKitUnifiedDestructiveActionPerformer : PXPhotoKitAssetActionPerformer

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (id)_containedPerformerClasses;

- (void)performUserInteractionTask;
- (void)_handleActionPick:(id)a0 forPerformerClass:(Class)a1;

@end
