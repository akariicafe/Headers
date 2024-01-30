@class NSArray;
@protocol PUHorizontalCollectionViewLayoutDelegate;

@interface PUHorizontalCollectionViewLayout : UICollectionViewLayout {
    struct CGSize { double width; double height; } _contentSize;
    NSArray *_cachedItemLayoutAttributes;
    NSArray *_cachedSectionFrames;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastRequestedRect;
    NSArray *_lastRequestedLayoutAttributesInRect;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } collectionViewBounds;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } itemsContentInset;
@property (weak, nonatomic) id<PUHorizontalCollectionViewLayoutDelegate> delegate;

+ (Class)invalidationContextClass;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)_layoutAttributesForItemAtIndexPath:(id)a0;

@end
