@interface PXPhotoKitAssetCollectionDropAssetsActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (BOOL)canPerformActionType:(id)a0 onAssetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)dropAssetsActionPerformerForAssetCollection:(id)a0 dropSession:(id)a1;

- (void)performUserInteractionTask;

@end
