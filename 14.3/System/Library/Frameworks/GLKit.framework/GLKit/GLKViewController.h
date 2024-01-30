@class UIScreen, NSString, CADisplayLink, GLKDisplayLinkMessenger;
@protocol GLKViewControllerDelegate;

@interface GLKViewController : UIViewController <NSCoding, GLKViewDelegate>

@property (retain, nonatomic) UIScreen *screen;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL displayLinkPaused;
@property (retain, nonatomic) GLKDisplayLinkMessenger *displayLinkMessenger;
@property (nonatomic) BOOL viewIsVisible;
@property (nonatomic) BOOL firstResumeOccurred;
@property (nonatomic) double timeSinceFirstResumeStartTime;
@property (nonatomic) BOOL lastResumeOccurred;
@property (nonatomic) double timeSinceLastResumeStartTime;
@property (nonatomic) BOOL lastUpdateOccurred;
@property (nonatomic) double timeSinceLastUpdatePreviousTime;
@property (nonatomic) BOOL lastDrawOccurred;
@property (nonatomic) double timeSinceLastDrawPreviousTime;
@property (nonatomic) void /* function */ *updateIMP;
@property (nonatomic) long long screenFramesPerSecond;
@property (nonatomic) id<GLKViewControllerDelegate> delegate;
@property (nonatomic) long long preferredFramesPerSecond;
@property (readonly, nonatomic) long long framesPerSecond;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) long long framesDisplayed;
@property (readonly, nonatomic) double timeSinceFirstResume;
@property (readonly, nonatomic) double timeSinceLastResume;
@property (readonly, nonatomic) double timeSinceLastUpdate;
@property (readonly, nonatomic) double timeSinceLastDraw;
@property (nonatomic) BOOL pauseOnWillResignActive;
@property (nonatomic) BOOL resumeOnDidBecomeActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setView:(id)a0;
- (void)_initCommon;
- (id)init;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void)_createDisplayLinkForScreen:(id)a0;
- (void)glkView:(id)a0 drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)encodeWithCoder:(id)a0;
- (void)_updateAndDraw;
- (void)_updateScreenIfChanged;
- (long long)_calculateScreenFramesPerSecond:(id)a0;
- (void)_configureNotifications;
- (void)_pauseByNotification;
- (void)_resumeByNotification;

@end
