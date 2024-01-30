@class UILabel, NSString, GKTimeScopeButton;

@interface GKDashboardLeaderboardScoreHeaderView : UICollectionReusableView

@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) GKTimeScopeButton *timeScopeButton;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long timeScope;
@property (nonatomic) id timeScopeTarget;
@property (nonatomic) SEL timeScopeAction;

+ (double)defaultHeight;

- (void)timeScopePressed:(id)a0;
- (void)awakeFromNib;
- (void)setTitle:(id)a0;
- (void)setTimeScope:(long long)a0;
- (long long)timeScope;
- (id)title;

@end
