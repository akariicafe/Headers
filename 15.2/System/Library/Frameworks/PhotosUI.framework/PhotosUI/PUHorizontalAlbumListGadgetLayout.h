@protocol PUHorizontalAlbumListGadgetLayoutDelegate;

@interface PUHorizontalAlbumListGadgetLayout : PXGadgetCollectionViewLayout

@property (weak, nonatomic) id<PUHorizontalAlbumListGadgetLayoutDelegate> horizontalLayoutDelegate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } albumCellSize;
@property (readonly, nonatomic) BOOL showsHorizontalScrollIndicator;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (unsigned long long)_numberOfAlbums;
- (void).cxx_destruct;
- (id)init;
- (double)_horizontalScrollIndicatorSpacing;
- (id)initWithHorizontalLayoutDelegate:(id)a0 showsHorizontalScrollIndicator:(BOOL)a1;

@end
