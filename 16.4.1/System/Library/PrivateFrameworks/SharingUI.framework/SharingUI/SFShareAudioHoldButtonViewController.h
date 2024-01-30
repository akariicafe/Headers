@class UIImageView, SFMediaPlayerView, UILabel, NSLayoutConstraint, UIButton;

@interface SFShareAudioHoldButtonViewController : SFShareAudioBaseViewController

@property (retain, nonatomic) SFMediaPlayerView *productMovieView;
@property (retain, nonatomic) UIImageView *shareImageView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) NSLayoutConstraint *movieViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *movieViewTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *movieViewHeightConstraint;
@property (nonatomic) unsigned int colorCode;
@property (nonatomic) unsigned int productID;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateDeviceVisual:(id)a0;
- (void)eventCancel:(id)a0;

@end
