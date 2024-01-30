@class NSDictionary;

@interface PUPhotoKitRemoveFromFeaturedPhotosActionPerformer : PUPhotoKitActionPerformer

@property (retain, nonatomic) NSDictionary *assetToSuggestionMap;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void).cxx_destruct;
- (void)performBackgroundTask;

@end
