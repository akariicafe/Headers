@class UICollectionViewTransitionLayout, PUPhotoDecoration, NSIndexPath, PHCollection;
@protocol PLAssetContainer;

@interface PUAlbumListTransitionContext : NSObject

@property (retain, nonatomic) id<PLAssetContainer> collection;
@property (retain, nonatomic) PHCollection *phCollection;
@property (retain, nonatomic) NSIndexPath *keyItemIndexPath;
@property (retain, nonatomic) PUPhotoDecoration *photoDecoration;
@property (nonatomic) BOOL usesContentOffsetAutoAdjust;
@property (retain, nonatomic) UICollectionViewTransitionLayout *transitionLayout;

- (void).cxx_destruct;

@end
