@class NSArray;
@protocol PUSharingStackCollectionViewLayoutDelegate;

@interface PUSharingStackCollectionViewLayout : UICollectionViewLayout

@property (readonly, copy, nonatomic) NSArray *stackedItemsLayoutAttributes;
@property (weak, nonatomic) id<PUSharingStackCollectionViewLayoutDelegate> delegate;

- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)_layoutItemInputAtIndexPath:(id)a0;

@end
