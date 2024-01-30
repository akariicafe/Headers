@class PUAssetActionManager, NSMapTable;

@interface PUJoiningAssetActionManager : PUAssetActionManager

@property (readonly, nonatomic) NSMapTable *_actionManagerByClass;
@property (retain, nonatomic, setter=_setActionManagerForNoAsset:) PUAssetActionManager *_actionManagerForNoAsset;

- (id)init;
- (void).cxx_destruct;
- (id)_actionManagerForAsset:(id)a0;
- (id)_actionManagerForAssets:(id)a0;
- (id)_actionManagerForAssetsByAssetCollection:(id)a0;
- (id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)a0 withNewStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)actionPerformerForSettingFavoriteTo:(BOOL)a0 onAssetsByAssetCollection:(id)a1;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetsByAssetCollection:(id)a1;
- (BOOL)canPerformAction:(unsigned long long)a0 onAllAssetsByAssetCollection:(id)a1;
- (BOOL)canPerformActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)a0;
- (void)registerActionManager:(id)a0 forAssetClass:(Class)a1;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAllAssetsByAssetCollection:(id)a1;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;

@end
