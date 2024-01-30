@class UITabBarController;

@interface _UITabBarControllerVisualStyle : NSObject

@property (readonly, weak, nonatomic) UITabBarController *tabBarController;

- (void)teardown;
- (void)prepare;
- (void)loadViews;
- (long long)tabBarPosition;
- (void)updateViewControllers:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithTabBarController:(id)a0;
- (BOOL)transitionFromViewController:(id)a0 toViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (unsigned long long)defaultMaxItems;

@end
