@class PXSectionedSelectionManager, NSObject;
@protocol OS_os_log, PUAssetActionManagerDelegate;

@interface PUAssetActionManager : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *actionManagerLog;

@property (weak, nonatomic) id<PUAssetActionManagerDelegate> delegate;
@property (readonly, nonatomic) PXSectionedSelectionManager *px_selectionManager;

+ (void)setUnlockDeviceHandler:(id /* block */)a0;
+ (id /* block */)_unlockDeviceHandler;

- (id)barButtonItemForActionType:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)a0;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)a0 allowsRemove:(BOOL)a1;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetsByAssetCollection:(id)a1;
- (id)_assetsByAssetCollectionForAssetReferences:(id)a0;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetReferences:(id)a1;
- (id)actionPerformerForSettingFavoriteTo:(BOOL)a0 onAssetsByAssetCollection:(id)a1;
- (id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)a0 withNewStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)canPerformAction:(unsigned long long)a0 onAllAssetsByAssetCollection:(id)a1;
- (id)actionPerformerForRemoveAssetsFromFeaturedPhotosByAssetCollection:(id)a0 assetToSuggestionMap:(id)a1;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAllAssetsByAssetCollection:(id)a1;
- (BOOL)canPerformActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (BOOL)canPerformAction:(unsigned long long)a0 onAllAssetReferences:(id)a1;

@end
