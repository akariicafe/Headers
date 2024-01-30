@class SBHomeGesturePanGestureRecognizer, SBAssistantContext, UITapGestureRecognizer, SBAssistantGestureConfiguration, NSString, SBFZStackParticipant, SBSystemAnimationSettings, UIPanGestureRecognizer, SBTransientOverlayViewController, SBWindow;
@protocol SBAssistantWindowProtocol, SBAssistantGestureManagerDelegate;

@interface SBAssistantGestureManager : NSObject <UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBHomeGrabberPointerClickDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBAssistantGestureConfigurationObserving, SBFZStackParticipantDelegate, PTSettingsKeyObserver, SBAssistantSessionObserver> {
    SBSystemAnimationSettings *_settings;
}

@property (readonly, nonatomic) SBAssistantGestureConfiguration *gestureConfiguration;
@property (readonly, nonatomic) SBWindow<SBAssistantWindowProtocol> *assistantWindow;
@property (readonly, nonatomic) SBAssistantContext *context;
@property (retain, nonatomic) SBHomeGesturePanGestureRecognizer *bottomEdgeDismissGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *tapToDismissSiriGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panToDismissSiriGestureRecognizer;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (nonatomic) long long homeAffordanceSuppression;
@property (weak, nonatomic) id<SBAssistantGestureManagerDelegate> delegate;
@property (retain, nonatomic) SBTransientOverlayViewController *topmostTransientViewControllerAtPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldDismissSiriForGestureTranslation:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;

- (id)viewForSystemGestureRecognizer:(id)a0;
- (void)homeGrabberViewDidReceiveClick:(id)a0;
- (long long)touchInterfaceOrientationForGestureRecognizer:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)_updateZStackParticipantWithReason:(id)a0;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)zStackParticipantDidChange:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (id)_assistantRootViewController;
- (void)_commonHandlerForSiriDismissalGesture:(id)a0;
- (void)_configureHomeGesture;
- (void)_configurePanToDismissGestureDependencies;
- (id)_createPanToDismissSiriGestureRecognizer;
- (id)_createTapToDismissSiriGestureRecognizer;
- (void)_didUpdateHomeGestureSharing:(BOOL)a0;
- (void)_didUpdateShouldDismissForSwipesOutsideContent:(BOOL)a0;
- (void)_didUpdateShouldDismissForTapsOutsideContent:(BOOL)a0;
- (void)_didUpdateShouldShowHomeAffordance:(BOOL)a0;
- (void)_didUpdateSiriHomeAffordanceSuppression:(long long)a0;
- (void)_didUpdateTouchesPassThroughToSpringBoard:(BOOL)a0;
- (void)_handleBottomEdgeDismissGesture:(id)a0;
- (BOOL)_noNewTransientOverlaysPresented;
- (void)_pannedToDismissSiri:(id)a0;
- (void)_prototypeSettingsChanged;
- (void)_removeHomeGesture;
- (void)_removeScreenEdgePanGestureRecognizerIfNecessary;
- (void)_resetDismissalSystemGestures;
- (void)_setupSystemDismissalGestures;
- (void)_tappedToDismissSiri:(id)a0;
- (void)_tearDownDismissalSystemGestures;
- (void)_updateRootViewControllerOwnsHomeGesture;
- (void)_updateRootViewControllerShowsHomeAffordance:(BOOL)a0;
- (void)assistantGestureConfiguration:(id)a0 didUpdateHomeAffordanceSuppression:(long long)a1;
- (void)assistantGestureConfiguration:(id)a0 didUpdateHomeGestureSharing:(BOOL)a1;
- (void)assistantGestureConfiguration:(id)a0 didUpdateShouldDismissForSwipesOutsideContent:(BOOL)a1;
- (void)assistantGestureConfiguration:(id)a0 didUpdateShouldDismissForTapsOutsideContent:(BOOL)a1;
- (void)assistantGestureConfiguration:(id)a0 didUpdateShouldPassTouchesThroughToSpringBoard:(BOOL)a1;
- (void)assistantGestureConfiguration:(id)a0 didUpdateShouldShowHomeAffordance:(BOOL)a1;
- (void)assistantSession:(id)a0 viewDidAppearInWindowScene:(id)a1;
- (void)assistantSession:(id)a0 viewDidDisappearInWindowScene:(id)a1;
- (void)assistantSession:(id)a0 viewWillAppearInWindowScene:(id)a1;
- (void)assistantSession:(id)a0 viewWillDisappearInWindowScene:(id)a1;
- (BOOL)gesturesImplyFullscreenContent;
- (id)initWithAssistantWindow:(id)a0 gestureConfiguration:(id)a1 context:(id)a2;
- (void)setTouchesPassThroughToSpringBoard:(BOOL)a0;

@end
