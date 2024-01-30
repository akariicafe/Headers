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
    BOOL _budsInEar;
    BOOL _alertShowing;
}

@property (retain, nonatomic) BTSDevice *currentDevice;

- (id)initWithDevice:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)initCommon;
- (void)setupConstraints;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)setupStackView;
- (void)handleAudioSessionInterruption:(id)a0;
- (void)checkStatusAndPlay;
- (void)deviceDisconnectedHandler:(id)a0;
- (void)dismissWelcomeController;
- (void)handleMediaServerConnectionDied:(id)a0;
- (void)inEarStatusChangedHandler:(id)a0;
- (void)powerChangedHandler:(id)a0;
- (void)quitSpatialTutorial:(id)a0;
- (void)segmentControlValueChanged:(id)a0;
- (void)setupWelcomeController;
- (void)showAlert;
- (void)startPlayingContent;
- (void)stopPlayingContent;
- (void)updateInEarState;

@end
