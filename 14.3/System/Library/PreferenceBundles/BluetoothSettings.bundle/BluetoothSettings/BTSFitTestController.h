@class UIImage, BTSDevice, UILabel, AVSystemController, OBTrayButton, UIView, OBWelcomeController, NSLayoutConstraint, AVQueuePlayer, UIActivityIndicatorView, UIStackView, AVAudioPlayer, UIImageView;

@interface BTSFitTestController : UIViewController {
    OBWelcomeController *_fitTestController;
    OBTrayButton *_playButton;
    NSLayoutConstraint *_topSpacerConstraint;
    AVSystemController *_avSystemController;
    AVQueuePlayer *_avQueuePlayer;
    AVAudioPlayer *_player;
    UIView *_fitTestContentView;
    UIStackView *_stackViewImages;
    UIImageView *_leftImView;
    UIImageView *_rightImView;
    UIView *_leftBudLabel;
    UILabel *_leftBudLabelText;
    UIView *_rightBudLabel;
    UILabel *_rightBudLabelText;
    UILabel *_leftBudResultLabel;
    UILabel *_rightBudResultLabel;
    UIImage *_buttonImage;
    UIActivityIndicatorView *_spinner;
    BOOL _budsInEar;
    BOOL _testActive;
    BOOL _callActive;
    BOOL _darkMode;
    BOOL _volumeModified;
    float _initialVolume;
}

@property (retain, nonatomic) BTSDevice *currentDevice;

- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)setupConstraints;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)isSmallScreenDevice;
- (BOOL)isCallActive;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)handleAudioSessionInterruption:(id)a0;
- (void)cleanupAudio;
- (void)deviceDisconnectedHandler:(id)a0;
- (void)powerChangedHandler:(id)a0;
- (void)handleMediaServerConnectionDied:(id)a0;
- (void)inEarStatusChanged:(id)a0;
- (void)sealValueChanged:(id)a0;
- (void)handleCallIsActiveDidChangeNotification:(id)a0;
- (void)dismissFitTest;
- (void)setupFitTestContentView;
- (void)updateFitTestActiveState;
- (void)startFitTest;
- (void)setCancelAction;
- (void)removeDoneButton;
- (void)resetVolume;
- (void)fitTestStopped;

@end
