@class PUCollectionViewData, UICollectionViewLayoutAttributes;
@protocol PUHorizontalTiledCollectionViewLayoutDelegate;

@interface PUHorizontalTiledCollectionViewLayout : UICollectionViewLayout {
    PUCollectionViewData *_data;
    UICollectionViewLayoutAttributes *_dummyAttrs;
}

@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } itemsContentInset;
@property (weak, nonatomic) id<PUHorizontalTiledCollectionViewLayoutDelegate> delegate;
@property (readonly, nonatomic) BOOL hasReferenceIndexPath;

+ (Class)invalidationContextClass;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateCachedLayout;
- (void).cxx_destruct;
- (id)init;
- (id)_layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)_updateLayoutData:(id)a0 inDirection:(long long)a1 outDeltaOriginX:(double *)a2;
- (void)_ensureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inData:(id)a1 outDeltaOriginX:(double *)a2;
- (void)_ensureIndexPath:(id)a0 inData:(id)a1;
- (id)layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
