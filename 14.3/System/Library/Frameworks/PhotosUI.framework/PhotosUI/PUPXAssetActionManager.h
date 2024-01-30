@class PXAssetActionManager;

@interface PUPXAssetActionManager : PUAssetActionManager {
    PXAssetActionManager *_underlyingActionManager;
}

- (id)px_selectionManager;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (id)init;
- (BOOL)canPerformActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetsByAssetCollection:(id)a1;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetReferences:(id)a1;
- (void).cxx_destruct;
- (id)initWithUnderlyingActionManager:(id)a0;
- (id)_selectionSnapshotForAssetReferences:(id)a0;

@end
