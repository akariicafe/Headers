@class UICollectionViewLayoutAttributes;

@interface AVTEdgeDisappearingCollectionViewLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) UICollectionViewLayoutAttributes *fixedHeaderLayoutAttributes;
@property (nonatomic) BOOL enableEdgeDisappearing;
@property (nonatomic) BOOL pinHeaderToVisible;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isRTL;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)modifyLayoutAttributes:(id)a0;

@end
