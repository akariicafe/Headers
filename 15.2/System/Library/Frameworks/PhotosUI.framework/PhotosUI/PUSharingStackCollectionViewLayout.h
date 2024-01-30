@class NSArray;
@protocol PUSharingStackCollectionViewLayoutDelegate;

@interface PUSharingStackCollectionViewLayout : UICollectionViewLayout

@property (readonly, copy, nonatomic) NSArray *stackedItemsLayoutAttributes;
@property (weak, nonatomic) id<PUSharingStackCollectionViewLayoutDelegate> delegate;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)_layoutItemInputAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
