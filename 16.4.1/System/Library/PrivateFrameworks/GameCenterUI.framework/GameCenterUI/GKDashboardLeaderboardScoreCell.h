@class UIView, GKScore, UILabel, GKDashboardPlayerPhotoView, NSLayoutConstraint;

@interface GKDashboardLeaderboardScoreCell : GKRectShadowCell

@property (nonatomic) GKDashboardPlayerPhotoView *playerView;
@property (retain, nonatomic) NSLayoutConstraint *playerViewHeightConstraint;
@property (nonatomic) UILabel *rankLabel;
@property (nonatomic) UILabel *nameLabel;
@property (nonatomic) UILabel *scoreLabel;
@property (nonatomic) UIView *topLine;
@property (nonatomic) UIView *bottomLine;
@property (nonatomic) UIView *monogramColorView;
@property (retain, nonatomic) GKScore *score;
@property (nonatomic) BOOL linesVisible;
@property (readonly, nonatomic) UIView *popoverSourceView;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (id)highRankNib;
+ (id)lowRankNib;

- (void)awakeFromNib;
- (void).cxx_destruct;
- (BOOL)linesVisible;
- (void)setLinesVisible:(BOOL)a0;
- (void)setupForScore:(id)a0;

@end
