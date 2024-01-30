@class UIButton, GKLabel, NSString, NSArray, UILabel, GKDashboardPlayerPhotoView, GKTurnBasedMatch;

@interface GKTurnBasedMatchDetailHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *playingWithLabel;
@property (retain, nonatomic) GKLabel *startedLabel;
@property (retain, nonatomic) GKLabel *lastTurnLabel;
@property (retain, nonatomic) GKLabel *infoLabel;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *avatarView;
@property (readonly, nonatomic) NSString *playingWithString;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (retain, nonatomic) NSString *infoText;
@property (retain, nonatomic) NSString *actionText;
@property (weak, nonatomic) id actionTarget;
@property (nonatomic) SEL actionSelector;
@property (retain, nonatomic) UIButton *actionButton;

+ (BOOL)requiresConstraintBasedLayout;

- (void)actionPressed:(id)a0;
- (void).cxx_destruct;
- (void)establishConstraints;
- (void)didUpdateModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLabelAlpha:(double)a0;

@end
