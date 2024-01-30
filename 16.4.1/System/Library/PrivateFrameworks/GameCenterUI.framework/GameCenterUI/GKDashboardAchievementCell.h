@class GKResizingLabel, GKAchievementIconView, GKAchievement, UILabel, UIView;

@interface GKDashboardAchievementCell : GKRectShadowCell

@property (retain, nonatomic) GKAchievement *achievement;
@property (retain, nonatomic) GKAchievement *localAchievement;
@property (nonatomic) GKAchievementIconView *iconView;
@property (nonatomic) GKResizingLabel *titleLabel;
@property (nonatomic) GKResizingLabel *descriptionLabel;
@property (nonatomic) UILabel *pointsLabel;
@property (nonatomic) UILabel *pointsTextLabel;
@property (readonly, nonatomic) UIView *popoverSourceView;

- (void).cxx_destruct;
- (void)setupForAchievement:(id)a0 localAchievement:(id)a1;

@end
