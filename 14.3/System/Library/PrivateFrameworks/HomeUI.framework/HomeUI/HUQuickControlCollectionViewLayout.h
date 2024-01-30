@class HUQuickControlGridLayoutManager, HUQuickControlCollectionViewControllerLayoutOptions, NSMutableDictionary, HUQuickControlCollectionViewLayoutInfo, NSLayoutConstraint;

@interface HUQuickControlCollectionViewLayout : UICollectionViewLayout

@property (readonly, nonatomic) NSMutableDictionary *cachedLayoutAttributesByIndexPath;
@property (readonly, nonatomic) NSMutableDictionary *cachedSectionHeaderLayoutAttributes;
@property (retain, nonatomic) HUQuickControlCollectionViewLayoutInfo *layoutInfo;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (retain, nonatomic) HUQuickControlCollectionViewControllerLayoutOptions *layoutOptions;
@property (retain, nonatomic) HUQuickControlGridLayoutManager *layoutManager;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;

+ (Class)layoutAttributesClass;

- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)_computeLayoutInfo;
- (void)_computeGridLayoutAttributesForLayoutInfo:(id)a0;
- (id)_computeRowLayoutsForGridLayout:(id)a0 gridLayoutSettings:(id)a1;
- (id)_intrinsicSizeDescriptorForItemAtIndexPath:(id)a0 itemSize:(unsigned long long)a1;
- (id)_computeSizingLayoutInfo;
- (id)_computeRowLayoutOriginsFromLayoutDetails:(id)a0 forSectionSettings:(id)a1;

@end
