@class NSArray;

@interface CKAppStripLayout : UICollectionViewLayout {
    NSArray *_minifiedAttributes;
    NSArray *_magnifiedAttributes;
    NSArray *_supplementryMinifiedAttributes;
    NSArray *_supplementryMagnifiedAttributes;
    BOOL _inLayoutModeTransition;
}

@property (nonatomic) unsigned long long layoutMode;
@property (nonatomic) BOOL shouldDimPluginCells;
@property (nonatomic) BOOL shouldShowCellBorders;

+ (double)minHeight;
+ (double)maxHeight;

- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)a0 withTargetPosition:(struct CGPoint { double x0; double x1; })a1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)invalidateLayout;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)_itemCount;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (long long)_favoritesCount;
- (id)_attributesForLayoutMode:(unsigned long long)a0;
- (id)_currentAttributes;
- (id)_currentSupplementryAttributes;
- (id)_generateAttributesForSpec:(struct _Spec { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; long long x4; })a0;
- (id)_generateSupplementryAttributesForSpec:(struct _Spec { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; long long x4; })a0 minified:(BOOL)a1;
- (long long)_recentsCount;
- (struct _Spec { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; long long x4; })_specForLayoutMode:(unsigned long long)a0;
- (id)_supplementryAttributesForLayoutMode:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSizeForLayoutMode:(unsigned long long)a0;
- (void)finishLayoutModeTransition;
- (void)invalidateCachedLayout;
- (void)prepareForLayoutModeTransition;

@end
