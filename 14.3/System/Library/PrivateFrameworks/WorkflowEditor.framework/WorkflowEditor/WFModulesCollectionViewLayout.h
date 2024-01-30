@class UIColor, NSArray, NSMutableDictionary, NSDictionary;

@interface WFModulesCollectionViewLayout : UICollectionViewLayout {
    NSArray *_collectionViewIndexPaths;
    NSMutableDictionary *_itemSizes;
    NSMutableDictionary *_itemHidden;
    NSMutableDictionary *_itemOffsets;
    NSMutableDictionary *_itemConnections;
    NSMutableDictionary *_supplementaryViewSizes;
    NSMutableDictionary *_itemAttributes;
    NSMutableDictionary *_supplementaryViewAttributes;
    NSMutableDictionary *_decorationViewAttributes;
    NSMutableDictionary *_decorationViewAttributesToDisappear;
    NSMutableDictionary *_deletedSupplementaryIndexPaths;
    NSMutableDictionary *_insertedSupplementaryIndexPaths;
    NSMutableDictionary *_deletedDecorationIndexPaths;
    NSMutableDictionary *_insertedDecorationIndexPaths;
    NSDictionary *_previousItemAttributes;
    BOOL _invalidatedAndWaitingForPrepareLayout;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) BOOL disableItemAnimations;
@property (readonly, nonatomic) UIColor *connectorColor;
@property (readonly, nonatomic) double connectorWidth;
@property (nonatomic) BOOL showsFooterConnector;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)a0;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)finalizeCollectionViewUpdates;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)a0;
- (void).cxx_destruct;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (id)proposedLayoutAttributesForItemAtIndexPath:(id)a0 movedFromIndexPath:(id)a1;
- (id)proposedLayoutAttributesForNewItemAtIndexPath:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithConnectorColor:(id)a0 connectorWidth:(double)a1;
- (id)proposedLayoutAttributesForItemAtIndexPath:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 fromAbove:(BOOL)a2;
- (void)updateIndexPaths;
- (void)calculateAttributes;
- (void)populateInvalidatedDelegateCache;
- (void)populateUpdatedDelegateCache;

@end
