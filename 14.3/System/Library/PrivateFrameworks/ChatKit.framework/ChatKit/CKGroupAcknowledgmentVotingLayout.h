@class NSArray;

@interface CKGroupAcknowledgmentVotingLayout : UICollectionViewLayout

@property (copy, nonatomic) NSArray *ballotItems;
@property (nonatomic) long long expandedSection;
@property (nonatomic) BOOL isAnimatedLayoutChange;
@property (retain, nonatomic) NSArray *fromBallotItems;
@property (nonatomic) struct CGSize { double width; double height; } fromContentSize;
@property (nonatomic) struct CGPoint { double x; double y; } fromContentOffset;
@property (nonatomic) unsigned long long layoutMode;
@property (nonatomic) struct CGPoint { double x; double y; } previousCollapsedContentOffset;

- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (long long)_numberOfBallots;
- (BOOL)_shouldFillInFromCenter;
- (double)_totalBallotContainersWidth;
- (void)_initializeBallotItems;
- (void)_setupCollapsedLayout;
- (void)_setupExpandedLayout;
- (void)finalizeAnimatedBoundsChange;
- (void)preapareForLayoutAnimationAroundSection:(long long)a0;
- (void)_setupAnimatedCollapsedLayout;
- (void)cleanupAnimationCache;

@end
