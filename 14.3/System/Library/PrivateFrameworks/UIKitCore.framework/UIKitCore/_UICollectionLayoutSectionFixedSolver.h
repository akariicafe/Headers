@class NSString, UITraitCollection, _UICollectionLayoutSupplementaryRegistrar, _UICollectionLayoutItemSolver, NSCollectionLayoutSection, _UICollectionLayoutSectionGeometryTranslator, _UICollectionLayoutAuxillaryItemSolver, NSIndexSet;
@protocol NSCollectionLayoutContainer;

@interface _UICollectionLayoutSectionFixedSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting>

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

- (void)_solve;
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
- (id)initWithLayoutSection:(id)a0;
- (void).cxx_destruct;
- (void)_configureInitialOrthogonalPrefetchingUnitVector;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(unsigned long long)a2 frameCount:(long long)a3 preferredSizes:(id)a4 layoutRTL:(BOOL)a5;
- (id)auxillaryHostContainer;

@end
