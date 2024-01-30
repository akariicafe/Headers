@class NSString, UITraitCollection, _UICollectionLayoutSupplementaryRegistrar, _UICollectionLayoutItemSolver, NSCollectionLayoutSection, _UICollectionLayoutSectionGeometryTranslator, _UICollectionLayoutAuxillaryItemSolver, NSIndexSet;
@protocol NSCollectionLayoutContainer, _UICollectionPreferredSizes;

@interface _UICollectionLayoutSectionListSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting> {
    struct vector<_UIRegionSolveResult, std::__1::allocator<_UIRegionSolveResult> > { struct _UIRegionSolveResult *__begin_; struct _UIRegionSolveResult *__end_; struct __compressed_pair<_UIRegionSolveResult *, std::__1::allocator<_UIRegionSolveResult> > { struct _UIRegionSolveResult *__value_; } __end_cap_; } _regions;
    struct unique_ptr<_UIItemSolveResult, std::__1::default_delete<_UIItemSolveResult> > { struct __compressed_pair<_UIItemSolveResult *, std::__1::default_delete<_UIItemSolveResult> > { struct _UIItemSolveResult *__value_; } __ptr_; } _templateItemSolveResult;
}

@property (retain, nonatomic) NSCollectionLayoutSection *layoutSection;
@property (retain, nonatomic) id<NSCollectionLayoutContainer> container;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) BOOL layoutRTL;
@property (nonatomic) unsigned long long layoutAxis;
@property (nonatomic) unsigned long long containerLayoutAxis;
@property (nonatomic) long long frameCount;
@property (retain, nonatomic) _UICollectionLayoutItemSolver *solution;
@property (retain, nonatomic) _UICollectionLayoutAuxillaryItemSolver *sectionAuxillarySolution;
@property (retain, nonatomic) _UICollectionLayoutSupplementaryRegistrar *sectionSupplementaryRegistrar;
@property (retain, nonatomic) _UICollectionLayoutSectionGeometryTranslator *sectionGeometryTranslator;
@property (retain, nonatomic) id<NSCollectionLayoutContainer> memoizedAuxillaryHostContainer;
@property (retain, nonatomic) id<_UICollectionPreferredSizes> preferredSizes;
@property (nonatomic) struct CGVector { double dx; double dy; } orthogonalScrollingPrefetchingUnitVector;
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
- (id)_queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameOffset:(struct CGPoint { double x0; double x1; })a1;
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
- (id)_resolveWithParameters:(id)a0;
- (long long)_splitRegionAtRegionIndex:(long long)a0 forFrameIndex:(long long)a1;
- (id)initWithLayoutSection:(id)a0;
- (long long)_regionIndexForFrameIndex:(long long)a0 startRegionIndex:(long long)a1 endRegionIndex:(long long)a2;
- (long long)_regionIndexForQueryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct _UIRegionSolveResult { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; double x1; double x2; struct _UIItemSolveResult { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct vector<_UIAuxillarySolveResult, std::__1::allocator<_UIAuxillarySolveResult> > { struct _UIAuxillarySolveResult *x0; struct _UIAuxillarySolveResult *x1; struct __compressed_pair<_UIAuxillarySolveResult *, std::__1::allocator<_UIAuxillarySolveResult> > { struct _UIAuxillarySolveResult *x0; } x2; } x2; struct vector<_UIAuxillarySolveResult, std::__1::allocator<_UIAuxillarySolveResult> > { struct _UIAuxillarySolveResult *x0; struct _UIAuxillarySolveResult *x1; struct __compressed_pair<_UIAuxillarySolveResult *, std::__1::allocator<_UIAuxillarySolveResult> > { struct _UIAuxillarySolveResult *x0; } x2; } x3; id x4; } x3; } *)_regionForFrameIndex:(long long)a0;
- (void)_updatePreferredSizeForFrameIndex:(long long)a0;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(unsigned long long)a2 frameCount:(long long)a3 preferredSizes:(id)a4 layoutRTL:(BOOL)a5;
- (id).cxx_construct;
- (void)_recomputeRegionOffsetsStartingAtFrameIndex:(long long)a0;
- (unsigned long long)_regionIndexForFrameIndex:(long long)a0;
- (id)auxillaryHostContainer;
- (long long)_anchorIndexForSolveParameters:(id)a0;
- (void)_initialSolve;
- (long long)_regionIndexForQueryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 startRegionIndex:(long long)a1 endRegionIndex:(long long)a2;

@end
