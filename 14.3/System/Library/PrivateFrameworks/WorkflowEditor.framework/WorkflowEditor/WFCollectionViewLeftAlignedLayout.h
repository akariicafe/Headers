@class NSMutableDictionary;

@interface WFCollectionViewLeftAlignedLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSMutableDictionary *frameCache;
@property (retain, nonatomic) NSMutableDictionary *sectionInsetCache;

- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (double)minimumInteritemSpacingForSectionAtIndex:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetForItemAtIndex:(long long)a0;
- (id)leftAlignedAttributesForAttribute:(id)a0 sectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
