@class CKMediaObjectAssetActionManager, PXCMMSession;

@interface CKCMMAssetActionManager : PXPhotoKitAssetActionManager

@property (retain, nonatomic) CKMediaObjectAssetActionManager *messagesAssetActionManager;
@property (retain, nonatomic) id photosAssetActionManager;
@property (retain, nonatomic) PXCMMSession *session;

+ (id)assetActionManagerWithCMMSession:(id)a0 chatItem:(id)a1 chatActionHelper:(id)a2 performerDelegate:(id)a3;

- (unsigned long long)presentationSource;
- (void)_propagateObjectReference:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (id)barButtonItemForActionType:(id)a0;
- (BOOL)canPerformActionType:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsActionType:(id)a0;
- (void)setPerformerDelegate:(id)a0;
- (void)executeActionForActionType:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)previewActionForActionType:(id)a0 image:(id)a1;
- (void)setObjectReference:(id)a0;
- (void)_propagatePerformerDelegate:(id)a0;
- (id)_destinationActionManagerForActionType:(id)a0;
- (BOOL)shouldEnableActionType:(id)a0 onAsset:(id)a1;
- (void)setAdditionalPropertiesFromActionManager:(id)a0;

@end
