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

+ (double)maxHeight;
+ (double)minHeight;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)a0 withTargetPosition:(struct CGPoint { double x0; double x1; })a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (void)invalidateLayout;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (struct _Spec { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; long long x4; })_specForLayoutMode:(unsigned long long)a0;
- (long long)_recentsCount;
- (id)_attributesForLayoutMode:(unsigned long long)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSizeForLayoutMode:(unsigned long long)a0;
- (id)_supplementryAttributesForLayoutMode:(unsigned long long)a0;
- (id)_generateAttributesForSpec:(struct _Spec { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; long long x4; })a0;
- (id)_currentAttributes;
- (void)prepareForLayoutModeTransition;
- (void)finishLayoutModeTransition;
- (id)_generateSupplementryAttributesForSpec:(struct _Spec { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; long long x4; })a0 minified:(BOOL)a1;
- (id)_currentSupplementryAttributes;
- (void)invalidateCachedLayout;
- (long long)_itemCount;
- (void).cxx_destruct;
- (id)init;
- (long long)_favoritesCount;

@end
