@class NSString, _UICollectionPreferredSizes, _UICollectionLayoutSupplementaryEnroller, UITraitCollection, NSCollectionLayoutSection, _UICollectionLayoutSolutionState, _UICollectionLayoutAuxillaryItemSolver, NSIndexSet;
@protocol NSCollectionLayoutContainer;

@interface _UICollectionLayoutSectionEstimatedSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting> {
    _UICollectionPreferredSizes *_preferredSizes;
    _UICollectionLayoutAuxillaryItemSolver *_sectionSupplementarySolution;
    _UICollectionLayoutSupplementaryEnroller *_sectionSupplementaryEnroller;
    id<NSCollectionLayoutContainer> _memoizedSupplementaryHostContainer;
    _UICollectionLayoutSolutionState *_solutionState;
    unsigned long long _containerLayoutAxis;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _overrideContentRectForPinning;
}

@property (nonatomic) struct CGVector { double dx; double dy; } orthogonalScrollingPrefetchingUnitVector;
@property (retain, nonatomic) id<NSCollectionLayoutContainer> supplementaryContainer;
@property (readonly, nonatomic) NSCollectionLayoutSection *layoutSection;
@property (readonly, nonatomic) id<NSCollectionLayoutContainer> container;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) BOOL layoutRTL;
@property (readonly, nonatomic) unsigned long long layoutAxis;
@property (readonly, nonatomic) unsigned long long containerSizeDependentAxes;
@property (readonly, nonatomic) long long frameCount;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } effectiveContentFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
@property (readonly, nonatomic) NSString *errorDescription;
@property (nonatomic) BOOL shouldAdjustContentSizeForPartialLastGroupSolution;
@property (nonatomic) struct CGPoint { double x; double y; } orthogonalOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)auxillaryHostSupplementaryEnroller;
- (id)auxillaryHostPreferredSizes;
- (id)auxillaryHostAuxillaryItems;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })auxillaryHostPinningRect;
- (long long)auxillaryHostAuxillaryKind;
- (double)auxillaryHostPaddingBeforeBoundarySupplementaries;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)supplementaryFrameWithKind:(id)a0 index:(long long)a1;
- (id)sectionSupplementaryFrameWithKind:(id)a0 index:(long long)a1;
- (id)unpinnedSectionSupplementaryFrameForIndex:(long long)a0;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(unsigned long long)a2 frameCount:(long long)a3 preferredSizes:(id)a4;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 overrideContentRectForPinning:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_sectionContainer;
- (id)frameForIndex:(long long)a0;
- (double)_dimensionForRootGroupAlongAxis:(unsigned long long)a0;
- (BOOL)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
- (long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)a0;
- (id)sectionSupplementaryFrameForIndex:(long long)a0;
- (unsigned long long)auxillaryHostLayoutAxis;
- (id)visualDescription;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(unsigned long long)a2 frameCount:(long long)a3;
- (id)auxillaryHostContainer;
- (void)_setOrthogonalOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)_indexesOfBookmarksAffectedByResolveItems:(id)a0;
- (struct CGSize { double x0; double x1; })auxillaryHostContentSize;
- (id)auxillaryHostTraitCollection;
- (id)resolveWithParameters:(id)a0 preferredSizes:(id)a1;
- (void)solveForContainer:(id)a0 supplementaryContainer:(id)a1 traitCollection:(id)a2 layoutAxis:(unsigned long long)a3 frameCount:(long long)a4 preferredSizes:(id)a5 layoutRTL:(BOOL)a6;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectWithContentInsetTrailingLayoutDimensionAddedToToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 insets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 layoutAxis:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustContentFrameForLastPartialSolutionIfNeededForContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bookmarks:(id)a1;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)_solveWithParameters:(id)a0;
- (BOOL)auxillaryHostShouldLayoutRTL;
- (void)_configureInitialOrthogonalPrefetchingUnitVector;
- (void).cxx_destruct;
- (void)_updateSolutionAuxillaryRangeIndexerKindDict:(id)a0 fromBookmark:(id)a1;

@end
