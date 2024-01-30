@class PXPhotoKitAdjustedUIMediaProvider, PXForYouSuggestionDisplayAsset;
@protocol PUForYouSuggestionActionPerformerDelegate;

@interface PUForYouSuggestionActionPerformer : PUAssetActionPerformer

@property (readonly, nonatomic) PXForYouSuggestionDisplayAsset *asset;
@property (readonly, nonatomic) PXPhotoKitAdjustedUIMediaProvider *mediaProvider;
@property (weak, nonatomic) id<PUForYouSuggestionActionPerformerDelegate> statusDelegate;

- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
