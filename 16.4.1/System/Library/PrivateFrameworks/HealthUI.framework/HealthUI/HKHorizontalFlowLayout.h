@interface HKHorizontalFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) BOOL snapsToItemBoundaries;
@property (nonatomic) BOOL snapsToItemCenters;
@property (nonatomic) double leadingInset;
@property (nonatomic) double trailingInset;

+ (double)snapToBoundariesDecelerationRate;

- (id)init;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
