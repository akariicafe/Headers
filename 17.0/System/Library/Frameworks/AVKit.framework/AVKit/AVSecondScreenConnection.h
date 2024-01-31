@class UIView, AVPlayer, AVDisplayCriteria, AVSecondScreen, AVSecondScreenDebugAssistant, UIViewController, AVPlayerLayer, AVSecondScreenViewController, AVObservationController;

@interface AVSecondScreenConnection : NSObject

@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) AVSecondScreen *connectedSecondScreen;
@property (retain, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;
@property (nonatomic) struct CGSize { double width; double height; } maximumVideoResolution;
@property (nonatomic, getter=isReady) BOOL ready;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) BOOL requiresTVOutScreen;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVObservationController *observationController;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AVSecondScreenViewController *secondScreenViewController;
@property (readonly, weak, nonatomic) AVPlayerLayer *playerLayer;
@property (readonly, nonatomic, getter=isReadyToConnect) BOOL readyToConnect;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (readonly, nonatomic) AVSecondScreenDebugAssistant *debugAssistant;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } videoDisplaySize;
@property (readonly, nonatomic) double videoDisplayScale;
@property (retain, nonatomic) AVPlayer *debugInfoPlayer;

- (void)_updateReadyToConnect;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startUpdates;
- (void)setPlayerLayer:(id)a0;
- (void)_updatePreferredDisplayCriteria;
- (BOOL)_allowsNonAirPlayExternalPlayback;
- (BOOL)_currentItemIsReadyToPlayVideoOrLoadingWhileActive;
- (BOOL)_determineIsReadyToConnect;
- (void)_loadSecondScreenViewControllerIfNeeded;
- (void)_postNotification:(id)a0 oldValue:(id)a1 newValue:(id)a2;
- (void)_startObservingPlayer;
- (void)_updatePreferredDisplayCriteriaFromPreparedAssetIfNeeded:(id)a0;
- (void)connectWithScreen:(id)a0 active:(BOOL)a1;
- (id)initWithPlayer:(id)a0 playerLayer:(id)a1;
- (void)setReadyToConnect:(BOOL)a0;

@end
