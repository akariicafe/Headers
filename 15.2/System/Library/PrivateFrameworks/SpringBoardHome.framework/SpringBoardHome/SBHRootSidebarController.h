@class _UILegibilitySettings, NSString, WGWidgetGroupViewController, SBHSidebarVisualConfiguration, NSLayoutConstraint, NSMutableArray, UIViewController;
@protocol SBHSidebarProviderDelegate;

@interface SBHRootSidebarController : UIViewController <UIGestureRecognizerDelegate, SBHSidebarProvider>

@property (retain, nonatomic) NSMutableArray *widgetViewControllerConstraints;
@property (retain, nonatomic) NSLayoutConstraint *dockHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) WGWidgetGroupViewController *widgetViewController;
@property (retain, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (nonatomic) unsigned long long layoutInsetsIgnoredEdges;
@property (weak, nonatomic) id<SBHSidebarProviderDelegate> delegate;
@property (retain, nonatomic) UIViewController *avocadoViewController;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (void)_setupConstraintsForViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)_configureAvocadoViewController;
- (void)_configureLayoutMargins;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)_updateDockHeightConstraint;
- (void)_configureWidgetViewController;
- (void)setEditingIcons:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_addEditButtonForWidgetGroupViewController:(id)a0;

@end
