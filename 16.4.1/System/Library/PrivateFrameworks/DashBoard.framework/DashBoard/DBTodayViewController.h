@class DBLayoutHelperView, NSArray, DBTodayViewSynchronizedAnimationManager, DBMapsNavigationWidgetViewController, DBWidgetContainerViewController, NSString, _UILegibilitySettings, NSMutableSet, NSLayoutConstraint;
@protocol DBEnvironment;

@interface DBTodayViewController : UIViewController <DBEnvironmentConfigurationObserving, DBLayoutHelperViewDelegate, DBNavigationStateObserving, BSInvalidatable, DBProcessMonitorObserving, SBHLegibility>

@property (weak, nonatomic) id<DBEnvironment> environment;
@property (retain, nonatomic) DBMapsNavigationWidgetViewController *mapsNavigationWidgetController;
@property (retain, nonatomic) DBWidgetContainerViewController *widgetContainerViewController;
@property (nonatomic) unsigned long long currentLayoutType;
@property (retain, nonatomic) NSArray *currentConstraints;
@property (retain, nonatomic) NSArray *landscapeConstraints;
@property (retain, nonatomic) NSArray *squareConstraints;
@property (retain, nonatomic) NSArray *portraitConstraints;
@property (retain, nonatomic) NSLayoutConstraint *landscapeContainerWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *squareContainerHeightConstraint;
@property (retain, nonatomic) DBTodayViewSynchronizedAnimationManager *animationManager;
@property (retain, nonatomic) NSMutableSet *sceneWidgetsDisabledRequesters;
@property (retain, nonatomic) DBLayoutHelperView *layoutHelperView;
@property (retain, nonatomic) NSString *navigationWidgetBundleIdentifier;
@property (nonatomic) unsigned long long preferredFocusHeading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

+ (BOOL)isEnabledAndSupportedForIconProvider:(id)a0;

- (unsigned long long)_layout;
- (void)setForeground:(BOOL)a0;
- (id)initWithEnvironment:(id)a0;
- (id)preferredFocusEnvironments;
- (void)setActive:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)didChangeLayout:(id)a0;
- (void)_updateNavigationWidgetsForIdentifier:(id)a0;
- (id)linearFocusItems;
- (void)navigationStateProvider:(id)a0 frontmostIdentifierDidChange:(id)a1;
- (void)navigationStateProvider:(id)a0 navigatingIdentifiersDidChange:(id)a1;
- (void)processMonitor:(id)a0 didHandleDeathOfBundleIdentifier:(id)a1;
- (void)processMonitor:(id)a0 shouldHandleDeathOfBundleIdentifier:(id)a1 isCrash:(BOOL)a2;
- (void)reloadConstraints;
- (void)setSceneWidgetsDisabled:(BOOL)a0 forRequester:(id)a1;
- (void)setSmartWidgetCanChangeVisibilityDisabled:(BOOL)a0 forRequester:(id)a1;

@end
