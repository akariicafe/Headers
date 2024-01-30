@class NSIndexPath, UICollectionViewLayoutAttributes;

@interface GKCollectionFocusingLayout : UICollectionViewFlowLayout

@property (nonatomic) double topHeaderHeight;
@property (nonatomic) double focusScaleFactor;
@property (retain, nonatomic) NSIndexPath *focusedIndexPath;
@property (nonatomic) double focusHeaderOffset;
@property (nonatomic) double headerToItemSpacing;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *topHeaderAttributes;

- (void)prepareLayout;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForHeaderInSection:(long long)a0;
- (double)minimumInteritemSpacingForSectionAtIndex:(long long)a0;
- (double)minimumLineSpacingForSectionAtIndex:(long long)a0;
- (id)init;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForFooterInSection:(long long)a0;
- (id)focusAdjustedAttributesForItemAttributes:(id)a0;
- (id)focusAdjustedAttributesForSupplementaryViewAttributes:(id)a0;
- (void)applyDefaults;
- (void)dealloc;
- (void)awakeFromNib;
- (BOOL)shouldUpdateVisibleCellLayoutAttributes;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInset;
- (void)_updateFocusOffsetsForSectionHeadersWithAnimationCoordinator:(id)a0;
- (void)_updateFocusFrameForCellAtIndexPath:(id)a0;

@end
