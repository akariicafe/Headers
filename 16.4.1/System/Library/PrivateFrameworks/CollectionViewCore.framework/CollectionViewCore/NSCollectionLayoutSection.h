@class NSArray, NSIndexSet, NSCollectionLayoutGroup, NSDictionary;
@protocol _UICollectionLayoutSectionCallback;

@interface NSCollectionLayoutSection : NSObject <NSCopying> {
    NSIndexSet *_pinnedBoundarySupplementaryItemIndexes;
    BOOL _hasBackgroundDecorationItem;
    NSDictionary *_supplementaryItemsDict;
    NSDictionary *_decorationItemsDict;
    BOOL _isEmptySection;
}

@property (copy, nonatomic) NSCollectionLayoutGroup *group;
@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) NSIndexSet *pinnedSupplementaryItemIndexes;
@property (readonly, nonatomic) NSDictionary *supplementaryItemsDict;
@property (readonly, nonatomic) NSDictionary *decorationItemssDict;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic, getter=_callback) id<_UICollectionLayoutSectionCallback> callback;
@property (nonatomic, getter=_cornerRadius, setter=_setCornerRadius:) double _cornerRadius;
@property (nonatomic, getter=_clipsContentToBounds, setter=_setClipsContentToBounds:) BOOL _clipsContentToBounds;
@property (nonatomic, getter=_excludesBoundarySupplementariesFromClipping, setter=_setExcludesBoundarySupplementariesFromClipping:) BOOL _excludesBoundarySupplementariesFromClipping;
@property (nonatomic, getter=_clipsBackgroundDecorationsToContent, setter=_setClipsBackgroundDecorationsToContent:) BOOL _clipsBackgroundDecorationsToContent;
@property (nonatomic) BOOL prefersListSolver;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (nonatomic) double interGroupSpacing;
@property (nonatomic) long long contentInsetsReference;
@property (nonatomic) long long supplementaryContentInsetsReference;
@property (nonatomic) long long orthogonalScrollingBehavior;
@property (copy, nonatomic) NSArray *boundarySupplementaryItems;
@property (nonatomic) BOOL supplementariesFollowContentInsets;
@property (copy, nonatomic) id /* block */ visibleItemsInvalidationHandler;
@property (copy, nonatomic) NSArray *decorationItems;

+ (id)_emptySection;
+ (id)sectionWithGroup:(id)a0;

- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)a0;
- (BOOL)_isEmptySection;
- (BOOL)_wantsBandSelectionVisuals;
- (void)_didEndSwiping;
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)a0;
- (void)_willBeginSwiping;
- (double)_paddingToBoundarySupplementaries;
- (id)initWithLayoutGroup:(id)a0;
- (double)_alignedContentMarginGivenMargin:(double)a0;
- (BOOL)_containsEstimatedSizeElement;
- (BOOL)_isListSolverCompatibleForLayoutAxis:(unsigned long long)a0;
- (void)_updateStyleForSwipeActionsConfiguration:(id)a0;
- (id)decorationItemsDict;
- (id)_backgroundDecorationViewsRequiringCustomViewClassRegistration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_wantsSwipeActions;
- (BOOL)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
- (id)_preferredContainerBackgroundColor;
- (BOOL)_pinnedSupplementariesShouldOverlap;
- (id)pinnedBoundarySupplementaryItemIndexes;
- (BOOL)_hasVisibleItemsHandler;
- (BOOL)isEqual:(id)a0;
- (BOOL)scrollsOrthogonally;
- (BOOL)_hasBackgroundDecorationItem;
- (id)_auxillaryItemForElementKind:(id)a0 category:(unsigned long long)a1;
- (id)initWithGroup:(id)a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 contentInsetsReference:(long long)a2 supplementaryItems:(id)a3 boundarySupplementaryItems:(id)a4 pinnedSupplementaryItemIndexes:(id)a5 interGroupSpacing:(double)a6 visibleItemsInvalidationHandler:(id /* block */)a7 supplementariesFollowInsets:(BOOL)a8 decorationItems:(id)a9 orthogonalScrollingBehavior:(long long)a10 isEmptySection:(BOOL)a11 prefersListSolver:(BOOL)a12;
- (id)_descriptionProperties;
- (BOOL)_containsBackgroundDecorationItem:(id)a0;
- (id)description;
- (void)_checkForDuplicateSupplementaryItemKindsAndThrowIfFound;
- (void).cxx_destruct;

@end
