@class UITraitCollection, NSCollectionLayoutSection, _UICollectionLayoutSupplementaryRegistrar, _UICollectionLayoutSolutionState, NSIndexSet, NSString, _UICollectionLayoutAuxillaryItemSolver;
@protocol NSCollectionLayoutContainer, _UICollectionPreferredSizes;

@interface _UICollectionLayoutSectionEstimatedSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting>

@property (readonly, nonatomic) id<_UICollectionPreferredSizes> preferredSizes;
@property (retain, nonatomic) _UICollectionLayoutAuxillaryItemSolver *sectionSupplementarySolution;
@property (retain, nonatomic) _UICollectionLayoutSupplementaryRegistrar *sectionSupplementaryRegistrar;
@property (retain, nonatomic) id<NSCollectionLayoutContainer> memoizedSupplementaryHostContainer;
@property (retain, nonatomic) _UICollectionLayoutSolutionState *solutionState;
@property (nonatomic) unsigned long long containerLayoutAxis;
@property (nonatomic) struct CGVector { double dx; double dy; } orthogonalScrollingPrefetchingUnitVector;
@property (readonly, nonatomic) NSCollectionLayoutSection *layoutSection;
@property (readonly, nonatomic) id<NSCollectionLayoutContainer> container;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) BOOL layoutRTL;
@property (readonly, nonatomic) unsigned long long layoutAxis;
@property (readonly, nonatomic) long long frameCount;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } effectiveContentFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
@property (nonatomic) BOOL shouldAdjustContentSizeForPartialLastGroupSolution;
@property (nonatomic) struct CGPoint { double x; double y; } orthogonalOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)visualDescription;
- (double)_dimensionForRootGroupAlongAxis:(unsigned long long)a0;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)auxillaryHostLayoutAxis;
- (id)auxillaryHostAuxillaryItems;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)frameForIndex:(long long)a0;
- (id)sectionSupplementaryFrameWithKind:(id)a0 index:(long long)a1;
- (id)_sectionContainer;
- (long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)a0;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(unsigned long long)a2 frameCount:(long long)a3;
- (BOOL)auxillaryHostShouldLayoutRTL;
- (id)supplementaryFrameWithKind:(id)a0 index:(long long)a1;
- (id)resolveWithParameters:(id)a0 preferredSizes:(id)a1;
- (id)auxillaryHostSupplementaryEnroller;
- (struct CGSize { double x0; double x1; })auxillaryHostContentSize;
- (void)_setOrthogonalOffset:(struct CGPoint { double x0; double x1; })a0;
- (long long)auxillaryHostAuxillaryKind;
- (id)sectionSupplementaryFrameForIndex:(long long)a0;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(unsigned long long)a2 frameCount:(long long)a3 preferredSizes:(id)a4;
- (struct CGSize { double x0; double x1; })auxillaryHostPinningContentSize;
- (id)auxillaryHostPreferredSizes;
- (id)initWithLayoutSection:(id)a0;
- (void).cxx_destruct;
- (void)_configureInitialOrthogonalPrefetchingUnitVector;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateSolutionAuxillaryRangeIndexerKindDict:(id)a0 fromBookmark:(id)a1;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(unsigned long long)a2 frameCount:(long long)a3 preferredSizes:(id)a4 layoutRTL:(BOOL)a5;
- (id)_solveWithParameters:(id)a0;
- (id)_indexesOfBookmarksAffectedByResolveItems:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustContentFrameForLastPartialSolutionIfNeededForContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bookmarks:(id)a1;
- (id)auxillaryHostContainer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectWithContentInsetTrailingLayoutDimensionAddedToToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 insets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 layoutAxis:(unsigned long long)a2;

@end
