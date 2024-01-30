@class UIColor, GKDashboardPlayerShadowView, GKPlayer, UIView, NSLayoutConstraint, UILabel;

@interface GKDashboardPlayerCell : GKFocusHighlightingCollectionViewCell

@property (retain, nonatomic) UIColor *nameColor;
@property (retain, nonatomic) UIColor *statusColor;
@property (nonatomic) double playerViewBottomToNameLabelTopConstant;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) BOOL onDarkBackground;
@property (retain, nonatomic) UIColor *defaultContentBackgroundColor;
@property (readonly, nonatomic) UIView *popoverSourceView;
@property (nonatomic) GKDashboardPlayerShadowView *playerView;
@property (nonatomic) NSLayoutConstraint *playerViewBottomToNameLabelTopConstraint;
@property (nonatomic) UILabel *nameLabel;
@property (nonatomic) UILabel *statusLabel;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (double)preferredCollectionHeight;

- (void)setHighlighted:(BOOL)a0;
- (void)awakeFromNib;
- (BOOL)canBecomeFocused;
- (void)setStatusText:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)setNameText:(id)a0;
- (void)setStatusWithLastPlayedDate:(id)a0;
- (void)updateLabelColorForDashboard;

@end
