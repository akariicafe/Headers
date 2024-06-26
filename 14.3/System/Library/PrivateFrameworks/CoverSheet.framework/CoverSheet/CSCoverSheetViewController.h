@class CSBehavior, CSNotificationDispatcher, CSPoseidonViewController, UITapGestureRecognizer, CSLockScreenSettings, CSTeachableMomentsContainerViewController, SBFLockScreenDateSubtitleView, CSUserPresenceMonitor, NSMutableArray, CSCoverSheetView, CSAppearance, CSAccessoryViewController, CSPresentation, SBLockScreenDefaults, FBDisplayLayoutTransition, CSPowerChangeObserver, UIColor, CSAccessoryStatusObserver, BSTimer, UIGestureRecognizer, SBFLockScreenActionContext, CSPresentationViewController, _UILegibilitySettings, CSHomeButtonSuppressAfterUnlockRecognizer, CSRemoteContentModalViewController, CSFaceOcclusionMonitor, CSInterstitialTransitionSource, SBFLockScreenDateViewController, CSTimerViewController, UIVisualEffectView, CSQuickActionsViewController, CSNotificationClearingTrigger, SBFLockScreenWakeAnimator, SBFSteppedAnimationTimingFunctionCalculator, CSLayoutStrategy, NSArray, SBWallpaperAggdLogger, CSMainPageContentViewController, CSRemoteContentSessionManager, NSString, CSChargingViewController, BCBatteryDeviceController, NSHashTable, CSModalPresentationViewController, CSFixedFooterViewController, CSProudLockViewController, UIStatusBar, NSSet, CSScrollGestureController, CSEmbeddedContentActionManager, CSHomeButtonShowPasscodeRecognizer;
@protocol CSEmergencyCalling, CSCoverSheetViewControllerDelegate, CSLegibilityProviding, SBFIrisWallpaperView, CSExternalBehaviorProviding, CSCoverSheetViewPresenting, CSOrientationUpdateControlling, CSApplicationLaunching, SBNotificationDestination, UICoordinateSpace, BSInvalidatable, SBFOverlayControlling, CSCoverSheetContextProviding, CSCoverSheetViewTransitionSource, CSNotificationDispatcher, CSExternalEventHandling, SBFScreenWakeAnimationControlling, SBFLockOutStatusProvider, CSIdleTimerControlling, CSCameraPrewarming, CSWallpaperColorProvider, CSSpotlightPresenting;

