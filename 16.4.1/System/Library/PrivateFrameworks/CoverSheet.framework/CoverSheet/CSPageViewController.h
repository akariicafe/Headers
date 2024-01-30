@class NSString, NSArray, CSPresentation, NSSet, CSAppearance, _UILegibilitySettings, CSBehavior, CSLayoutStrategy;
@protocol CSCoverSheetViewControllerProtocol, CSCoverSheetViewPresenting, UICoordinateSpace;

@interface CSPageViewController : CSPresentationViewController <CSPageViewControllerProtocol>

@property (weak, nonatomic) id<CSCoverSheetViewControllerProtocol> coverSheetViewController;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic) BOOL authenticated;
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy;
@property (readonly, copy, nonatomic) NSString *pageRole;
@property (readonly, nonatomic) NSArray *viewsPreferringProminentPresentationAndDismissal;
@property (readonly, copy, nonatomic) CSAppearance *activeAppearance;
@property (readonly, copy, nonatomic) CSBehavior *activeBehavior;
@property (readonly, copy, nonatomic) CSPresentation *externalPresentation;
@property (weak, nonatomic) id<CSCoverSheetViewPresenting> presenter;
@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, nonatomic) long long presentationType;
@property (readonly, nonatomic) long long presentationTransition;
@property (readonly, nonatomic) long long presentationPriority;
@property (readonly, nonatomic) long long presentationAltitude;
@property (readonly, nonatomic) struct CAFrameRateRange { float x0; float x1; float x2; } presentationPreferredFrameRateRange;
@property (readonly, nonatomic) unsigned int presentationFrameRateRangeReason;
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (readonly, copy, nonatomic) NSSet *components;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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

+ (unsigned long long)requiredCapabilities;
+ (BOOL)isAvailableForConfiguration;
+ (Class)viewClass;

- (void)updateTransitionWhileRubberBandingInProgress:(BOOL)a0;
- (id)view;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)pageView;
- (void)didTransitionToVisible:(BOOL)a0;
- (void)handleAction:(id)a0 fromSender:(id)a1;
- (void)viewDidLoad;
- (void)aggregateBehavior:(id)a0;
- (id)requestedDismissalSettings;
- (void)updateTransitionToVisible:(BOOL)a0 progress:(double)a1 mode:(long long)a2;
- (void)aggregateAppearance:(id)a0;
- (void)willTransitionToVisible:(BOOL)a0;
- (void).cxx_destruct;
- (long long)requestedDismissalType;

@end
