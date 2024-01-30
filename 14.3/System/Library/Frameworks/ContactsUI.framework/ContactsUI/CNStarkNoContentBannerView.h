@class NSString, UILabel, NSMutableArray, UIButton;

@interface CNStarkNoContentBannerView : UIView

@property (retain) UILabel *titleLabel;
@property (retain) UIButton *siriButton;
@property (retain) NSMutableArray *constraintsForTitleLabel;
@property (retain) NSMutableArray *constraintsForTitleLabelAndSiriButton;
@property (nonatomic) BOOL siriButtonSelected;
@property (retain, nonatomic) NSString *titleString;
@property (nonatomic) BOOL siriButtonEnabled;

- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)choose;
- (void).cxx_destruct;
- (void)deselect;
- (void)updateConstraints;
- (void)select;
- (void)setupTitleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSiriButton;
- (void)setupConstraintsforTitleLabel;
- (void)setupConstraintsForTitleLabelAndSiriButton;
- (void)siriButtonTapped:(id)a0;
- (void)siriButtonTouchDown:(id)a0;
- (void)siriButtonTouchUp:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setupClickGestureRecognizer;
- (void)stateUpdated;
- (void)clickGestureDidUpdate:(id)a0;

@end
