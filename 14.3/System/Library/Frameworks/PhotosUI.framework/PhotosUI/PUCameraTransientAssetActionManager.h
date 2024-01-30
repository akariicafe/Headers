@interface PUCameraTransientAssetActionManager : PUAssetActionManager

- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)a0;
- (BOOL)canPerformActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;

@end
