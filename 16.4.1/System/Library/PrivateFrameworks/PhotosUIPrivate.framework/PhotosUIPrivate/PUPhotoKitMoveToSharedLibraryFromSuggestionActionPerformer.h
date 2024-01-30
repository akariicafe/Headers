@interface PUPhotoKitMoveToSharedLibraryFromSuggestionActionPerformer : PUPXPhotoKitActionPerformerAdapter

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (Class)pxActionPerformerClass;

- (void)completeUserInteractionTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (id)pxActionType;

@end
