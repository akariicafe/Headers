@class NSArray, NSDictionary, NSMutableIndexSet, NSMutableSet, NSMutableDictionary;

@interface UICollectionViewLayoutInvalidationContext : NSObject {
    NSMutableSet *_invalidatedItemIndexPaths;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    NSArray *_updateItems;
    NSArray *_previousIndexPathsForReorderedItems;
    NSArray *_targetIndexPathsForReorderedItems;
    struct CGPoint { double x; double y; } _reorderingTarget;
    struct CGPoint { double x; double y; } _contentOffsetAdjustment;
    struct CGSize { double width; double height; } _contentSizeAdjustment;
    NSMutableIndexSet *_orthogonalSectionsWithContentSizeChanges;
    struct { unsigned char invalidateDataSource : 1; unsigned char invalidateEverything : 1; unsigned char invalidateContentSize : 1; } _invalidationContextFlags;
}

@property (nonatomic, setter=_setInvalidateDataSourceCounts:) BOOL invalidateDataSourceCounts;
@property (nonatomic, setter=_setInvalidateEverything:) BOOL invalidateEverything;
@property (retain, nonatomic, getter=_updateItems, setter=_setUpdateItems:) NSArray *updateItems;
@property (copy, nonatomic, setter=_setPreviousIndexPathsForInteractivelyMovingItems:) NSArray *previousIndexPathsForInteractivelyMovingItems;
@property (copy, nonatomic, setter=_setTargetIndexPathsForInteractivelyMovingItems:) NSArray *targetIndexPathsForInteractivelyMovingItems;
@property (nonatomic, setter=_setInteractiveMovementTarget:) struct CGPoint { double x0; double x1; } interactiveMovementTarget;
@property (nonatomic, setter=_setShouldInvalidateCollectionViewContentSize:) BOOL _shouldInvalidateCollectionViewContentSize;
@property (nonatomic, getter=_retainExistingSizingInfoForEstimates, setter=_setRetainExistingSizingInfoForEstimates:) BOOL retainExistingSizingInfoForEstimates;
@property (nonatomic, getter=_intent, setter=_setIntent:) long long intent;
@property (readonly, nonatomic) NSMutableIndexSet *_orthogonalSectionsWithContentSizeChanges;
@property (readonly, nonatomic) BOOL _shouldInvalidatePreferredAttributes;
@property (readonly, nonatomic) NSArray *invalidatedItemIndexPaths;
@property (readonly, nonatomic) NSDictionary *invalidatedSupplementaryIndexPaths;
@property (readonly, nonatomic) NSDictionary *invalidatedDecorationIndexPaths;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffsetAdjustment;
@property (nonatomic) struct CGSize { double x0; double x1; } contentSizeAdjustment;

- (void).cxx_destruct;
- (void)_invalidateSupplementaryElementsOfKind:(id)a0 atIndexPaths:(id)a1;
- (id)_invalidatedSupplementaryViews;
- (void)_removeInvalidatedDecorationOfKind:(id)a0 indexPath:(id)a1;
- (void)_removeInvalidatedItemIndexPath:(id)a0;
- (void)_removeInvalidatedSupplementaryOfKind:(id)a0 indexPath:(id)a1;
- (void)_setInvalidatedSupplementaryViews:(id)a0;
- (void)invalidateDecorationElementsOfKind:(id)a0 atIndexPaths:(id)a1;
- (void)invalidateItemsAtIndexPaths:(id)a0;
- (void)invalidateSupplementaryElementsOfKind:(id)a0 atIndexPaths:(id)a1;

@end
