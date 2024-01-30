@class UINavigationController, UIViewController;
@protocol SKUIMoreNavigationControllerDelegate;

@interface SKUIMoreNavigationController : UIMoreNavigationController {
    UINavigationController *_displayedViewController;
    UIViewController *_firstActualViewController;
}

@property (weak, nonatomic) id<SKUIMoreNavigationControllerDelegate> storeKitDelegate;

+ (Class)_moreListControllerClass;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (id)displayedViewController;
- (void)setDisplayedViewController:(id)a0;

@end
