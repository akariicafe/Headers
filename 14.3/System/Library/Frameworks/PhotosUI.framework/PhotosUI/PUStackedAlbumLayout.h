@class NSArray, PUAlbumListTransitionContext, UICollectionViewLayoutAttributes, NSMutableDictionary;

@interface PUStackedAlbumLayout : UICollectionViewLayout {
    NSMutableDictionary *_visibleLayoutAttributesByIndexPath;
    NSMutableDictionary *_derivedLayoutAttributesByIndexPath;
    NSMutableDictionary *_zIndexByIndexPath;
}

@property (retain, nonatomic) UICollectionViewLayoutAttributes *globalHeaderAttributes;
@property (copy, nonatomic) NSArray *visibleStackedItemLayoutAttributes;
@property (copy, nonatomic) UICollectionViewLayoutAttributes *referenceItemLayoutAttributes;
@property (nonatomic) struct CGPoint { double x; double y; } referenceCenter;
@property (nonatomic) double yAdjust;
@property (nonatomic) struct CGSize { double width; double height; } contentSizeAdjust;
@property (retain, nonatomic) PUAlbumListTransitionContext *albumListTransitionContext;
@property (nonatomic, setter=setInteractive:) BOOL isInteractive;

- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id /* block */)_animationForReusableView:(id)a0 toLayoutAttributes:(id)a1 type:(unsigned long long)a2;
- (long long)zIndexForItemAtIndexPath:(id)a0;
- (id)_newAdjustedLayoutAttributes:(id)a0 indexPath:(id)a1;

@end
