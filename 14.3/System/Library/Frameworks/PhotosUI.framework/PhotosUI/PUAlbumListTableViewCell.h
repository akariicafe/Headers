@protocol PUAlbumListTableViewCellDelegate;

@interface PUAlbumListTableViewCell : UITableViewCell

@property (weak, nonatomic) id<PUAlbumListTableViewCellDelegate> stateChangeDelegate;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)willTransitionToState:(unsigned long long)a0;

@end
