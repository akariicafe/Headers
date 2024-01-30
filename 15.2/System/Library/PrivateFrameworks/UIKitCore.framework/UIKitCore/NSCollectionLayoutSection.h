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
@property (nonatomic) BOOL prefersListSolver;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (nonatomic) double interGroupSpacing;
@property (nonatomic) long long contentInsetsReference;
@property (nonatomic) long long orthogonalScrollingBehavior;
@property (copy, nonatomic) NSArray *boundarySupplementaryItems;
@property (nonatomic) BOOL supplementariesFollowContentInsets;
@property (copy, nonatomic) id /* block */ visibleItemsInvalidationHandler;
@property (copy, nonatomic) NSArray *decorationItems;

+ (id)_emptySection;
+ (id)sectionWithListConfiguration:(id)a0 layoutEnvironment:(id)a1;
+ (id)sectionWithGroup:(id)a0;

- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)a0;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)a0;
- (double)_alignedContentMarginGivenMargin:(double)a0;
- (void)_willBeginSwiping;
- (void)_didEndSwiping;
- (BOOL)_supportsBandSelection;
- (BOOL)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
- (BOOL)scrollsOrthogonally;
- (BOOL)_pinnedSupplementariesShouldOverlap;
- (void)_checkForDuplicateSupplementaryItemKindsAndThrowIfFound;
- (id)pinnedBoundarySupplementaryItemIndexes;
- (BOOL)_hasBackgroundDecorationItem;
- (id)_preferredContainerBackgroundColor;
- (BOOL)_hasVisibleItemsHandler;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_containsBackgroundDecorationItem:(id)a0;
- (id)decorationItemsDict;
- (id)initWithGroup:(id)a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 contentInsetsReference:(long long)a2 supplementaryItems:(id)a3 boundarySupplementartItems:(id)a4 pinnedSupplementaryItemIndexes:(id)a5 interGroupSpacing:(double)a6 visibleItemsInvalidationHandler:(id /* block */)a7 supplementariesFollowInsets:(BOOL)a8 decorationItems:(id)a9 orthogonalScrollingBehavior:(long long)a10 isEmptySection:(BOOL)a11 prefersListSolver:(BOOL)a12;
- (id)initWithLayoutGroup:(id)a0;
- (BOOL)_wantsSwipeActions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isEmptySection;
- (id)_auxillaryItemForElementKind:(id)a0 category:(unsigned long long)a1;
- (double)_paddingToBoundarySupplementaries;
- (BOOL)_isListSolverCompatibleForLayoutAxis:(unsigned long long)a0;
- (BOOL)_containsEstimatedSizeElement;
- (id)_backgroundDecorationViewsRequiringCustomViewClassRegistration;

@end
