@class OBBoldTrayButton, AVPlayerLooper, AVQueuePlayer, AVPlayerViewController, UIView, AVTSplashScreenConfiguration, NSLayoutConstraint;
@protocol AVTSplashScreenViewControllerDelegate;

@interface AVTSplashScreenViewController : OBWelcomeFullCenterContentController

@property (retain, nonatomic) OBBoldTrayButton *continueButton;
@property (retain, nonatomic) UIView *videoContentView;
@property (retain, nonatomic) AVTSplashScreenConfiguration *configuration;
@property (nonatomic) BOOL isPlayingVideos;
@property (retain, nonatomic) AVPlayerLooper *playerLooper;
@property (retain, nonatomic) AVQueuePlayer *queuePlayer;
@property (retain, nonatomic) AVPlayerViewController *playerViewController;
@property (retain, nonatomic) AVPlayerLooper *secondaryPlayerLooper;
@property (retain, nonatomic) AVQueuePlayer *secondaryQueuePlayer;
@property (retain, nonatomic) AVPlayerViewController *secondaryPlayerViewController;
@property (retain, nonatomic) NSLayoutConstraint *videoContentWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *videoContentHeightConstraint;
@property (weak, nonatomic) id<AVTSplashScreenViewControllerDelegate> delegate;
@property (readonly, nonatomic) AVPlayerViewController *primaryVideoController;
@property (readonly, nonatomic) AVPlayerLooper *primaryVideoLooper;

- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithConfiguration:(id)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (double)desiredHeightForVideoContent;
- (void)detachVideoControllerAndLooper;
- (void)didTapContinueButton:(id)a0;
- (id)initWithConfiguration:(id)a0 styleProvider:(id)a1;
- (id)initWithDefaultConfiguration;
- (void)startPlayingVideos;
- (void)stopPlayingVideos;

@end