@interface CSCoverSheetViewController : UIViewController <CSPersistentContentLayoutProviding, CSDateTimeLayoutAggregating, BCBatteryDeviceObserving, CSCoverSheetViewDelegate, UIGestureRecognizerDelegate, CSLegibilityProviderDelegate, SBLockScreenActionProvider, SBFIrisWallpaperViewDelegate, CSCoverSheetViewTransitionSource, CSNotificationDestination, CSTimerViewControllerDelegate, _UISettingsKeyObserver, CSScrollGestureControllerDelegate, CSNotificationClearingTriggerDelegate, CSInterstitialTransitionDelegate, CSPasscodeViewControllerDelegate, SBFOverlayObserving, SBFOverlayDismissalDelegate, FBSDisplayLayoutPublisherObserving, CSRemoteContentSessionHostDelegate, CSEmbeddedContentActionManagerDelegate, CSMainPageContentViewControllerNotificationObserver, CSPresentationViewControllerDelegate, CAAnimationDelegate, CSAccessoryStatusDelegate, CSCoverSheetViewControllerProtocol, BSDescriptionProviding, SBFDashBoardModalPresenterProtocol> {
    id<CSCoverSheetContextProviding> _coverSheetContext;
    CSLockScreenSettings *_prototypeSettings;
    BOOL _screenOffMode;
    BOOL _preventAppearanceUpdatesForRotation;
    SBFSteppedAnimationTimingFunctionCalculator *_interactiveAnimationCalculator;
    NSHashTable *_externalAppearanceProviders;
    NSHashTable *_externalBehaviorProviders;
    NSHashTable *_externalEventHandlers;
    NSHashTable *_externalPresentationProviders;
    NSHashTable *_externalLockProviders;
    NSHashTable *_observers;
    NSHashTable *_applicationHosters;
    CSNotificationDispatcher *_notificationDispatcher;
    long long _transitionType;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    long long _participantState;
    BOOL _transitionDisabledIdleTimer;
    CSHomeButtonShowPasscodeRecognizer *_homeButtonShowPasscodeRecognizer;
    CSHomeButtonSuppressAfterUnlockRecognizer *_homeButtonSuppressAfterUnlockRecognizer;
    BOOL _accessoryViewPresentationDelayed;
    CSAccessoryViewController *_accessoryViewController;
    BSTimer *_accessoryViewControllerTimer;
    id /* block */ _accessoryViewControllerTimerHandler;
    BSTimer *_accessoryViewControllerChargingTimer;
    id /* block */ _accessoryViewControllerChargingTimerHandler;
    NSMutableArray *_attachedAccessories;
    BOOL _isAccessoryAnimationAllowed;
    CSChargingViewController *_chargingViewController;
    BCBatteryDeviceController *_batteryDeviceController;
    BSTimer *_chargingViewControllerTimer;
    id /* block */ _chargingViewTimerHandler;
    CSFixedFooterViewController *_fixedFooterViewController;
    CSProudLockViewController *_proudLockViewController;
    CSPoseidonViewController *_poseidonViewController;
    CSTeachableMomentsContainerViewController *_teachableMomentsContainerViewController;
    CSQuickActionsViewController *_quickActionsViewController;
    CSScrollGestureController *_scrollGestureController;
    BOOL _listeningForDisplayLayoutChanges;
    BOOL _screenOnForLiftToWake;
    BOOL _statusBarInLockdownForTeardown;
    UITapGestureRecognizer *_quickNoteGestureRecognizer;
    CSNotificationClearingTrigger *_notificationClearingTrigger;
    int _lastAppearState;
    BOOL _wantsAccessibilityContentSizes;
    BOOL _needsAccessibilityContentSizesUpdate;
    double _accessibilityTimeLabelBaselineY;
    double _accessibilityTimeSubtitleBaselineY;
    double _initialInterstitialTransitionProgress;
    BOOL _interstitialTransitionStartedFromPasscodePresented;
    SBLockScreenDefaults *_lockScreenDefaults;
    CSRemoteContentSessionManager *_remoteContentSessionManager;
    CSRemoteContentModalViewController *_remoteContentModalViewController;
    BOOL _didSuppressRemoteContentOnDisappear;
    CSEmbeddedContentActionManager *_embeddedContentActionManager;
    SBFLockScreenDateSubtitleView *_chargingLabel;
    CSUserPresenceMonitor *_userPresenceMonitor;
    CSFaceOcclusionMonitor *_faceOcclusionMonitor;
    BOOL _contentAboveIsControlCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CSCoverSheetView *coverSheetView;
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy;
@property (copy, nonatomic, setter=_setPageViewControllers:) NSArray *pageViewControllers;
@property (copy, nonatomic, getter=_allowedPageViewControllers, setter=_setAllowedPageViewControllers:) NSArray *allowedPageViewControllers;
@property (retain, nonatomic, setter=_setMainPageContentViewController:) CSMainPageContentViewController *mainPageContentViewController;
@property (nonatomic) unsigned long long lastSettledPageIndex;
@property (retain, nonatomic) CSAccessoryStatusObserver *accessoryAttachmentObserver;
@property (copy, nonatomic) CSBehavior *activeBehavior;
@property (retain, nonatomic) CSBehavior *localBehavior;
@property (retain, nonatomic) CSBehavior *irisBehavior;
@property (nonatomic) double appearanceFraction;
@property (copy, nonatomic) CSAppearance *activeAppearance;
@property (copy, nonatomic) CSAppearance *previousAppearance;
@property (copy, nonatomic) CSAppearance *localAppearance;
@property (retain, nonatomic) CSPresentation *activePresentation;
@property (retain, nonatomic) SBFLockScreenDateViewController *dateViewController;
@property (retain, nonatomic) CSPowerChangeObserver *powerChangeObserver;
@property (retain, nonatomic) CSTimerViewController *timerViewController;
@property (retain, nonatomic) id<CSLegibilityProviding> legibilityProvider;
@property (retain, nonatomic) UIStatusBar *fakeStatusBar;
@property (retain, nonatomic) UIVisualEffectView *statusBarBackgroundView;
@property (nonatomic) BOOL irisPlayerIsInteracting;
@property (nonatomic) BOOL shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
@property (retain, nonatomic) CSModalPresentationViewController *modalPresentationController;
@property (retain, nonatomic, getter=_lockOutController, setter=_setLockOutController:) id<SBFLockOutStatusProvider> lockOutController;
@property (retain, nonatomic) id<CSCoverSheetViewTransitionSource> currentTransitionSource;
@property (retain, nonatomic) CSInterstitialTransitionSource *interstitialTransitionSource;
@property (retain, nonatomic) id<SBFOverlayControlling, CSExternalBehaviorProviding, CSExternalEventHandling> overlayController;
@property (retain, nonatomic) id<BSInvalidatable> suspendWallpaperAnimationAssertion;
@property (nonatomic) double initialOverlayPresentationProgress;
@property (retain, nonatomic, getter=_screenWakeAnimationController, setter=_setScreenWakeAnimationController:) id<SBFScreenWakeAnimationControlling> screenWakeAnimationController;
@property (retain, nonatomic) SBWallpaperAggdLogger *wallpaperAggdLogger;
@property (weak, nonatomic) id<CSCoverSheetViewControllerDelegate> delegate;
@property (retain, nonatomic) id<SBFIrisWallpaperView> irisWallpaperView;
@property (retain, nonatomic) UIGestureRecognizer *wallpaperGestureRecognizer;
@property (weak, nonatomic) id<CSWallpaperColorProvider> wallpaperColorProvider;
@property (readonly, nonatomic) id<SBNotificationDestination> notificationDestination;
@property (readonly, nonatomic) BOOL hasContentAboveCoverSheet;
@property (readonly, nonatomic) BOOL externalLockProvidersRequireUnlock;
@property (readonly, nonatomic) BOOL externalLockProvidersShowPasscode;
@property (readonly, nonatomic) long long effectiveInterfaceOrientation;
@property (nonatomic) long long effectiveInterfaceOrientationOverride;
@property (readonly, nonatomic) CSPresentationViewController *mainPagePresentationViewController;
@property (readonly, nonatomic) int wakeSource;
@property (readonly, nonatomic, getter=isRestToOpenAvailable) BOOL restToOpenAvailable;
@property (retain, nonatomic) id<CSCameraPrewarming> cameraPrewarmer;
@property (weak, nonatomic) id<CSEmergencyCalling> emergencyCaller;
@property (retain, nonatomic) id<CSOrientationUpdateControlling> orientationUpdateController;
@property (weak, nonatomic) id<CSIdleTimerControlling> idleTimerController;
@property (weak, nonatomic) id<CSApplicationLaunching> applicationLauncher;
@property (weak, nonatomic) id<CSSpotlightPresenting> spotlightPresenter;
@property (readonly, nonatomic) BOOL isAccessoryAnimationPresenting;
@property (nonatomic) double backlightLevel;
@property (readonly, nonatomic) BOOL contentOccludesBackground;
@property (retain, nonatomic, getter=_customLockScreenActionContext) SBFLockScreenActionContext *customLockScreenActionContext;
@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (nonatomic, getter=isShowingMediaControls) BOOL showingMediaControls;
@property (readonly, nonatomic) BOOL shouldShowLockStatusBarTime;
@property (readonly, nonatomic) SBFLockScreenWakeAnimator *lockScreenWakeAnimator;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic) struct { double value; struct { struct { double value; BOOL inclusive; } start; struct { double value; BOOL inclusive; } end; } interval; long long mode; } transitionContext;
@property (weak, nonatomic) id<CSNotificationDispatcher> dispatcher;
@property (readonly, copy, nonatomic) CSPresentation *externalPresentation;
@property (weak, nonatomic) id<CSCoverSheetViewPresenting> presenter;
@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, nonatomic) long long presentationType;
@property (readonly, nonatomic) long long presentationTransition;
@property (readonly, nonatomic) long long presentationPriority;
@property (readonly, nonatomic) long long presentationAltitude;
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (readonly, nonatomic) long long backgroundStyle;
@property (readonly, copy, nonatomic) NSSet *components;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) long long scrollingStrategy;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly, nonatomic) long long proximityDetectionMode;
@property (readonly, weak, nonatomic) id<UICoordinateSpace> presentationCoordinateSpace;
@property (readonly, copy, nonatomic) NSArray *presentationRegions;
@property (readonly, nonatomic) long long idleTimerDuration;
@property (readonly, nonatomic) long long idleTimerMode;
@property (readonly, nonatomic) long long idleWarnMode;
@property (readonly, nonatomic) double customIdleExpirationTimeout;
@property (readonly, nonatomic) double customIdleWarningTimeout;

