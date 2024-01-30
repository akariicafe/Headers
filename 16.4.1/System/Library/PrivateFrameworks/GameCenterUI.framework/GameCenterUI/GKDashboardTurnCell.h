@class UIColor, UIImageView, UILabel, NSLayoutConstraint;

@interface GKDashboardTurnCell : GKDashboardPlayerCell

@property (nonatomic) UILabel *dateLabel;
@property (nonatomic) UILabel *turnLabel;
@property (nonatomic) UIImageView *actionIndicatorView;
@property (nonatomic) NSLayoutConstraint *dateToNameConstraint;
@property (nonatomic) NSLayoutConstraint *turnToNameConstraint;
@property (retain, nonatomic) UIColor *dateColor;
@property (retain, nonatomic) UIColor *turnColor;
@property (nonatomic) double dateToNameConstant;
@property (nonatomic) double turnToNameConstant;
@property (nonatomic) long long displayIndex;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (struct CGSize { double x0; double x1; })defaultSizeForTurnDetail;

- (void)awakeFromNib;
- (void).cxx_destruct;
- (void)configureForMatch:(id)a0;
- (void)configureForParticipant:(id)a0 inMatch:(id)a1;
- (void)setOnDarkBackground:(BOOL)a0;
- (BOOL)wantsLocalPlayerAction:(id)a0;

@end
