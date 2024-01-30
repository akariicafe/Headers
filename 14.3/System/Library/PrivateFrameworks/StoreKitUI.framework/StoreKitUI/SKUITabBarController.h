@class NSString, UIViewController, SKUIFloatingOverlayView;

@interface SKUITabBarController : UITabBarController <SKUIMoreNavigationControllerDelegate> {
    SKUIFloatingOverlayView *_floatingOverlayView;
    UIViewController *_floatingOverlayViewController;
    long long _forcedUserInterfaceStyle;
}

@property (nonatomic) BOOL sizeTransitionInProgress;
@property (readonly, nonatomic) BOOL containsTransientViewControllerOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_moreNavigationControllerClass;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (long long)preferredUserInterfaceStyle;
- (id)traitCollection;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)moreNavigationController;
- (void)setTransientViewController:(id)a0 animated:(BOOL)a1;
- (void)_setSelectedViewController:(id)a0;
- (void)moreNavigationController:(id)a0 didSelectItemAtIndex:(long long)a1;
- (long long)forcedUserInterfaceStyle;
- (void)setForcedUserInterfaceStyle:(long long)a0;
- (void)setFloatingOverlayViewController:(id)a0 animated:(BOOL)a1;
- (id)floatingOverlayViewController;
- (void)_layoutFloatingOverlayView;
- (void)cancelTransientViewController:(id)a0;

@end
