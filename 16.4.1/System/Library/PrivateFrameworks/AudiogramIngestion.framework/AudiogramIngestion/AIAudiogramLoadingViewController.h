@class UIActivityIndicatorView, UILabel, UIProgressView;

@interface AIAudiogramLoadingViewController : OBWelcomeController

@property (nonatomic) long long style;
@property (retain, nonatomic) UIProgressView *progressView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UILabel *progressLabel;
@property (nonatomic) float progress;

- (id)initWithTitle:(id)a0 style:(long long)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)showLoadingMessage:(id)a0;

@end
