@class UIView, GKLeaderboardEntry, UILabel, GKDashboardPlayerPhotoView, NSLayoutConstraint;
@protocol GKLeaderboardScoreActionDelegate;

@interface GKLeaderboardScoreCell : GKFocusHighlightingCollectionViewCell

@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerView;
@property (retain, nonatomic) NSLayoutConstraint *playerViewHeightConstraint;
@property (nonatomic) BOOL isLocalPlayerScore;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *monogramColorView;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) GKLeaderboardEntry *entry;
@property (nonatomic) BOOL lineVisible;
@property (weak, nonatomic) id<GKLeaderboardScoreActionDelegate> delegate;
@property (nonatomic) BOOL shouldShowContextMenu;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (id)lowRankNib;
+ (id)highRankNib;

- (void)setHighlighted:(BOOL)a0;
- (void)awakeFromNib;
- (BOOL)canBecomeFocused;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateLayerMask:(id)a0;
- (void)setLineVisible:(BOOL)a0;
- (BOOL)lineVisible;
- (void)setupForLeaderboardEntry:(id)a0;

@end
