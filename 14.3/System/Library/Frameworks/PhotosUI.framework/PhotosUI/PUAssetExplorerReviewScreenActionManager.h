@class PUUUIDSelectionManager;
@protocol PUAssetExplorerReviewScreenActionManagerDelegate, PUReviewAssetProvider;

@interface PUAssetExplorerReviewScreenActionManager : PUAssetActionManager

@property (readonly, nonatomic) unsigned long long _sourceType;
@property (weak, nonatomic) id<PUAssetExplorerReviewScreenActionManagerDelegate> reviewScreenActionManagerDelegate;
@property (weak, nonatomic) id<PUReviewAssetProvider> reviewAssetProvider;
@property (readonly, nonatomic) PUUUIDSelectionManager *selectionManager;
@property (readonly, nonatomic) PUUUIDSelectionManager *disableLivePhotosSelectionManager;

- (id)initWithSourceType:(unsigned long long)a0;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (BOOL)canPerformActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetsByAssetCollection:(id)a1;
- (void).cxx_destruct;
- (Class)_actionPerformerClassForActionType:(unsigned long long)a0;
- (BOOL)_hasReviewScreenActionTypeForAssetActionType:(unsigned long long)a0;
- (unsigned long long)_reviewScreenActionTypeForAssetActionType:(unsigned long long)a0;

@end
