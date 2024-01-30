@class NSSet;
@protocol SearchUICollectionViewSizingDelegate;

@interface SearchUICollectionViewLayout : UICollectionViewCompositionalLayout

@property (retain, nonatomic) NSSet *sectionIndexesForHeightMatching;
@property (weak, nonatomic) id<SearchUICollectionViewSizingDelegate> sizingDelegate;

+ (void)applyForcedHeightToAttributes:(id)a0 height:(double)a1;
+ (Class)layoutAttributesClass;

- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
