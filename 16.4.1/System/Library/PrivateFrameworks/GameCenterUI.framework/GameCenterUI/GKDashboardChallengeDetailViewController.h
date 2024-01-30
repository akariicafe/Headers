@class UIButton, GKAchievementIconView, UILabel, NSLayoutConstraint, GKChallenge;

@interface GKDashboardChallengeDetailViewController : GKDetailViewController

@property (retain, nonatomic) GKChallenge *challenge;
@property (nonatomic) GKAchievementIconView *iconView;
@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) UILabel *descriptionLabel;
@property (nonatomic) UILabel *fromLabel;
@property (nonatomic) UIButton *playButton;
@property (nonatomic) UIButton *declineButton;
@property (nonatomic) NSLayoutConstraint *topConstraint;
@property (nonatomic) double topMargin;
@property (nonatomic) NSLayoutConstraint *iconHeightConstraint;
@property (nonatomic) NSLayoutConstraint *speechToFromConstraint;
@property (weak, nonatomic) id delegate;
@property (nonatomic) BOOL shouldShowPlay;

- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)play:(id)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)challengeOK:(id)a0;
- (void)configureForChallenge;
- (void)decline:(id)a0;
- (id)initWithChallenge:(id)a0;
- (void)updateLeaderboardImage;

@end
