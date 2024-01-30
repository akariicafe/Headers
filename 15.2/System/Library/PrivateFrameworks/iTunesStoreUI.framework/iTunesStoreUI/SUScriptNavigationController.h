@class SUScriptViewController, UINavigationController, SUScriptNavigationBar;

@interface SUScriptNavigationController : SUScriptViewController {
    UINavigationController *_navController;
}

@property (readonly) SUScriptNavigationBar *navigationBar;
@property BOOL navigationBarHidden;
@property (copy) id toolbarHidden;
@property (readonly) SUScriptViewController *topViewController;
@property (retain) id viewControllers;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)setNavigationBar:(id)a0;
- (void)popViewControllerAnimated:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)_className;
- (id)_navigationController;
- (void)setToolbarHidden:(BOOL)a0 animated:(BOOL)a1;
- (id)attributeKeys;
- (void)setNavigationBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)popToRootViewControllerAnimated:(BOOL)a0;
- (void)_setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)scriptAttributeKeys;
- (id)newNativeViewController;
- (id)initWithRootScriptViewController:(id)a0 clientInterface:(id)a1;
- (void)didPerformBatchedInvocations;
- (void)willPerformBatchedInvocations;
- (void)_popToRootViewControllerAnimated:(BOOL)a0;
- (void)_popViewControllerAnimated:(BOOL)a0;
- (void)_pushViewController:(id)a0 animated:(BOOL)a1;
- (id)_filteredViewControllers;
- (id)_copyNativeViewControllersFromScriptViewControllers:(id)a0;
- (void)setTopViewController:(id)a0;

@end
