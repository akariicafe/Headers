@class NSString, _UILegibilitySettings, CSPresentation, NSSet, CSAppearance, NSArray, CSBehavior, CSLayoutStrategy, UIColor;
@protocol CSCoverSheetViewControllerProtocol, CSCoverSheetViewPresenting, UICoordinateSpace;

@interface CSPageViewController : CSPresentationViewController <CSPageViewControllerProtocol>

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

+ (Class)viewClass;
+ (unsigned long long)requiredCapabilities;
+ (BOOL)isAvailableForConfiguration;

- (long long)requestedDismissalType;
- (void)willTransitionToVisible:(BOOL)a0;
- (id)pageView;
- (void)aggregateBehavior:(id)a0;
- (id)requestedDismissalSettings;
- (void)aggregateAppearance:(id)a0;
- (void)updateTransitionWhileRubberBandingInProgress:(BOOL)a0;
- (void)didTransitionToVisible:(BOOL)a0;
- (void)handleAction:(id)a0 fromSender:(id)a1;
- (void)updateTransitionToVisible:(BOOL)a0 progress:(double)a1 mode:(long long)a2;
- (void).cxx_destruct;
- (id)view;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
