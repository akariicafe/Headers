@class CSLockScreenSettings, NSString, CSDashBoardRemoteContentSettings, UIView, SBSRemoteContentDefinition, SBFFluidBehaviorSettings, CSRemoteContentHostViewController, SBSRemoteContentPreferences, CSComponent, UIImpactFeedbackGenerator, UIViewFloatAnimatableProperty;
@protocol SBFAuthenticationStatusProvider, CSRemoteContentModalViewControllerDelegate;

@interface CSRemoteContentModalViewController : CSModalViewControllerBase <CSRemoteContentHostDelegate, CSDismissableModalViewControllerDelegate, CSRemoteModalContentViewTouchDelegate, PTSettingsKeyObserver> {
    struct CGPoint { double x; double y; } _previousTranslation;
    UIViewFloatAnimatableProperty *_scaleProperty;
    SBFFluidBehaviorSettings *_scaleSettings;
    UIViewFloatAnimatableProperty *_alphaProperty;
    SBFFluidBehaviorSettings *_alphaSettings;
    UIView *_grabberView;
    BOOL _userHasInteractedSinceWake;
    BOOL _dismissing;
    SBSRemoteContentDefinition *_definition;
    CSRemoteContentHostViewController *_contentViewController;
    SBSRemoteContentPreferences *_remoteContentPreferences;
}

@property (retain, nonatomic) CSLockScreenSettings *lockScreenSettings;
@property (retain, nonatomic) UIImpactFeedbackGenerator *rubberBandFeedbackGenerator;
@property (retain, nonatomic) CSComponent *scalableContent;
@property (retain, nonatomic) CSDashBoardRemoteContentSettings *remoteContentSettings;
@property (weak, nonatomic) id<CSRemoteContentModalViewControllerDelegate> delegate;
@property (readonly, nonatomic) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didInvalidate;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)viewDidLoad;
- (BOOL)_shouldCancelInteractiveDismissGesture;
- (void)activateWithCompletion:(id /* block */)a0;
- (long long)_dateTimeStyle;
- (void)loadView;
- (BOOL)handleEvent:(id)a0;
- (void).cxx_destruct;
- (long long)_homeGestureMode;
- (BOOL)_reducesWhitePoint;
- (BOOL)_suppressesBottomEdgeContent;
- (void)_createProperties;
- (id)displayLayoutElementIdentifier;
- (void)dealloc;
- (void)configureDisplayLayoutElement:(id)a0;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (void)_setCornerRounded:(BOOL)a0;
- (long long)_backgroundStyle;
- (void)_updateForPropertyChanged;
- (void)didChangeStyle;
- (void)addGrabberView:(id)a0;
- (void)dismissForHomeButton;
- (void)handleBottomEdgeGestureBegan:(id)a0;
- (void)handleBottomEdgeGestureChanged:(id)a0;
- (void)handleBottomEdgeGestureEnded:(id)a0;
- (void)handleSecondaryActionForView:(id)a0;
- (BOOL)dismissForDismissType:(long long)a0 completion:(id /* block */)a1;
- (BOOL)isInUnlockGestureMode;
- (BOOL)shouldCaptureHomeGesture;
- (BOOL)suppressesDismissalForNotification;
- (id)initWithContentDefinition:(id)a0 preferences:(id)a1 authenticationStatusProvider:(id)a2;
- (void)didReceiveTouch;
- (void)_updateSecondaryActionButtonText;
- (BOOL)shouldHideHomeAffordance;
- (void)_setUserHasInteractedSinceWake:(BOOL)a0;
- (void)_updateGrabberViewVisibility;
- (void)_dismissForced:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)suppressesDismissalGesture;
- (void)_updateContentScale:(double)a0 interactive:(BOOL)a1;
- (void)_updateContentAlpha:(double)a0 interactive:(BOOL)a1;
- (BOOL)_supportsLuminanceReductionForCurrentBackgroundStyle;
- (void)remoteContentHostViewController:(id)a0 didTerminateWithError:(id)a1;

@end
