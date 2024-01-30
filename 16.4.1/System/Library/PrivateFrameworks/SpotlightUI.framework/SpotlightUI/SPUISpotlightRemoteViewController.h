@class NSMutableArray, NSString, _UILegibilitySettings, FBSDisplayConfiguration, UIView, FBScene, FBApplicationUpdateScenesTransaction;
@protocol UIScenePresenter, UIScenePresentation;

@interface SPUISpotlightRemoteViewController : UIViewController <FBProcessWatchdogProviding, SPUISpotlightSceneManagerDelegate, FBApplicationUpdateScenesTransactionObserver, FBSceneObserver> {
    FBSDisplayConfiguration *_displayConfiguration;
    BOOL _delayPresentationTillSceneContentIsReady;
}

@property (retain) FBScene *scene;
@property (retain) NSString *sceneIdentifier;
@property (retain) FBApplicationUpdateScenesTransaction *transaction;
@property (retain) UIView<UIScenePresentation> *hostView;
@property (retain) id<UIScenePresenter> presenter;
@property (nonatomic) long long currentOrientation;
@property (retain) NSMutableArray *sceneEventsQueue;
@property (readonly, nonatomic) BOOL prewarmSceneInTheBackground;
@property (nonatomic) BOOL crashedWhileForeground;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setForeground:(BOOL)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)sceneSpecification;
- (void)sceneDidInvalidate:(id)a0;
- (void)sceneContentStateDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)watchdogPolicyForProcess:(id)a0 eventContext:(id)a1;
- (void)transaction:(id)a0 didCreateScene:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didInvalidateSceneWhenForeground;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (id)watchdogTerminationRequestForProcess:(id)a0 error:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sceneSettingsFrameFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willLaunchSpotlightInBackground;
- (void)clearEventQueue;
- (void)addOrExecuteEventAsNeeded:(id /* block */)a0;
- (void)createSceneIfNeededWithPriority:(long long)a0;
- (void)createSceneWithPriority:(long long)a0;
- (id)initWithSceneIdentifier:(id)a0;
- (struct CGSize { double x0; double x1; })initialFittingSize;
- (BOOL)setSceneFrameOnRotation;
- (void)updateSafeAreasOnSettings:(id)a0;
- (void)updateSceneToOrientation:(long long)a0 withTransitionCoordinator:(id)a1;
- (void)updateTraitCollection;

@end
