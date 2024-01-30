@class _UIDataSourceSnapshotter, NSMutableDictionary, _UICollectionPreferredSizes, _UICollectionLayoutContainer, NSString, _UIRTree, _UICollectionCompositionalLayoutSolverOptions, UITraitCollection, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutSectionGeometryTranslator, NSArray, _UICollectionCompositionalLayoutDynamicAnimator, _UICollectionLayoutDynamicsConfiguration, NSIndexSet;

@interface _UICollectionCompositionalLayoutSolver : NSObject <_UICollectionLayoutAuxillaryHosting, _UIDynamicReferenceSystem> {
    BOOL _estimatesSizes;
    BOOL _hasOrthogonalScrollingSections;
    BOOL _hasSectionsWithCustomContainers;
    BOOL _shouldPerformPhysicalRTLTransforms;
    BOOL _roundsToScreenScale;
    BOOL _layoutRTL;
    id /* block */ _cellLayoutAttributesTransformer;
    id /* block */ _sectionDecorationLayoutAttributesTransformer;
    id /* block */ _sectionSupplementaryLayoutAttributesTransformer;
    _UICollectionLayoutContainer *_container;
    UITraitCollection *_traitCollection;
    unsigned long long _layoutAxis;
    _UIDataSourceSnapshotter *_dataSourceSnapshot;
    double _interSectionSpacing;
    NSIndexSet *_orthogonalScrollingSectionIndexes;
    NSIndexSet *_customContainerSectionIndexes;
    id /* block */ _dynamicsConfigurationHandler;
    _UICollectionCompositionalLayoutSolverOptions *_options;
    Class _layoutAttributeClass;
    Class _invalidationContextClass;
    id /* block */ _invalidationHandler;
    double _memoizedScreenScale;
    id /* block */ _sectionProvider;
    NSIndexSet *_solutionBookmarkIndexesWithPinnedSupplementaryItems;
    _UICollectionCompositionalLayoutDynamicAnimator *_dynamicAnimator;
    _UICollectionLayoutDynamicsConfiguration *_dynamicsConfiguration;
    NSArray *_solutionBookmarks;
    _UIRTree *_sectionIndexer;
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    NSMutableDictionary *_cachedItemAttributes;
    NSMutableDictionary *_cachedSupplementaryAttributes;
    NSMutableDictionary *_cachedDecorationAttributes;
    unsigned long long _preUpdateCachedItemCount;
    NSArray *_globalSupplementaryItems;
    _UICollectionLayoutAuxillaryItemSolver *_globalSupplementarySolver;
    _UICollectionPreferredSizes *_globalSupplementaryPreferredSizes;
    long long _numberOfSectionsWithTransformVisibleItemsHandler;
    unsigned long long _containerSizeDependentAxes;
    struct CGSize { double width; double height; } _actualContentSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (id)auxillaryHostSupplementaryEnroller;
- (id)auxillaryHostPreferredSizes;
- (id)auxillaryHostAuxillaryItems;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })auxillaryHostPinningRect;
- (long long)auxillaryHostAuxillaryKind;
- (BOOL)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
- (unsigned long long)auxillaryHostLayoutAxis;
- (id)auxillaryHostContainer;
- (struct CGSize { double x0; double x1; })auxillaryHostContentSize;
- (id)auxillaryHostTraitCollection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dynamicReferenceBounds;
- (BOOL)auxillaryHostShouldLayoutRTL;
- (void).cxx_destruct;

@end
