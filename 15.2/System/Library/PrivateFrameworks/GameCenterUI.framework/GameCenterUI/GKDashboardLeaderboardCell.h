@class UIColor, NSString, UIImageView, GKLeaderboardSet, UILabel, UIView, GKLeaderboard;

@interface GKDashboardLeaderboardCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UIColor *titleLabelColor;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (readonly, nonatomic) UIView *popoverSourceView;

- (void)updateImage;
- (void)setHighlighted:(BOOL)a0;
- (void)awakeFromNib;
- (BOOL)canBecomeFocused;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateRank;
- (void)updateOverlay;

@end