- (BOOL)handleHomeButtonLongPress;
- (void)noteResetRestoreStateUpdated;
- (void)setInScreenOffMode:(BOOL)a0 forAutoUnlock:(BOOL)a1 fromUnlockSource:(int)a2;
- (BOOL)handleHomeButtonDoublePress;
- (void)jiggleLockIcon;
- (id)dateView;
- (void)updateStatusBarForLockScreenComeback;
- (void)handleBiometricEvent:(unsigned long long)a0;
- (void)activateTodayViewWithCompletion:(id /* block */)a0;
- (void)_updateNotificationClearingTriggerForEvent:(id)a0;
- (void)setPasscodeLockVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)updateStatusBarForLockScreenTeardown;
- (BOOL)isHostingAnApp;
- (void)postNotificationRequest:(id)a0;
- (void)_addStateCaptureHandlers;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)_updateAccessibilityContentSizesIfNeeded;
- (BOOL)suppressesControlCenter;
- (BOOL)suppressesBanners;
- (void)finishUIUnlockFromSource:(int)a0;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)a0;
- (BOOL)isPasscodeLockVisible;
- (BOOL)handleHomeButtonPress;
- (void)_updateScrollingBehavior;
- (void)startLockScreenFadeInAnimationForSource:(int)a0;
- (id)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)a0;
- (BOOL)handleVolumeDownButtonPress;
- (void)prepareForUILock;
- (double)_dateViewAlphaForCurrentWakeState;
- (id)hostedAppSceneHandle;
- (BOOL)canHostAnApp;
- (BOOL)canBeDeactivatedForUIUnlockFromSource:(int)a0;
- (BOOL)handleVolumeUpButtonPress;
- (void)updateNotificationRequest:(id)a0;
- (id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
- (void)notificationsLoadedForSectionIdentifier:(id)a0;
- (BOOL)handleVoiceCommandButtonPress;
- (BOOL)isInScreenOffMode;
- (void)withdrawNotificationRequest:(id)a0;
- (void)noteDeviceBlockedStatusUpdated;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (BOOL)shouldUnlockUIOnKeyDownEvent;
- (BOOL)dismissNotificationInLongLookAnimated:(BOOL)a0;
- (BOOL)handleLockButtonPress;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (void)setInScreenOffMode:(BOOL)a0;
- (BOOL)isMainPageVisible;
- (BOOL)isPresentingNotificationInLongLook;
- (BOOL)willUIUnlockFromSource:(int)a0;
- (BOOL)isNotificationContentExtensionVisible:(id)a0;
- (BOOL)_handleEvent:(id)a0;
- (void)_transitionChargingDateSubtitleToVisible:(BOOL)a0 animated:(BOOL)a1 force:(BOOL)a2;
- (void)timerControllerDidStopTimer:(id)a0;
- (void)_displayWillDisappearImplementation;
- (double)_alphaForTransitionFromHidden:(BOOL)a0 toHidden:(BOOL)a1 timingFunction:(id)a2;
- (long long)statusBarStyle;
- (void)startHostingWallpaperOverlay:(id)a0;
- (BOOL)_dismissRemoteViewControllerForReason:(long long)a0 completion:(id /* block */)a1;
- (void)cancelTransition;
- (double)bottomContentInset;
- (BOOL)shouldActivateRemoteContentSession:(id)a0;
- (void)irisWallpaperView:(id)a0 didReplaceGestureRecognizer:(id)a1 withGestureRecognizer:(id)a2;
- (BOOL)_wouldUpdateActiveAppearance;
- (id)hostedAppSceneHandles;
- (void)externalLockProviderStateChanged:(id)a0;
- (void)conformsToCSAppearanceProviding;
- (double)_scaleForTransitionFromScale:(double)a0 toScale:(double)a1 timingFunction:(id)a2;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)relinquishHostingOfWallpaperOverlay;
- (void)_setModalPresentationControllerVisibility:(BOOL)a0;
- (void)idleTimerWillRefresh;
- (double)dateBaselineToListY;
- (void)conformsToCSCoverSheetViewPresenting;
- (void)_removeReduceWhitePointAnimationForKeyPath:(id)a0 onLayer:(id)a1;
- (BOOL)_shouldReduceWhitePoint;
- (BOOL)isShowingModalView;
- (void)_updateBackground;
- (void)overlayControllerDidBeginChangingPresentationProgress:(id)a0;
- (void)_addBedtimeGreetingBackgroundView;
- (BOOL)_showingAccessoryView;
- (void)presentModalViewController:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2 animated:(BOOL)a3;
- (void)_dismissToMainPageFromPageViewController:(id)a0;
- (void)resetRestToOpen;
- (id)_whitePointReductionFilterFromValues:(id)a0;
- (void)setLegibilitySettings:(id)a0;
- (void)didPostNotificationRequest:(id)a0;
- (id)_behaviorForParticipant:(id)a0;
- (void)handleAction:(id)a0 fromSender:(id)a1;
- (void)_setHasContentAboveCoverSheet:(BOOL)a0;
- (void)_addRemoteViewControllerForAction:(id)a0;
- (id)_filterValuesForWhitePointReduced:(BOOL)a0 lighterReduction:(BOOL)a1;
- (void)unregisterExternalAppearanceProvider:(id)a0;
- (void)cleanupInterstitialPresentationToPresented:(BOOL)a0 inPlace:(BOOL)a1;
- (void).cxx_destruct;
- (void)irisWallpaperViewIsInteractingDidChange:(id)a0;
- (BOOL)_isTodayViewOverlayShowing;
- (void)remoteContentDidUpdateStyle;
- (long long)_passcodePresentationMode;
- (id)pageViewControllerAtIndex:(unsigned long long)a0;
- (void)noteWillPresentForUserGesture;
- (void)_displayDidDisappearImplementation;
- (void)updateAppearanceForController:(id)a0 withAnimationSettings:(id)a1 completion:(id /* block */)a2;
- (void)actionManager:(id)a0 addedAction:(id)a1;
- (void)_setFakeStatusBarEnabled:(BOOL)a0;
- (void)unregisterExternalBehaviorProvider:(id)a0;
- (void)accessoryDetached:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)interceptDismissalGestureForOverlayController:(id)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)_updateVisibilityForPageViewControllersWithVisiblePageViewController:(id)a0;
- (void)_addOrRemoveThermalTrapViewIfNecessaryAnimated:(BOOL)a0;
- (void)_updateActiveBehaviorsForReason:(id)a0 updatingAppearanceIfNeeded:(BOOL)a1;
- (void)addApplicationHoster:(id)a0;
- (BOOL)_isPresentingModalViewControllerWithIdentifier:(id)a0;
- (void)actionManager:(id)a0 removedAction:(id)a1;
- (void)removeCoverSheetObserver:(id)a0;
- (void)updateInterstitialPresentationWithProgress:(double)a0;
- (void)_updateControlCenterGrabber;
- (void)addCoverSheetObserver:(id)a0;
- (void)_updateWallpaperEffectView;
- (void)remoteContentSession:(id)a0 didInvalidateWithError:(id)a1;
- (void)_removeBedtimeGreetingBackgroundViewAnimated:(BOOL)a0;
- (void)_scrollPanGestureBegan:(id)a0;
- (id)initWithPageViewControllers:(id)a0 mainPageContentViewController:(id)a1 context:(id)a2;
- (BOOL)attachedAccessoriesContainsAccessoryType:(long long)a0;
- (void)_updateActiveBehaviorsForReason:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_updateFixedFooterView;
- (void)conformsToCSBehaviorProviding;
- (void)coverSheetNotificationClearingTriggerDidFire:(id)a0;
- (void)_updateProudLockViewUpdateSuspension;
- (BOOL)_isKnownTransitionConflictFrom:(id)a0 to:(id)a1;
- (void)registerExternalBehaviorProvider:(id)a0;
- (void)_addOrRemoveResetRestoreViewIfNecessaryAnimated:(BOOL)a0;
- (unsigned long long)_dateTimeLayoutForPage:(id)a0;
- (void)_calculateAppearanceForCurrentOrientation;
- (void)dismissOverlaysAnimated:(BOOL)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)conformsToCSEventHandling;
- (void)loadView;
- (void)updateBehaviorForController:(id)a0;
- (void)_actuallyUpdateUIForIrisPlaying;
- (double)listMinY;
- (void)removeApplicationHoster:(id)a0;
- (unsigned long long)_indexOfMainPage;
- (id)succinctDescription;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (void)_dismissModalViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)prepareForUIUnlock;
- (BOOL)shouldAutorotate;
- (BOOL)handleEvent:(id)a0;
- (void)_animateView:(id)a0 toWhitePointReduced:(BOOL)a1 withDispatchGroup:(id)a2;
- (struct CGPoint { double x0; double x1; })_slideableContentOffset;
- (void)_presentModalViewController:(id)a0 shouldDismissOverlays:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)_isRemoteContentPresentedInUnlockMode;
- (void)_addVisiblePageViewController:(id)a0;
- (BOOL)remoteContentSession:(id)a0 dismissWithReason:(long long)a1 completion:(id /* block */)a2;
- (void)_updateLocalAppearanceForRequester:(id)a0 animationSettings:(id)a1 actions:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_addWhitePointAnimationForKeyPath:(id)a0 onLayer:(id)a1 toValues:(id)a2 withDuration:(double)a3 dispatchGroup:(id)a4;
- (void)setPasscodeLockVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_updateIdleTimerBehavior;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)presentationViewController:(id)a0 didTransitionViewController:(id)a1 toPresented:(BOOL)a2;
- (void)transitionSource:(id)a0 willBeginWithType:(long long)a1;
- (void)_displayWillTurnOnWhileOnCoverSheet:(id)a0;
- (void)timerControllerDidStartTimer:(id)a0;
- (BOOL)remoteContentSession:(id)a0 presentViewController:(id)a1;
- (void)externalBehaviorProviderBehaviorChanged:(id)a0;
- (void)_prepareForViewWillAppearIfNecessary;
- (void)_updateLocalAppearanceForPresentation;
- (void)_beginAppearanceTransitionForPageViewControllersToVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)updateCallToActionForMesaMatchFailure;
- (void)dismissModalViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)startRestToOpenCoachingWithCompletion:(id /* block */)a0;
- (void)unregisterExternalEventHandler:(id)a0;
- (BOOL)_isWakeAnimationInProgress;
- (void)setPasscodeLockVisible:(BOOL)a0 animated:(BOOL)a1 forceBiometricPresentation:(BOOL)a2 completion:(id /* block */)a3;
- (void)_updateHomeAffordance;
- (double)_valueForTransitionInterval:(struct { struct { double x0; BOOL x1; } x0; struct { double x0; BOOL x1; } x1; })a0 timingFunction:(id)a1;
- (double)dateTimeMostExtremeLeadingX;
- (void)_updateRestrictedBehavior;
- (BOOL)shouldDisableALS;
- (void)_setModalPresentationControllerVisibility:(BOOL)a0 cancelTouches:(BOOL)a1;
- (void)_updateTintingView;
- (BOOL)_overSlidingControlForLocation:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)idleTimerDidRefresh;
- (void)_updateAppearance:(id)a0 forComponentType:(long long)a1 shouldHide:(BOOL)a2;
- (void)accessoryAttached:(id)a0;
- (BOOL)isLockScreenShowingDefaultContent;
- (void)idleTimerDidExpire;
- (id)_fullscreeNotificationViewControllerMatchingNotificationRequest:(id)a0;
- (void)_handleDismissalForAccessoryViewController:(id)a0 animated:(BOOL)a1;
- (void)_addOrRemoveRemoteContentViewIfNecessary;
- (void)_updateModalPresentationControllerVisibility;
- (id)_windowsFromViewControllers:(id)a0;
- (BOOL)_isSlideableContentOffsetOnscreen:(struct CGPoint { double x0; double x1; })a0;
- (double)dateTimeSubtitleMaximumWidth;
- (id)_activeViewControllers;
- (BOOL)_isMainPageShowing;
- (void)_updateWhitePoint;
- (BOOL)isTransitioningInteractively;
- (void)_transitionChargingViewToVisible:(BOOL)a0 showBattery:(BOOL)a1 animated:(BOOL)a2;
- (void)controllerWillCancelHorizontalScrolling:(id)a0;
- (void)activatePage:(unsigned long long)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)_pageForScrollPercent:(double)a0;
- (unsigned long long)_indexOfPageViewControllerForRole:(id)a0;
- (void)_dismissAccessoryViewController:(id)a0 animated:(BOOL)a1;
- (void)updateAppearanceForController:(id)a0;
- (void)overlayController:(id)a0 visibilityDidChange:(BOOL)a1;
- (void)scrollPanGestureDidUpdate:(id)a0;
- (void)presentModalViewController:(id)a0 withTransition:(int)a1;
- (void)_presentModalViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_dismissRemoteViewControllerForReason:(long long)a0;
- (BOOL)controller:(id)a0 shouldAllowPanScrollingWithSystemGestureRecognizer:(id)a1;
- (void)registerExternalLockProvider:(id)a0;
- (void)irisWallpaperViewPlaybackStateDidChange:(id)a0;
- (void)externalPresentationProviderPresentationChanged:(id)a0;
- (BOOL)_isShowingChargingModal;
- (void)_handleQuickNoteLaunch:(id)a0;
- (void)registerExternalPresentationProvider:(id)a0;
- (void)_sendAuthenticationChangedEvent;
- (void)passcodeViewControllerDidCancelPasscodeEntry:(id)a0;
- (void)_updateStatusBarGradient;
- (id)succinctDescriptionBuilder;
- (void)passcodeViewController:(id)a0 didCompletePasscodeEntry:(BOOL)a1;
- (void)_updateStatusBarBackground;
- (id)_whitePointValuesForAppearance:(id)a0;
- (BOOL)isShowingTodayView;
- (void)_updateProudLockView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_animateAccessory:(id)a0 toVisibleAnimated:(BOOL)a1;
- (BOOL)_isShowingNonStaticAccessoryBlockingUI;
- (unsigned long long)_indexOfCameraPage;
- (void)_displayWillAppearImplementation;
- (void)passcodeViewControllerDidBeginPasscodeEntry:(id)a0;
- (void)_updateUIForPlaying:(BOOL)a0 immediately:(BOOL)a1;
- (void)_scrollPanGestureChanged:(id)a0;
- (void)_updateIdleTimerForTransitionProgress:(double)a0;
- (void)fillRestToOpenWithDuration:(double)a0;
- (id)lockScreenActionContext;
- (void)_listenForDisplayLayoutChanges:(BOOL)a0;
- (id)_createFakeStatusBar;
- (id)visiblePageViewController;
- (void)_transitionTimerViewToVisible:(BOOL)a0 animated:(BOOL)a1;
- (double)windowedAccessoryInset;
- (id)_averageLockScreenWallpaperColor;
- (BOOL)passcodeViewControllerShouldHideStatusBar:(id)a0;
- (void)presentModalViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateQuickActionsVisibility;
- (BOOL)_shouldSetUpWallpaperGesture;
- (void)_removeAllowedPageViewController:(id)a0;
- (double)_dateTimeAlphaForFade;
- (void)_updateQuickActions;
- (BOOL)containsCenteredDateTimeLayout;
- (void)registerExternalEventHandler:(id)a0;
- (void)_actuallyUpdateUIForIrisPlaying:(BOOL)a0;
- (double)timeToSubtitleLabelBaselineDifferenceY;
- (BOOL)_removeRemoteViewControllerForInvalidatedSession:(id)a0 completion:(id /* block */)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)invalidateLockScreenActionContext;
- (BOOL)_isSourceForHorizontalScrolling:(id)a0;
- (void)_updateActiveAppearanceForReason:(id)a0;
- (void)_addOrRemoveBlockedViewIfNecessaryAnimated:(BOOL)a0;
- (void)_actuallyUpdateUIForIrisNotPlaying;
- (void)accessoryAnimationStatusChanged:(BOOL)a0;
- (void)_setComponentWithType:(long long)a0 hiddenForLandscape:(BOOL)a1;
- (void)prepareForInterstitialPresentation;
- (void)conformsToCSCoverSheetViewControlling;
- (void)_setupWallpaperGesture;
- (id)_fakeStatusBarSettings;
- (void)_updateStatusBar;
- (void)viewDidAppear:(BOOL)a0;
- (void)_preferredContentSizeDidChange;
- (BOOL)isUnlockDisabled;
- (unsigned long long)_accessoryAnimationRestrictions;
- (void)_dismissModalViewControllersWithIdentifier:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (unsigned long long)_indexOfTodayPage;
- (id)_presentedModalViewControllerWithIdentifier:(id)a0;
- (double)_dateTimeInsetXForPage:(id)a0;
- (BOOL)_isAccessoryAnimationAllowedForAccessory:(id)a0;
- (BOOL)shouldModifyPageScrolling;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_batteryDeviceController;
- (void)_endAppearanceTransitionForPageViewControllersToVisible:(BOOL)a0;
- (BOOL)isLockScreenShowingDefaultContentExceptControlCenter;
- (void)activateCameraViewAnimated:(BOOL)a0 sendingActions:(id)a1 completion:(id /* block */)a2;
- (void)idleTimerDidWarn;
- (struct CGPoint { double x0; double x1; })_finalizeOffset:(struct CGPoint { double x0; double x1; })a0 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_eligiblePageViewControllers;
- (void)_updatePageContent;
- (BOOL)_isPageContentHidden;
- (double)dateTimeMostExtremeTrailingX;
- (void)_invalidateStatusBarAssertions;
- (void)_updateScalableContent;
- (unsigned long long)_pageCapabilities;
- (BOOL)_transitionPrototypeChargingViewToVisible:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldAutoUnlockForSource:(int)a0;
- (struct CGPoint { double x0; double x1; })_offsetForTransitionFromOffset:(struct CGPoint { double x0; double x1; })a0 toOffset:(struct CGPoint { double x0; double x1; })a1 timingFunction:(id)a2;
- (void)_transitionAccessoryViewToVisible:(BOOL)a0 accessory:(id)a1 animated:(BOOL)a2;
- (void)coverSheetLegibilityProviderDidUpdate:(id)a0;
- (void)_transitionAccesoryChargingViewToVisible:(BOOL)a0;
- (BOOL)_quickActionsSupported;
- (void)_loadViewsForRestrictedPagesIfPossible;
- (id)_passcodeViewController;
- (BOOL)_shouldUpdateActiveAppearanceForReason:(id)a0;
- (BOOL)_gestureRecognizer:(id)a0 isLocatedOverHorizontalContentRegionInViewController:(id)a1;
- (BOOL)_isSlideableContentOnscreen;
- (double)timeLabelBaselineY;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setCoverSheetIsVisible:(BOOL)a0;
- (void)overlayController:(id)a0 didChangePresentationProgress:(double)a1 fromLeading:(BOOL)a2;
- (void)_updateDateTimeView;
- (void)resetMainPageContentOffset;
- (void)_powerStatusChangedToConnectedState:(BOOL)a0;
- (void)_updatePoseidon;
- (void)unregisterExternalLockProvider:(id)a0;
- (BOOL)_wallpaperGestureShouldRequireUserPresence;
- (id)__currentDesiredAppearanceWithStartIndex:(unsigned long long *)a0 targetIndex:(unsigned long long *)a1 targetAppearance:(id *)a2 targetPresentation:(id *)a3 modalAppearance:(id *)a4 proudLockAppearance:(id *)a5 poseidonAppearance:(id *)a6;
- (void)activateMainPageWithCompletion:(id /* block */)a0;
- (void)dismissHomeScreenOverlay;
- (void)presentViewController:(id)a0 withTransition:(int)a1 completion:(id /* block */)a2;
- (BOOL)suppressesScreenshots;
- (void)_updateLegibilitySettings;
- (void)_updateAccessoryAnimationPresenting:(BOOL)a0 userInteractionDisabled:(BOOL)a1;
- (id)superviewForDateViewAnimation;
- (void)_scrollPanGestureEnded:(id)a0;
- (void)externalAppearanceProviderBehaviorChanged:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (BOOL)_canShowEmbeddedRemoteContent;
- (id)_presentationForParticipant:(id)a0;
- (double)_alphaForTransitionFromHidden:(BOOL)a0 toHidden:(BOOL)a1 unhiddenAlpha:(double)a2 timingFunction:(id)a3;
- (void)unregisterExternalPresentationProvider:(id)a0;
- (void)overlayControllerRequestsDismissal:(id)a0;
- (void)connectedDevicesDidChange:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)transitionSource:(id)a0 didEndWithContext:(struct { double x0; struct { struct { double x0; BOOL x1; } x0; struct { double x0; BOOL x1; } x1; } x1; long long x2; })a1;
- (void)_activateCameraAnimated:(BOOL)a0 actions:(id)a1 completion:(id /* block */)a2;
- (BOOL)_handleEventType:(long long)a0;
- (double)_timeLabelScrollPercentForDateTimeLayout:(unsigned long long)a0;
- (BOOL)_canShowWhileLocked;
- (double)_minDateListSpacingForPage:(id)a0;
- (void)registerExternalAppearanceProvider:(id)a0;
- (void)_updateDateSubtitleAppearanceForBattery:(BOOL)a0 animated:(BOOL)a1 chargingVisible:(BOOL)a2;
- (void)_createStatusBarBackgroundViewIfNeeded;
- (void)transitionSource:(id)a0 didUpdateTransitionWithContext:(struct { double x0; struct { struct { double x0; BOOL x1; } x0; struct { double x0; BOOL x1; } x1; } x1; long long x2; })a1;
- (void)_setupQuickNoteGestureRecognizer;
- (void)_addOrRemoveRemoteContentViewIfNecessaryMaintainingState:(BOOL)a0;
- (void)_updateForegroundView;
- (void)deactivateTodayViewWithCompletion:(id /* block */)a0;
- (id)_whitePointValues;
- (double)timeLabelOffsetForScrollPercent:(double)a0;
- (void)_startFadeInAnimationForSource:(long long)a0;
- (void)publisher:(id)a0 didUpdateLayout:(id)a1 withTransition:(id)a2;
- (BOOL)_shouldReduceWhitePointForAppearance:(id)a0;
- (void)viewDidLoad;
- (void)idleTimerDidChange;
- (id)_appearanceForParticipant:(id)a0;

@end
