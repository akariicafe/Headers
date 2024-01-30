@class UIStackView, UIView, NSArray, NSString, GKLeaderboardSet, UIImageView, GKLeaderboard, NSLayoutConstraint, UIVisualEffectView, UILabel, UIColor;

@interface GKLeaderboardCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) NSLayoutConstraint *iconContainerHeight;
@property (retain, nonatomic) NSLayoutConstraint *minimumIconHeight;
@property (retain, nonatomic) UIView *iconContainer;
@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) UIColor *titleLabelColor;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) NSArray *customBackgroundBlur;
@property (retain, nonatomic) NSString *dataToken;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (readonly, nonatomic) UIView *popoverSourceView;

- (void)updateLayout;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)updateImage;
- (void).cxx_destruct;
- (void)addVisualEffect;
- (void)setupFallbackIcon;
- (void)updateOverlay;
- (void)updateRank;
- (void)updateSummary;

@end
