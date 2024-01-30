@interface PXPhotoKitMessagesAssetActionManager : PXPhotoKitAssetActionManager

+ (id)assetActionManagerWithCMMSession:(id)a0;

- (unsigned long long)presentationSource;
- (id)_selectionSnapshotForPerformerClass:(Class)a0 applySubsetIfNeeded:(BOOL)a1;
- (void)px_registerAdditionalPerformerClasses;

@end
