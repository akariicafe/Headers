@interface CACCorrectionsFlowLayout : UICollectionViewFlowLayout

+ (Class)layoutAttributesClass;

- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (double)_availableWidth;

@end
