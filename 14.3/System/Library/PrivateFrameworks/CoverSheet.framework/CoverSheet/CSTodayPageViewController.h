@class NSString, _UILegibilitySettings, CSPresentation, CSTodayContentViewController, CSAppearance, CSTodayViewController, NSSet, CSBehavior, NSArray, CSLayoutStrategy, SBViewControllerTransitionContext, UIColor;
@protocol CSCoverSheetViewControllerProtocol, CSCoverSheetViewPresenting, UICoordinateSpace;

@interface CSTodayPageViewController : CSPageViewController <CSTodayViewControllerDelegate, SBUICoronaAnimationControllerParticipant, CSPageViewControllerProtocol, SBUISpotlightInitiating>

@property (retain, nonatomic) CSTodayContentViewController *contentViewController;
@property (readonly, nonatomic) CSTodayViewController *todayViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CSCoverSheetViewControllerProtocol> coverSheetViewController;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic) BOOL authenticated;
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy;
@property (readonly, copy, nonatomic) NSString *pageRole;
@property (readonly, copy, nonatomic) CSAppearance *activeAppearance;
@property (readonly, copy, nonatomic) CSBehavior *activeBehavior;
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
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;
@property (readonly, nonatomic) long long idleTimerDuration;
@property (readonly, nonatomic) long long idleTimerMode;
@property (readonly, nonatomic) long long idleWarnMode;
@property (readonly, nonatomic) double customIdleExpirationTimeout;
@property (readonly, nonatomic) double customIdleWarningTimeout;
@property (retain, nonatomic) SBViewControllerTransitionContext *transitionContext;

+ (unsigned long long)requiredCapabilities;
+ (BOOL)isAvailableForConfiguration;

- (double)dateTimeInsetX;
- (BOOL)_isPortrait;
- (void)resetForSpotlightDismissalAnimated:(BOOL)a0;
- (double)customListWidth;
- (id)displayLayoutElementIdentifier;
- (id)todayViewController;
- (double)minimumDateToListSpacing;
- (double)listInsetX;
- (unsigned long long)listWidthStrategy;
- (BOOL)_listBelowDateTime;
- (unsigned long long)dateTimeLayout;
- (void)cleanupAfterSpotlightDismissal;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (void)updateTransitionWhileRubberBandingInProgress:(BOOL)a0;
- (void)coverSheetTodayViewController:(id)a0 contentViewsDidChange:(id)a1;
- (unsigned long long)listLayout;
- (void).cxx_destruct;
- (void)coverSheetTodayViewControllerDidFocusSearchView:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)coronaAnimationController:(id)a0 willAnimateCoronaTransitionWithAnimator:(id)a1;
- (id)spotlightHeaderAcquiringViewController;
- (void)viewDidLoad;

@end
