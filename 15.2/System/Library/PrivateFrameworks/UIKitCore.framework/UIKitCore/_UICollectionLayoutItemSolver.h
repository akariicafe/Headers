@class NSString, NSCollectionLayoutItem, _UICollectionLayoutItemSolverState, UITraitCollection;
@protocol NSCollectionLayoutContainer, _UICollectionPreferredSizes, _UICollectionLayoutSupplementaryEnrolling;

@interface _UICollectionLayoutItemSolver : NSObject <NSCopying, _UICollectionLayoutAuxillaryHosting> {
    BOOL _layoutRTL;
    NSCollectionLayoutItem *_item;
    id<NSCollectionLayoutContainer> _container;
    UITraitCollection *_traitCollection;
    NSString *_errorDescription;
    _UICollectionLayoutItemSolverState *_solveResult;
    id<_UICollectionPreferredSizes> _preferredSizes;
    id<_UICollectionLayoutSupplementaryEnrolling> _supplementaryEnroller;
    long long _solutionRecursionDepth;
    long long _maxFrameCount;
    unsigned long long _layoutAxis;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)auxillaryHostAuxillaryItems;
- (long long)auxillaryHostAuxillaryKind;
- (BOOL)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
- (struct CGSize { double x0; double x1; })auxillaryHostContentSize;
- (BOOL)auxillaryHostShouldLayoutRTL;
- (unsigned long long)auxillaryHostLayoutAxis;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })auxillaryHostPinningRect;
- (id)auxillaryHostSupplementaryEnroller;
- (id)auxillaryHostContainer;
- (id)auxillaryHostPreferredSizes;
- (struct CGPoint { double x0; double x1; })auxillaryHostAdditionalFrameOffset;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
