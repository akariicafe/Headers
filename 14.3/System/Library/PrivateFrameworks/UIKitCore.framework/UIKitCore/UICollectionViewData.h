@class __end_, __end_cap_, NSMutableDictionary, UICollectionViewLayout, UICollectionView, NSMutableArray, NSMapTable, NSMutableIndexSet;

@interface UICollectionViewData : NSObject {
    UICollectionView *_collectionView;
    UICollectionViewLayout *_layout;
    NSMapTable *_screenPageMap;
    NSMutableIndexSet *_globalIndexesOfItemsAwaitingValidation;
    NSMutableDictionary *_supplementaryLayoutAttributes;
    NSMutableDictionary *_decorationLayoutAttributes;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _validLayoutRect;
    long long _lastSectionTestedForNumberOfItemsBeforeSection;
    long long _lastResultForNumberOfItemsBeforeSection;
    struct { unsigned char contentSizeIsValid : 1; unsigned char itemCountsAreValid : 1; unsigned char layoutIsPreparing : 1; unsigned char layoutIsPrepared : 1; unsigned char layoutLocked : 1; } _collectionViewDataFlags;
    struct vector<UICollectionViewLayoutAttributes *, std::__1::allocator<UICollectionViewLayoutAttributes *> > { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<UICollectionViewLayoutAttributes *__strong *, std::__1::allocator<UICollectionViewLayoutAttributes *> > { id *__value_; } x1; } _globalItems;
    struct vector<long, std::__1::allocator<long> > { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::__1::allocator<long> > { long long *__value_; } __end_cap_; } _sectionItemCounts;
}

@property (readonly, nonatomic) BOOL layoutIsPrepared;
@property (nonatomic, getter=isLayoutLocked) BOOL layoutLocked;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) NSMutableArray *clonedCellAttributes;
@property (readonly, nonatomic) NSMutableArray *clonedSupplementaryAttributes;
@property (readonly, nonatomic) NSMutableArray *clonedDecorationAttributes;

+ (void)initialize;

- (long long)numberOfSections;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (long long)numberOfItemsInSection:(long long)a0;
- (void)invalidate:(BOOL)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)validateDecorationViews;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)_setLayoutAttributes:(id)a0 atGlobalItemIndex:(int)a1;
- (long long)numberOfItems;
- (id)knownSupplementaryElementKinds;
- (void).cxx_destruct;
- (void)invalidateSupplementaryIndexPaths:(id)a0;
- (id)existingSupplementaryLayoutAttributesInSection:(long long)a0;
- (id)layoutAttributesForCellsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 validateLayout:(BOOL)a1;
- (id)_layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)validatedIndexPathForItemAtGlobalIndex:(long long)a0;
- (void)_updateItemCounts;
- (void)validateSupplementaryViews;
- (void)invalidateItemsAtIndexPaths:(id)a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1 nilAttributesArePermitted:(BOOL)a2;
- (BOOL)isIndexPathValid:(id)a0 validateItemCounts:(BOOL)a1;
- (id)layoutAttributesForElementsInSection:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForDecorationElementOfKind:(id)a0 atIndexPath:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_TEST_validLayoutRect;
- (BOOL)isIndexPathValid:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItemAtIndexPath:(id)a0;
- (BOOL)dataSourceMatchesCurrentCounts;
- (long long)_extantNumberOfItems;
- (id).cxx_construct;
- (void)_loadEverything;
- (long long)validatedGlobalIndexForItemAtIndexPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })collectionViewContentRect;
- (id)_screenPageForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_validateContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForGlobalItemIndex:(long long)a0;
- (id)knownDecorationElementKinds;
- (BOOL)isGlobalIndexValid:(long long)a0;
- (void)invalidateDecorationIndexPaths:(id)a0;
- (long long)numberOfItemsBeforeSection:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)existingSupplementaryLayoutAttributes;
- (long long)globalIndexForItemAtIndexPath:(id)a0;
- (void)_validateItemCounts;
- (id)indexPathForItemAtGlobalIndex:(long long)a0;
- (id)layoutAttributesForGlobalItemIndex:(long long)a0;
- (void)_prepareToLoadData;
- (void)validateLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCollectionView:(id)a0 layout:(id)a1;

@end
