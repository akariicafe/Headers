@class NSMutableDictionary;

@interface PUDoubleHeightHorizontalAlbumListGadgetLayout : PUHorizontalAlbumListGadgetLayout

@property (readonly, nonatomic) NSMutableDictionary *layoutAttributesByIndexPath;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayout;
- (BOOL)prefersPagingEnabled;
- (void)_adjustLayoutAttributes:(id)a0;
- (void).cxx_destruct;
- (id)initWithHorizontalLayoutDelegate:(id)a0 showsHorizontalScrollIndicator:(BOOL)a1;

@end
