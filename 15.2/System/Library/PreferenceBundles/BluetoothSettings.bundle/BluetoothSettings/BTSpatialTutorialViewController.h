@class UIStackView, OBWelcomeController, BTSDevice, UIView, UISegmentedControl, VPSpatialTutorialContentView, NSMutableArray, UIAlertController, RMMediaSession;

@interface BTSpatialTutorialViewController : UIViewController {
    OBWelcomeController *_welcomeController;
    UIStackView *_stackView;
    UISegmentedControl *_segmentedControl;
    UIView *_spacerView;
    VPSpatialTutorialContentView *_spatialTutorialContentView;
    UIAlertController *_alert;
    NSMutableArray *_constraints;
    RMMediaSession *_mediaSession;
    BOOL _mediaSessionStarted;
    BOOL _isCurrentModeSpatial;
    BOOL _isCurrentModeChanged;
    BOOL _budsInEar;
    BOOL _alertShowing;
}

@property (retain, nonatomic) BTSDevice *currentDevice;

- (void)applicationDidEnterBackground:(id)a0;
- (void)viewDidLoad;
- (void)applicationDidBecomeActive:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)initCommon;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupStackView;
- (void)viewDidAppear:(BOOL)a0;
- (void)handleAudioSessionInterruption:(id)a0;
- (void)deviceDisconnectedHandler:(id)a0;
- (void)powerChangedHandler:(id)a0;
- (void)setupWelcomeController;
- (void)notifySpatialAudioUpdate:(BOOL)a0;
- (void)checkStatusAndPlay;
- (void)stopPlayingContent;
- (void)dismissWelcomeController;
- (void)inEarStatusChangedHandler:(id)a0;
- (void)handleMediaServerConnectionDied:(id)a0;
- (void)quitSpatialTutorial:(id)a0;
- (void)segmentControlValueChanged:(id)a0;
- (void)updateInEarState;
- (void)showAlert;
- (void)startPlayingContent;
- (id)initWithMode:(id)a0 device:(id)a1;
- (void)enableSpatialAudio:(id)a0;
- (void)disableSpatialAudio:(id)a0;

@end
