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

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)traitCollection;
- (id)init;
- (long long)preferredUserInterfaceStyle;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_setSelectedViewController:(id)a0;
- (id)moreNavigationController;
- (void)setTransientViewController:(id)a0 animated:(BOOL)a1;
- (void)_layoutFloatingOverlayView;
- (void)cancelTransientViewController:(id)a0;
- (id)floatingOverlayViewController;
- (long long)forcedUserInterfaceStyle;
- (void)moreNavigationController:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)setFloatingOverlayViewController:(id)a0 animated:(BOOL)a1;
- (void)setForcedUserInterfaceStyle:(long long)a0;

@end
