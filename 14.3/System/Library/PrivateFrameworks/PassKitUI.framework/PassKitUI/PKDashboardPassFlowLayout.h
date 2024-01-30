@class NSString, NSMutableDictionary;

@interface PKDashboardPassFlowLayout : UICollectionViewLayout <UIGestureRecognizerDelegate, PKDashboardLayout> {
    BOOL _needsCustomLocation;
    BOOL _userIsActivelyDragging;
    BOOL _currentDraggingWentBelowThreshold;
    BOOL _userIsHoldingCardInCurrentDrag;
    BOOL _userWasHoldingCard;
    BOOL _bouncing;
    BOOL _showNonPassCells;
    BOOL _revealingItems;
    struct CGSize { double width; double height; } _passCellSize;
    NSMutableDictionary *_attributesPerIndexPath;
    struct CGSize { double width; double height; } _currentSize;
    BOOL _isCompactUI;
    BOOL _preventLayoutComputation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL fade;

- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)finalizeCollectionViewUpdates;
- (void)passPanDidEnd;
- (id)init;
- (void).cxx_destruct;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void)_adjustItems:(id)a0 withLateralMove:(double)a1;
- (id)_indexPathForPassGroup;
- (BOOL)_indexPathIsPassGroupIndexPath:(id)a0;
- (id)_customAttribuesForPassAtTheTop:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetsForSection:(long long)a0;
- (void)hideContent;
- (void)revealContentAnimated:(BOOL)a0;
- (void)passPanDidBegin;

@end
