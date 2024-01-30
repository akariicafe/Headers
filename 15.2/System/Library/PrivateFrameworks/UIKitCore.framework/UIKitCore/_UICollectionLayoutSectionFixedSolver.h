@class NSString, UITraitCollection, _UICollectionLayoutSupplementaryRegistrar, _UICollectionLayoutItemSolver, NSCollectionLayoutSection, _UICollectionLayoutSectionGeometryTranslator, _UICollectionLayoutAuxillaryItemSolver, NSIndexSet;
@protocol NSCollectionLayoutContainer;

@interface _UICollectionLayoutSectionFixedSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting> {
    _UICollectionLayoutItemSolver *_solution;
    _UICollectionLayoutAuxillaryItemSolver *_sectionAuxillarySolution;
    _UICollectionLayoutSupplementaryRegistrar *_sectionSupplementaryRegistrar;
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    id<NSCollectionLayoutContainer> _memoizedAuxillaryHostContainer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _overrideContentRectForPinning;
}

@property (retain, nonatomic) NSCollectionLayoutSection *layoutSection;
@property (retain, nonatomic) id<NSCollectionLayoutContainer> container;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) BOOL layoutRTL;
@property (nonatomic) unsigned long long layoutAxis;
@property (nonatomic) unsigned long long containerLayoutAxis;
@property (nonatomic) long long frameCount;
@property (nonatomic) struct CGVector { double dx; double dy; } orthogonalScrollingPrefetchingUnitVector;
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

- (id)unpinnedSectionSupplementaryFrameForIndex:(long long)a0;
- (id)sectionSupplementaryFrameWithKind:(id)a0 index:(long long)a1;
- (long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)a0;
- (id)sectionSupplementaryFrameForIndex:(long long)a0;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)visualDescription;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)auxillaryHostAuxillaryItems;
- (long long)auxillaryHostAuxillaryKind;
- (BOOL)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
- (struct CGSize { double x0; double x1; })auxillaryHostContentSize;
- (void)_setOrthogonalOffset:(struct CGPoint { double x0; double x1; })a0;
- (double)_dimensionForRootGroupAlongAxis:(unsigned long long)a0;
- (BOOL)auxillaryHostShouldLayoutRTL;
- (unsigned long long)auxillaryHostLayoutAxis;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })auxillaryHostPinningRect;
- (id)auxillaryHostSupplementaryEnroller;
- (id)auxillaryHostContainer;
- (id)auxillaryHostPreferredSizes;
- (double)auxillaryHostPaddingBeforeBoundarySupplementaries;
- (id)frameForIndex:(long long)a0;
- (id)resolveWithParameters:(id)a0 preferredSizes:(id)a1;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(unsigned long long)a2 frameCount:(long long)a3;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(unsigned long long)a2 frameCount:(long long)a3 preferredSizes:(id)a4;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(unsigned long long)a2 frameCount:(long long)a3 preferredSizes:(id)a4 layoutRTL:(BOOL)a5;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 overrideContentRectForPinning:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)supplementaryFrameWithKind:(id)a0 index:(long long)a1;

@end
