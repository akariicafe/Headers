@class UIViewController, NSArray, UINavigationController, UIMoreListController;

@interface UIMoreNavigationController : UINavigationController {
    UINavigationController *_originalNavigationController;
    UIViewController *_originalRootViewController;
}

@property (readonly, nonatomic) UIMoreListController *moreListController;
@property (retain, nonatomic) NSArray *moreViewControllers;
@property (nonatomic) BOOL allowsCustomizing;
@property (nonatomic) UIViewController *displayedViewController;
@property (nonatomic) BOOL moreViewControllersChanged;

+ (Class)_moreListControllerClass;

- (id)init;
- (void).cxx_destruct;
- (id)_stateRestorationParentForChildViewController:(id)a0 index:(unsigned long long *)a1;
- (void)_willChangeToIdiom:(long long)a0 onScreen:(id)a1;
- (void)restoreOriginalNavigationControllerIfNecessary:(id)a0;
- (void)_restoreOriginalNavigationController;
- (id)_preparedViewController:(id)a0;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (void)_ensureChildrenHaveParentViewController;
- (void)_redisplayMoreTableView;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;

@end
