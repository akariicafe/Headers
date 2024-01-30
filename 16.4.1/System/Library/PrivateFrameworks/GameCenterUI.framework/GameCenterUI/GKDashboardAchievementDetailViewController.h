@class GKAchievementIconView, GKAchievement, UILabel, UIButton;

@interface GKDashboardAchievementDetailViewController : GKDetailViewController

@property (nonatomic) GKAchievementIconView *iconView;
@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) UILabel *descriptionLabel;
@property (nonatomic) UILabel *progressLabel;
@property (nonatomic) UILabel *disabledLabel;
@property (nonatomic) UIButton *firstButton;
@property (nonatomic) UIButton *secondButton;
@property (retain, nonatomic) GKAchievement *achievement;
@property (retain, nonatomic) GKAchievement *localAchievement;

- (void)share:(id)a0;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)challenge:(id)a0;
- (void)configureForAchievements;
- (id)initWithAchievement:(id)a0 localAchievement:(id)a1;

@end
