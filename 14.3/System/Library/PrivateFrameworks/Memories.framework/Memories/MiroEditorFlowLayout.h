@class NSIndexPath, NSMapTable;

@interface MiroEditorFlowLayout : UICollectionViewFlowLayout

@property (weak, nonatomic) NSIndexPath *currentIndexPath;
@property (weak, nonatomic) NSIndexPath *neighboringIndexPath;
@property (nonatomic) double transitionProgress;
@property (nonatomic) double abscissa;
@property (retain, nonatomic) NSMapTable *initalIndexPathToCGRectMap;
@property (retain, nonatomic) NSMapTable *layoutIndexPathToCGRectMap;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInsets;
@property (retain, nonatomic) NSIndexPath *snappedIndexPath;
@property (readonly, nonatomic) NSIndexPath *centerCellIndexPath;
@property (nonatomic) double maximumCenterItemLoupeSpacing;

- (void)invalidateLayout;
- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_sizeForItemAtIndexPath:(id)a0;
- (struct CGPoint { double x0; double x1; })_snappedContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 chosenLayoutAttributes:(id *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForItemAtIndexPath:(id)a0 withLoupe:(BOOL)a1;
- (double)_transitionProgressFrom:(id)a0 abscissa:(double)a1 outNeighborIndexPath:(id *)a2;
- (BOOL)wantsLoupe;
- (double)_loupeAmountForIndexPath:(id)a0;
- (double)_horizontalOffsetForIndexPath:(id)a0;
- (struct CGPoint { double x0; double x1; })contentOffsetForScrollingToIndexPath:(id)a0 transitionProgress:(double)a1;

@end
