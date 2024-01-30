@class _UILegibilitySettings, NSString, WGWidgetGroupViewController, SBHSidebarVisualConfiguration, NSMutableArray, UIViewController;
@protocol SBHSidebarProviderDelegate;

@interface SBHRootSidebarController : UIViewController <UIGestureRecognizerDelegate, SBHSidebarProvider>

@property (retain, nonatomic) NSMutableArray *widgetViewControllerConstraints;
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
- (void)_setupConstraintsForViewController:(id)a0;
- (void)_configureAvocadoViewController;
- (void)_configureWidgetViewController;
- (BOOL)_canShowWhileLocked;
- (void)_addEditButtonForWidgetGroupViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_configureLayoutMargins;
- (void)viewWillAppear:(BOOL)a0;

@end
