@protocol PUVideoListAssetExpungeActionPerformerDelegate;

@interface PUVideoListAssetActionManager : PUPhotoKitAssetActionManager

@property (weak, nonatomic) id<PUVideoListAssetExpungeActionPerformerDelegate> actionPerformerDelegate;

- (void).cxx_destruct;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)a0;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetsByAssetCollection:(id)a1;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAllAssetsByAssetCollection:(id)a1;
- (BOOL)canPerformActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;

@end
