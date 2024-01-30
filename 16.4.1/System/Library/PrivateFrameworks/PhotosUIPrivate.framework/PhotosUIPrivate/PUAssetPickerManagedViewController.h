@class UISplitViewController, UINavigationController, PUSidebarViewController, PUAssetPickerContainerController, NSString, PUPickerConfiguration;

@interface PUAssetPickerManagedViewController : UIViewController <UINavigationControllerDelegate, UISplitViewControllerDelegate>

@property (readonly, nonatomic) UISplitViewController *splitViewController;
@property (readonly, nonatomic) UINavigationController *contentNavigationController;
@property (readonly, nonatomic) UINavigationController *sidebarNavigationController;
@property (readonly, nonatomic) PUSidebarViewController *sidebarViewController;
@property (readonly, nonatomic) PUPickerConfiguration *configuration;
@property (readonly, nonatomic) PUAssetPickerContainerController *contentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)splitViewControllerDidCollapse:(id)a0;
- (void)splitViewController:(id)a0 willChangeToDisplayMode:(long long)a1;
- (void)splitViewControllerDidExpand:(id)a0;
- (void)_updatePreferredDisplayMode;
- (id)initWithConfiguration:(id)a0 contentViewController:(id)a1;

@end
