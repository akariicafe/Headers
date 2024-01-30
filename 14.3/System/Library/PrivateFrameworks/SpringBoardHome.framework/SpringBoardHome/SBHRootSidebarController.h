@class NSString, _UILegibilitySettings, SBHDateHeaderViewController, WGWidgetGroupViewController, SBHSidebarVisualConfiguration, NSMutableArray, UIViewController, NSLayoutConstraint;
@protocol SBHSidebarProviderDelegate;

@interface SBHRootSidebarController : UIViewController <UIGestureRecognizerDelegate, SBHSidebarProvider>

@property (readonly, nonatomic) SBHDateHeaderViewController *dateViewController;
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

- (void)setEditingIcons:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_configureAvocadoViewController;
- (void)_updateDockHeightConstraint;
- (void)_configureWidgetViewController;
- (void)_configureLayoutMargins;
- (void)_addEditButtonForWidgetGroupViewController:(id)a0;
- (void)_setupConstraintsForViewController:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
