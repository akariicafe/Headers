@interface PUPhotoKitFavoriteActionPerformer : PUPhotoKitActionPerformer

@property (nonatomic) BOOL favorite;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performBackgroundTask;

@end
