@interface PXPhotoKitAssetCollectionDropAssetsActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (id)dropAssetsActionPerformerForAssetCollection:(id)a0 dropSession:(id)a1;
+ (BOOL)canPerformActionType:(id)a0 onAssetCollectionReference:(id)a1 withInputs:(id)a2;

- (void)performUserInteractionTask;

@end
