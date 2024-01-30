@protocol PUHorizontalAlbumListGadgetLayoutDelegate;

@interface PUHorizontalAlbumListGadgetLayout : PXGadgetCollectionViewLayout

@property (weak, nonatomic) id<PUHorizontalAlbumListGadgetLayoutDelegate> horizontalLayoutDelegate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } albumCellSize;
@property (readonly, nonatomic) BOOL showsHorizontalScrollIndicator;

- (double)_horizontalScrollIndicatorSpacing;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (unsigned long long)_numberOfAlbums;
- (id)initWithHorizontalLayoutDelegate:(id)a0 showsHorizontalScrollIndicator:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;

@end
