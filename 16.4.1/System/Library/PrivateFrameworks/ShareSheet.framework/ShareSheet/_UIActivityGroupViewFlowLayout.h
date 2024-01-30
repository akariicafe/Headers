@class NSArray, _UIActivityGroupActivityCell, NSIndexPath, UILongPressGestureRecognizer;

@interface _UIActivityGroupViewFlowLayout : UICollectionViewLayout

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } evaluatedInset;
@property (nonatomic) struct CGSize { double width; double height; } evaluatedItemSize;
@property (nonatomic) struct CGSize { double width; double height; } evaluatedContentSize;
@property (nonatomic) double evaluatedHorizontalItemOffset;
@property (copy, nonatomic) NSArray *preparedLayoutAttributes;
@property (copy, nonatomic) NSArray *preparedUpdateItems;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } draggingOffset;
@property (retain, nonatomic) _UIActivityGroupActivityCell *draggingView;
@property (retain, nonatomic) UILongPressGestureRecognizer *editingGestureRecognizer;
@property (copy, nonatomic) NSIndexPath *indexPathForDraggedItem;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } externalSafeInset;

- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (BOOL)shouldReverseLayoutDirection;
- (void).cxx_destruct;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (id)draggingViewForItemAtIndexPath:(id)a0;
- (BOOL)shouldCancelDraggingForGesture:(id)a0;
- (double)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize { double x0; double x1; })a0 inset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 offscreenPeekInFactor:(float)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_evaluateInsetForSectionAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)a0;
- (id)_indexPathsForItemsInSection:(long long)a0;
- (id)_layoutAttributesForItemAtIndexPath:(id)a0 numberOfItemsInSection:(unsigned long long)a1;
- (id)adjustLayoutAttributesForDraggingIfNeeded:(id)a0;
- (void)beginDraggingForGesture:(id)a0;
- (void)cancelDraggingForGesture:(id)a0;
- (void)handleEditingGesture:(id)a0;
- (id)indexPathForItemRecognizedByGesture:(id)a0;
- (void)invalidateGroupViewLayoutAnimated:(BOOL)a0;
- (void)updateDraggingViewForGesture:(id)a0;

@end
