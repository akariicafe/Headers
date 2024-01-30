@protocol VideosExtrasCarouselCollectionViewDelegate;

@interface VideosExtrasCarouselCollectionView : UICollectionView

@property (weak, nonatomic) id<VideosExtrasCarouselCollectionViewDelegate> carouselCollectionViewDelegate;

- (void)didAddSubview:(id)a0;
- (void).cxx_destruct;

@end
