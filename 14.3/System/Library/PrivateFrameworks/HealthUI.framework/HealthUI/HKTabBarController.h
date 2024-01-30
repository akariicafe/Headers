@class NSString, UIViewController;

@interface HKTabBarController : UITabBarController <UITabBarControllerDelegate>

@property (weak, nonatomic) UIViewController *previousViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)tabBarController:(id)a0 didSelectViewController:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setTabBarControlsHidden:(BOOL)a0 animated:(BOOL)a1;

@end
