@class PXAssetActionManager;

@interface PUPXAssetActionManager : PUAssetActionManager {
    PXAssetActionManager *_underlyingActionManager;
}

- (id)barButtonItemForActionType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetsByAssetCollection:(id)a1;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetReferences:(id)a1;
- (id)px_selectionManager;
- (BOOL)canPerformActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (id)initWithUnderlyingActionManager:(id)a0;
- (id)_selectionSnapshotForAssetReferences:(id)a0;

@end
