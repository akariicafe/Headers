@class GKDashboardPlayerPhotoView, UIStackView, NSLayoutConstraint, GKButton, UILabel, UIView, GKChallenge;

@interface GKChallengeDetailViewController : GKDashboardCollectionViewController

@property (retain, nonatomic) GKChallenge *challenge;
@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) UILabel *categoryLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerAvatarView;
@property (retain, nonatomic) UILabel *challengeByNameLabel;
@property (retain, nonatomic) GKButton *playNowButton;
@property (retain, nonatomic) GKButton *declineButton;
@property (retain, nonatomic) UIStackView *artworkStack;
@property (retain, nonatomic) UIStackView *challengerStack;
@property (retain, nonatomic) UIStackView *actionStack;
@property (retain, nonatomic) NSLayoutConstraint *artworkStackPortraitTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *artworkViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *challengerStackLandscapeTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *challengerStackPortraitTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *actionStackPortraitTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *actionStackPortraitBottomConstraint;
@property (weak, nonatomic) id delegate;
@property (nonatomic) BOOL shouldShowPlay;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)configureForChallenge;
- (void)configureButtons;
- (void)adjustLabelFonts;
- (void)adjustFontSizeForLabel:(id)a0;
- (void)updateIconViewWithSubView:(id)a0;
- (void)updateLeaderboardImage;
- (void)donePressed:(id)a0;
- (void)challengeOK:(id)a0;
- (id)initWithChallenge:(id)a0;
- (void)playNowPressed:(id)a0;
- (void)declinePressed:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)title;
- (void)viewDidLoad;

@end
