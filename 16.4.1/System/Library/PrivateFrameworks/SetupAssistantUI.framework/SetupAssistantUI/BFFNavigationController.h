@class UIColor, NSString, NSMutableDictionary, NSMutableArray;

@interface BFFNavigationController : UINavigationController <UINavigationControllerDelegate> {
    NSMutableArray *_observers;
    NSMutableDictionary *_appearanceHandlers;
    long long _pendingShowOperation;
    UIColor *_backgroundColor;
}

@property (nonatomic) BOOL ignoreDismissals;
@property (nonatomic) struct CGSize { double width; double height; } forcedPreferredContentSize;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL pushWithoutDeferringTransitionsWhileInBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (BOOL)prefersStatusBarHidden;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)setDelegate:(id)a0;
- (long long)preferredStatusBarStyle;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)init;
- (id)popViewControllerAnimated:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (BOOL)_canShowTextServices;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)popToViewController:(id)a0 completion:(id /* block */)a1;
- (void)_reapObservers;
- (BOOL)_usesTransitionController;
- (void)addDelegateObserver:(id)a0;
- (id)initIgnoringDismissals:(BOOL)a0;
- (void)pushViewController:(id)a0 completion:(id /* block */)a1;
- (void)removeDelegateObserver:(id)a0;

@end
