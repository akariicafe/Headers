@class NSString, NSArray, NSMapTable, NSMutableArray;

@interface SKUIStorePageSplitCollectionViewLayout : _UICollectionViewCompositionLayout <SKUIStorePageCollectionViewLayout> {
    NSMutableArray *_orderedSublayouts;
    NSMapTable *_sublayoutToSectionsToIndexRanges;
}

@property (copy, nonatomic) NSString *backdropGroupName;
@property (readonly, nonatomic) NSArray *indexPathsForPinningItems;
@property (copy, nonatomic) NSArray *indexPathsForGradientItems;
@property (nonatomic) BOOL rendersWithParallax;
@property (nonatomic) BOOL rendersWithPerspective;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSublayout:(id)a0 forItems:(id)a1 inSection:(long long)a2 offset:(struct CGPoint { double x0; double x1; })a3 relativeToEdges:(unsigned long long)a4 fromSiblingLayout:(id)a5;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addSublayout:(id)a0 forSections:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2 relativeToEdges:(unsigned long long)a3 fromSiblingLayout:(id)a4;
- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForLayout:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1 relativeToEdges:(unsigned long long)a2 fromSiblingLayout:(id)a3;
- (id)sublayouts;
- (void)removeSublayout:(id)a0;
- (void)addSublayout:(id)a0 forElementKinds:(id)a1;
- (id)_newStorePageCollectionViewLayout;
- (void)addSublayoutsUsingSplitsDescription:(id)a0;
- (id)layoutAttributesForUnpinnedItemAtIndexPath:(id)a0;
- (id)pinnedLayoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_createSectionsToIndexRangesMapTableIfNeededForSublayout:(id)a0;

@end
