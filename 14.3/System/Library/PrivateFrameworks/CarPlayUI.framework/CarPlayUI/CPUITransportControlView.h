@class NSArray, NSString, UIImage, NSLayoutConstraint, UIButton;

@interface CPUITransportControlView : UIView

@property (retain, nonatomic) UIImage *playImage;
@property (retain, nonatomic) UIImage *pauseImage;
@property (retain, nonatomic) UIImage *defaultLeftButtonImage;
@property (retain, nonatomic) UIImage *defaultFastForwardButtonImage;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSLayoutConstraint *containerHeightConstraint;
@property (nonatomic) double buttonHeight;
@property (nonatomic) double buttonSpacing;
@property (readonly, nonatomic) UIButton *leftButton;
@property (readonly, nonatomic) UIButton *playPauseButton;
@property (readonly, nonatomic) UIButton *fastForwardButton;
@property (nonatomic) BOOL progressActive;
@property (retain, nonatomic) NSString *playButtonImageName;
@property (retain, nonatomic) NSString *pauseButtonImageName;

- (void)setupConstraints;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateProgressActive;

@end
