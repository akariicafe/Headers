@class PUAlbumListCellContentView;

@interface PUAlbumListCell : UICollectionViewCell

@property (readonly, nonatomic) PUAlbumListCellContentView *albumListCellContentView;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)snapshotViewAfterScreenUpdates:(BOOL)a0;
- (void)willTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (void)didTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (id)focusEffect;

@end
