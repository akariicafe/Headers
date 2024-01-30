@class UIColor;

@interface SKUISwooshCollectionViewLayout : UICollectionViewFlowLayout

@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL snapsToItemBoundaries;
@property (nonatomic) BOOL snapsToItemCenters;

+ (Class)layoutAttributesClass;
+ (float)snapToBoundariesDecelerationRate;

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
