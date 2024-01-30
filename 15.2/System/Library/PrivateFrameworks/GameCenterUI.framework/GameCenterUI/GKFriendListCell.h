@class GKDashboardPlayerPhotoView, UILabel, NSLayoutConstraint;

@interface GKFriendListCell : UITableViewCell

@property (weak) GKDashboardPlayerPhotoView *friendPhoto;
@property (weak) UILabel *friendName;
@property (weak) UILabel *friendLastPlayedGame;
@property (weak) NSLayoutConstraint *friendPhotoTopConstraint;
@property (weak) NSLayoutConstraint *friendNameTopConstraint;

- (void)awakeFromNib;
- (void)setPlayer:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
