@class NSString, NSTimer, NSURL, UIView, FBScene, FBApplicationUpdateScenesTransaction;
@protocol UIScenePresenter, DBEnvironment, UIScenePresentation;

@interface DBInstrumentClusterAppSceneViewController : UIViewController <FBSceneObserver, BSInvalidatable, DBProcessMonitorObserving>

@property (weak, nonatomic) id<DBEnvironment> environment;
@property (retain, nonatomic) id<UIScenePresenter> scenePresenter;
@property (retain, nonatomic) UIView<UIScenePresentation> *sceneHostView;
@property (copy, nonatomic) NSString *requester;
@property (readonly, nonatomic) NSString *sceneID;
@property (retain, nonatomic) FBScene *scene;
@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) NSTimer *retryTimer;
@property (nonatomic) double retryDelay;
@property (retain, nonatomic) FBApplicationUpdateScenesTransaction *transaction;
@property (retain, nonatomic) NSURL *lastClusterURL;
@property (nonatomic) unsigned long long targetAppCrashTally;
@property (nonatomic) unsigned long long proxyAppCrashTally;
@property (copy, nonatomic) NSString *targetBundleIdentifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutFrame;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (readonly, nonatomic) NSString *slotId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEnvironment:(id)a0;
- (void)sceneDidInvalidate:(id)a0;
- (void)_retryTimerFired:(id)a0;
- (void)viewDidLoad;
- (void)invalidate;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frame;
- (id)_applicationInfo;
- (id)_sceneSettingsCreateIfNecessary;
- (void)backgroundScene;
- (id)_applySceneSettingsToSettings:(id)a0 foreground:(BOOL)a1 sceneSpecification:(id)a2;
- (void)_invalidateRetryTimer;
- (void)_invalidateScene;
- (void)_performSceneUpdateForeground:(BOOL)a0;
- (void)_performSceneUpdateForeground:(BOOL)a0 settings:(id)a1;
- (id)_proxiedApplicationInfo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scaleFrameIfNecessary:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_sceneSafeAreaInsets;
- (void)_scheduleForegroundRetry;
- (void)_updateSceneHostViewFrameScaleIfNecessary;
- (void)_updateSceneID;
- (void)foregroundSceneWithURL:(id)a0;
- (id)initWithEnvironment:(id)a0 slotId:(id)a1;
- (void)processMonitor:(id)a0 didHandleDeathOfBundleIdentifier:(id)a1;
- (void)processMonitor:(id)a0 shouldHandleDeathOfBundleIdentifier:(id)a1 isCrash:(BOOL)a2;
- (void)updateSceneWithAnimationSettings:(id)a0;

@end
