@class NSString, NSCollectionLayoutItem, _UICollectionPreferredSizes, _UICollectionLayoutSupplementaryEnroller, _UICollectionLayoutItemSolverState, UITraitCollection;
@protocol NSCollectionLayoutContainer;

@interface _UICollectionLayoutItemSolver : NSObject <NSCopying, _UICollectionLayoutAuxillaryHosting> {
    BOOL _layoutRTL;
    BOOL _solvingConsumedDirtyPreferredSizes;
    NSCollectionLayoutItem *_item;
    id<NSCollectionLayoutContainer> _container;
    UITraitCollection *_traitCollection;
    unsigned long long _containerSizeDependentLayoutAxes;
    _UICollectionLayoutItemSolverState *_solveResult;
    _UICollectionPreferredSizes *_preferredSizes;
    _UICollectionLayoutSupplementaryEnroller *_supplementaryEnroller;
    long long _solutionRecursionDepth;
    long long _maxFrameCount;
    unsigned long long _layoutAxis;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)auxillaryHostSupplementaryEnroller;
- (id)auxillaryHostPreferredSizes;
- (id)auxillaryHostAuxillaryItems;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })auxillaryHostPinningRect;
- (long long)auxillaryHostAuxillaryKind;
- (struct CGPoint { double x0; double x1; })auxillaryHostAdditionalFrameOffset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
- (unsigned long long)auxillaryHostLayoutAxis;
- (id)auxillaryHostContainer;
- (struct CGSize { double x0; double x1; })auxillaryHostContentSize;
- (id)auxillaryHostTraitCollection;
- (BOOL)auxillaryHostShouldLayoutRTL;
- (void).cxx_destruct;

@end
