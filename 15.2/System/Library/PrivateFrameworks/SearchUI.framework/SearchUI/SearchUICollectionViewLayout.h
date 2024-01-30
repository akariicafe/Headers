@class NSSet;

@interface SearchUICollectionViewLayout : UICollectionViewCompositionalLayout

@property (retain, nonatomic) NSSet *sectionIndexesForHeightMatching;

+ (Class)layoutAttributesClass;
+ (void)applyForcedHeightToAttributes:(id)a0 height:(double)a1;

- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
