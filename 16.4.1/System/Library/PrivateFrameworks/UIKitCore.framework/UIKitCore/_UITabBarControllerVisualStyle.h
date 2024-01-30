@class UITabBarController;

@interface _UITabBarControllerVisualStyle : NSObject

@property (readonly, weak, nonatomic) UITabBarController *tabBarController;

- (void)teardown;
- (void)prepare;
- (void).cxx_destruct;
- (unsigned long long)defaultMaxItems;
- (id)initWithTabBarController:(id)a0;
- (void)loadViews;
- (long long)tabBarPosition;
- (BOOL)transitionFromViewController:(id)a0 toViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateViewControllers:(BOOL)a0;

@end
