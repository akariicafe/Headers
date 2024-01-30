@class NSIndexPath;

@interface SKUICarouselCollectionViewLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSIndexPath *startScrollingIndexPath;

+ (Class)layoutAttributesClass;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForTransitionToLayout:(id)a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })_collectionViewBoundsCenter;
- (void)_panGestureRecognized:(id)a0;

@end
