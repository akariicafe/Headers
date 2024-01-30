@interface PUCameraTransientAssetActionManager : PUAssetActionManager

- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)a0;
- (BOOL)canPerformActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;

@end
