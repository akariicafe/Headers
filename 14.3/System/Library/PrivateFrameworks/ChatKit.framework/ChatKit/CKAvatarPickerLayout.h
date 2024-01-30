@class NSArray, NSValue, UICollectionViewLayoutAttributes;
@protocol CKAvatarPickerLayoutDelegate;

@interface CKAvatarPickerLayout : UICollectionViewLayout

@property (copy, nonatomic) NSArray *attrCollection;
@property (copy, nonatomic) NSArray *supplementaryAttrCollection;
@property (copy, nonatomic) NSArray *cutoutAttrCollection;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *titleSupplementaryAttr;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *leftShadowDecorationAttr;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *rightShadowDecorationAttr;
@property (nonatomic) BOOL isInEditingMode;
@property (copy, nonatomic) NSValue *editingFrameValue;
@property (nonatomic) unsigned long long layoutMode;
@property (weak, nonatomic) id<CKAvatarPickerLayoutDelegate> delegate;

- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (BOOL)wantsChromelessAppearance;
- (unsigned long long)_itemCount;
- (void)invalidateLayoutAndCache;
- (id)initWithLayoutMode:(unsigned long long)a0;
- (BOOL)_shouldShowCutouts;
- (BOOL)_shouldShowContactNames;
- (BOOL)_usesGroupAvatar;
- (BOOL)_shouldShowTitle;
- (BOOL)_canShowShadowClipping;
- (void)_setupBannerLayout;
- (void)_setupDefaultLayout;
- (id)nameLayoutAttributesCollectionAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
