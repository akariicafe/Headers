@class NSArray, PXPhotoKitAssetCollectionActionManager;

@interface PXPhotosGridActionMenuController : PXActionMenuController

@property (readonly, nonatomic) PXPhotoKitAssetCollectionActionManager *assetActionManager;
@property (readonly, nonatomic) PXPhotoKitAssetCollectionActionManager *assetCollectionActionManager;
@property (copy, nonatomic) NSArray *additionalActionTypes;

- (void).cxx_destruct;
- (id)initWithActionManagers:(id)a0;
- (id)initWithActionManagers:(id)a0 selectionManager:(id)a1;
- (id)_defaultActionTypes;
- (id)availableActionTypes;
- (BOOL)shouldAllowPerformanceOfActionType:(id)a0;

@end
