@class PXPhotoKitAdjustedUIMediaProvider, PXForYouSuggestionDisplayAsset;
@protocol PUForYouSuggestionActionPerformerDelegate;

@interface PUForYouSuggestionActionPerformer : PUAssetActionPerformer

@property (readonly, nonatomic) PXForYouSuggestionDisplayAsset *asset;
@property (readonly, nonatomic) PXPhotoKitAdjustedUIMediaProvider *mediaProvider;
@property (weak, nonatomic) id<PUForYouSuggestionActionPerformerDelegate> statusDelegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;

@end
