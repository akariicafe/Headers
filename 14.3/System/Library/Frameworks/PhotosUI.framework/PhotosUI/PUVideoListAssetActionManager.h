@protocol PUVideoListAssetExpungeActionPerformerDelegate;

@interface PUVideoListAssetActionManager : PUPhotoKitAssetActionManager

@property (retain, nonatomic) id<PUVideoListAssetExpungeActionPerformerDelegate> actionPerformerDelegate;

- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)a0;
- (BOOL)canPerformActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetsByAssetCollection:(id)a1;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAllAssetsByAssetCollection:(id)a1;
- (void).cxx_destruct;

@end
