@class NSString, UILabel, NSMutableArray, UIButton;

@interface CNStarkNoContentBannerView : UIView

@property (retain) UILabel *titleLabel;
@property (retain) UIButton *siriButton;
@property (retain) NSMutableArray *constraintsForTitleLabel;
@property (retain) NSMutableArray *constraintsForTitleLabelAndSiriButton;
@property (nonatomic) BOOL siriButtonSelected;
@property (retain, nonatomic) NSString *titleString;
@property (nonatomic) BOOL siriButtonEnabled;

- (void)select;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setupSiriButton;
- (void)setupTitleLabel;
- (void)choose;
- (void)clickGestureDidUpdate:(id)a0;
- (void)deselect;
- (void)setupClickGestureRecognizer;
- (void)setupConstraintsForTitleLabelAndSiriButton;
- (void)setupConstraintsforTitleLabel;
- (void)siriButtonTapped:(id)a0;
- (void)siriButtonTouchDown:(id)a0;
- (void)siriButtonTouchUp:(id)a0;
- (void)stateUpdated;

@end
