@class NSMutableArray, NSString, _UILegibilitySettings, UIView, FBScene, FBApplicationUpdateScenesTransaction;
@protocol UIScenePresenter, UIScenePresentation;

@interface SPUISpotlightRemoteViewController : UIViewController <SBUIActiveOrientationObserver, FBProcessWatchdogProviding, SPUISpotlightSceneManagerDelegate, FBApplicationUpdateScenesTransactionObserver, FBSceneObserver>

@property (retain) FBScene *scene;
@property (retain) NSString *sceneIdentifier;
@property (retain) FBApplicationUpdateScenesTransaction *transaction;
@property (retain) UIView<UIScenePresentation> *hostView;
@property (retain) id<UIScenePresenter> presenter;
@property (nonatomic) long long currentOrientation;
@property BOOL crashedWhileForeground;
@property (retain) NSMutableArray *sceneEventsQueue;
@property (readonly, nonatomic) BOOL prewarmSceneInTheBackground;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (void).cxx_destruct;
- (void)transaction:(id)a0 didCreateScene:(id)a1;
- (void)sceneDidInvalidate:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)setForeground:(BOOL)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (BOOL)setSceneFrameOnRotation;
- (void)didInvalidateSceneWhenForeground;
- (struct CGSize { double x0; double x1; })initialFittingSize;
- (id)watchdogPolicyForProcess:(id)a0 eventContext:(id)a1;
- (BOOL)_canShowWhileLocked;
- (id)sceneSpecification;
- (id)watchdogTerminationRequestForProcess:(id)a0 error:(id)a1;
- (id)initWithSceneIdentifier:(id)a0;
- (void)addOrExecuteEventAsNeeded:(id /* block */)a0;
- (void)updateTraitCollection;
- (void)createSceneIfNeededWithPriority:(long long)a0;
- (void)updateSafeAreasOnSettings:(id)a0;
- (void)createSceneWithPriority:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sceneSettingsFrameFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearEventQueue;
- (void)willLaunchSpotlightInBackground;

@end
