@protocol PUAlbumListTableViewCellDelegate;

@interface PUAlbumListTableViewCell : UITableViewCell

@property (weak, nonatomic) id<PUAlbumListTableViewCellDelegate> stateChangeDelegate;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)willTransitionToState:(unsigned long long)a0;

@end
