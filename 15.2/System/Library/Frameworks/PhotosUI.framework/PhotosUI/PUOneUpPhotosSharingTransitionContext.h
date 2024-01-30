@class PUAssetReference;

@interface PUOneUpPhotosSharingTransitionContext : PUPhotosSharingTransitionContext

@property (retain, nonatomic) PUAssetReference *currentAssetReference;

- (void).cxx_destruct;
- (id)keyAssetIndexPath;

@end
