@class PUPhotoKitTrashActionPerformer, NSString;

@interface PUPhotoKitRemoveSharingSuggestionAssetActionPerformer : PUPXPhotoKitActionPerformerAdapter <PUAssetActionPerformerDelegate>

@property (retain, nonatomic) PUPhotoKitTrashActionPerformer *trashActionPerformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)pxActionPerformerClass;

- (BOOL)assetActionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)assetActionPerformer:(id)a0 presentViewController:(id)a1;
- (void)performUserInteractionTask;
- (id)undoManagerForAssetActionPerformer:(id)a0;
- (void).cxx_destruct;
- (void)_performTrashTask;
- (id)pxActionType;

@end
