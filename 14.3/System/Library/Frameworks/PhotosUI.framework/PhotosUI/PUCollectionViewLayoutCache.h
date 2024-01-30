@class NSMutableDictionary;
@protocol PUCollectionViewLayoutProvider;

@interface PUCollectionViewLayoutCache : UICollectionViewLayout {
    NSMutableDictionary *_itemLayoutAttributesByIndexPath;
    NSMutableDictionary *_supplementaryViewLayoutAttributesByKind;
    NSMutableDictionary *_decorationViewLayoutAttributesByKind;
    struct { unsigned char hasSupplementaryLayoutAttributes : 1; unsigned char hasDecorationLayoutAttributes : 1; } _layoutProviderFlags;
}

@property (readonly, weak, nonatomic) id<PUCollectionViewLayoutProvider> layoutProvider;
@property (nonatomic) BOOL cachesResults;

- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateLayoutCache;
- (id)initWithProvider:(id)a0;

@end
