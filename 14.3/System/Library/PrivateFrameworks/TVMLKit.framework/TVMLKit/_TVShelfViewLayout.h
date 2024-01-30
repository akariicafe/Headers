@class NSArray, _TVShelfLayoutHelper;

@interface _TVShelfViewLayout : UICollectionViewLayout

@property (retain, nonatomic) _TVShelfLayoutHelper *layoutHelper;
@property (retain, nonatomic) NSArray *shelfLayoutSections;
@property (nonatomic) BOOL shouldSnapContent;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) long long rowCount;
@property (nonatomic) long long prominentSectionIndex;
@property (nonatomic) struct CGSize { double width; double height; } headerReferenceSize;
@property (nonatomic) double headerSelectionMargin;
@property (nonatomic) double headerBottomMargin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;

+ (double)defaultHeaderSelectionMargin;

- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (double)computedContentHeight;
- (void)snapContent;
- (BOOL)_bumpHeaderForLayoutSection:(id)a0 forIndexPath:(id)a1;
- (id)_indexPathForItemAtProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)snapContentToIndexPath:(id)a0;
- (long long)computedRowCount;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingSelectionFrameForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)indexPathForSnappedContent;

@end
