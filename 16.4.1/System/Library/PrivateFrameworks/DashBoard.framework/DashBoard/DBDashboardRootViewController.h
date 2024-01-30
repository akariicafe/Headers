@class _TtC9DashBoard22DBDashboardDimmingView, UIView, NSArray, CPUIPassthroughView, DBDashboardHomeViewController, DBAppDockViewController, NSString, UIViewController, CARObserverHashTable, DBDashboardLayoutEngine;
@protocol DBEnvironment, DBDashboardWorkspaceEntityPresenting, BSInvalidatable, CRSIconLayoutVehicleDataProviding;

@interface DBDashboardRootViewController : UIViewController <BSInvalidatable, DBEventHandling>

@property (weak, nonatomic) id<DBEnvironment> environment;
@property (retain, nonatomic) DBDashboardLayoutEngine *layoutEngine;
@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) _TtC9DashBoard22DBDashboardDimmingView *dimmingView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) CPUIPassthroughView *contentView;
@property (retain, nonatomic) UIView *baseContainerView;
@property (retain, nonatomic) UIView *stackedContainerView;
@property (retain, nonatomic) UIViewController<DBDashboardWorkspaceEntityPresenting> *currentBaseViewController;
@property (retain, nonatomic) UIViewController<DBDashboardWorkspaceEntityPresenting> *currentStackedViewController;
@property (retain, nonatomic) CARObserverHashTable *viewStateObservers;
@property (nonatomic) unsigned long long currentViewState;
@property (retain, nonatomic) id<BSInvalidatable> homeScreenElementAssertion;
@property (retain, nonatomic) NSArray *homeViewConstraints;
@property (readonly, nonatomic) id<CRSIconLayoutVehicleDataProviding> iconLayoutDataProvider;
@property (readonly, nonatomic) DBDashboardHomeViewController *homeViewController;
@property (weak, nonatomic) DBAppDockViewController *appDockViewController;
@property (nonatomic) double contentCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEvent:(id)a0;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)invalidate;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)addViewStateObserver:(id)a0;
- (void)removeViewStateObserver:(id)a0;
- (void)_dismissBaseViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_dismissStackedViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_dismissViewController:(id)a0 andPresentBaseViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)_presentBaseViewController:(id)a0 animated:(BOOL)a1 launchSource:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_presentStackedViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_updateHomeConstraints;
- (void)_updateHomeScreenLayoutElementIfNeeded;
- (void)dismissBaseViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dismissStackedViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithEnvironment:(id)a0 layoutEngine:(id)a1;
- (void)presentBaseViewController:(id)a0 animated:(BOOL)a1 launchSource:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)presentStackedViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateAppearanceForWallpaper;

@end
