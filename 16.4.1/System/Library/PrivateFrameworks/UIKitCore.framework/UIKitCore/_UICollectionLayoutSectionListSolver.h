@class NSString, _UICollectionLayoutSupplementaryEnroller, UITraitCollection, _UICollectionPreferredSizes, _UICollectionLayoutItemSolver, NSCollectionLayoutSection, _UICollectionLayoutSectionGeometryTranslator, _UICollectionLayoutAuxillaryItemSolver, NSIndexSet;
@protocol NSCollectionLayoutContainer;

@interface _UICollectionLayoutSectionListSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting> {
    struct vector<_UIRegionSolveResult, std::allocator<_UIRegionSolveResult>> { struct _UIRegionSolveResult *__begin_; struct _UIRegionSolveResult *__end_; struct __compressed_pair<_UIRegionSolveResult *, std::allocator<_UIRegionSolveResult>> { struct _UIRegionSolveResult *__value_; } __end_cap_; } _regions;
    struct unique_ptr<_UIItemSolveResult, std::default_delete<_UIItemSolveResult>> { struct __compressed_pair<_UIItemSolveResult *, std::default_delete<_UIItemSolveResult>> { struct _UIItemSolveResult *__value_; } __ptr_; } _templateItemSolveResult;
    _UICollectionLayoutItemSolver *_solution;
    _UICollectionLayoutAuxillaryItemSolver *_sectionAuxillarySolution;
    _UICollectionLayoutSupplementaryEnroller *_sectionSupplementaryEnroller;
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    id<NSCollectionLayoutContainer> _memoizedAuxillaryHostContainer;
    _UICollectionPreferredSizes *_preferredSizes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _overrideContentRectForPinning;
}

@property (retain, nonatomic) NSCollectionLayoutSection *layoutSection;
@property (retain, nonatomic) id<NSCollectionLayoutContainer> container;
@property (retain, nonatomic) id<NSCollectionLayoutContainer> supplementaryContainer;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) BOOL layoutRTL;
@property (nonatomic) unsigned long long layoutAxis;
@property (nonatomic) unsigned long long containerLayoutAxis;
@property (nonatomic) long long frameCount;
@property (nonatomic) struct CGVector { double dx; double dy; } orthogonalScrollingPrefetchingUnitVector;
@property (readonly, nonatomic) unsigned long long containerSizeDependentAxes;
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
- (id).cxx_construct;
- (id)sectionSupplementaryFrameWithKind:(id)a0 index:(long long)a1;
- (id)unpinnedSectionSupplementaryFrameForIndex:(long long)a0;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(unsigned long long)a2 frameCount:(long long)a3 preferredSizes:(id)a4;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 overrideContentRectForPinning:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
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
- (struct CGSize { double x0; double x1; })auxillaryHostContentSize;
- (id)auxillaryHostTraitCollection;
- (id)resolveWithParameters:(id)a0 preferredSizes:(id)a1;
- (void)solveForContainer:(id)a0 supplementaryContainer:(id)a1 traitCollection:(id)a2 layoutAxis:(unsigned long long)a3 frameCount:(long long)a4 preferredSizes:(id)a5 layoutRTL:(BOOL)a6;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameOffset:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)auxillaryHostShouldLayoutRTL;
- (void).cxx_destruct;

@end
