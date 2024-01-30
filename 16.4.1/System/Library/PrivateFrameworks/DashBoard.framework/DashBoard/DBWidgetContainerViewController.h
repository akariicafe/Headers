@class DBMapsWidgetViewController, NSString, NSArray, DBInCallWidgetViewController, NSMutableSet, DBNowPlayingWidgetViewController, DBSmartWidgetEngine, DBWidgetStackViewController, DBSmartWidgetViewController;
@protocol DBEnvironment;

@interface DBWidgetContainerViewController : UIViewController <DBSmartWidgetAnimating, BSInvalidatable, DBWidgetSizeManaging>

@property (weak, nonatomic) id<DBEnvironment> environment;
@property (readonly, nonatomic) DBNowPlayingWidgetViewController *nowPlayingWidgetController;
@property (readonly, nonatomic) DBInCallWidgetViewController *inCallWidgetController;
@property (readonly, nonatomic) DBSmartWidgetViewController *smartWidgetController;
@property (retain, nonatomic) DBWidgetStackViewController *primaryWidgetStackViewController;
@property (retain, nonatomic) DBWidgetStackViewController *secondaryWidgetStackViewController;
@property (retain, nonatomic) NSArray *sceneWidgetControllers;
@property (retain, nonatomic) NSArray *currentConstraints;
@property (retain, nonatomic) NSArray *landscapePortraitConstraints;
@property (retain, nonatomic) NSArray *squareConstraints;
@property (retain, nonatomic) DBSmartWidgetEngine *engine;
@property (retain, nonatomic) NSMutableSet *smartWidgetChangeVisibilityDisabledRequesters;
@property (nonatomic) BOOL initialConstraintsSetup;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic, getter=isSmartWidgetHidden) BOOL smartWidgetHidden;
@property (nonatomic, getter=isInCallWidgetHidden) BOOL inCallWidgetHidden;
@property (nonatomic) BOOL sceneWidgetsEnabled;
@property (nonatomic) BOOL sceneWidgetsForeground;
@property (nonatomic) BOOL sceneWidgetsActive;
@property (nonatomic) BOOL hasActiveNavigation;
@property (readonly, nonatomic) DBMapsWidgetViewController *mapsWidgetController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setupConstraints;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_callStatusChanged:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)_canChangeSmartWidgetVisible;
- (void)_reloadConstraints;
- (void)_smartWidgetHiddenDefaultChanged;
- (BOOL)_smartWidgetShouldBeHidden;
- (void)_updateMapWidgetSizes;
- (void)_updateSmartWidgetVisibleIfNecessary;
- (void)_updateStackViewsWithUpdates:(id /* block */)a0 completion:(id /* block */)a1;
- (void)animateSmartWidget:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithEnvironment:(id)a0 animationManager:(id)a1;
- (void)invalidateConstraints;
- (id)linearFocusItems;
- (void)requestSizeChange;
- (void)setSmartWidgetCanChangeVisibilityDisabled:(BOOL)a0 forRequester:(id)a1;

@end
