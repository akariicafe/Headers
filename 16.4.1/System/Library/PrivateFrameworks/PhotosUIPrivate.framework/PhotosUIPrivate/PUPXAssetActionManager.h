@class PXAssetActionManager;

@interface PUPXAssetActionManager : PUAssetActionManager {
    PXAssetActionManager *_underlyingActionManager;
}

- (id)barButtonItemForActionType:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)localizedTitleForActionType:(unsigned long long)a0;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)a0 allowsRemove:(BOOL)a1;
- (id)_selectionSnapshotForAssetReferences:(id)a0;
- (id)actionPerformerForSettingFavoriteTo:(BOOL)a0 onAssetReferences:(id)a1;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetReferences:(id)a1;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetsByAssetCollection:(id)a1;
- (BOOL)canPerformActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (id)initWithUnderlyingActionManager:(id)a0;
- (id)px_selectionManager;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;

@end
