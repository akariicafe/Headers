@class UIColor, NSString, NSMutableDictionary, NSMutableArray;

@interface BFFNavigationController : PSRootController <UINavigationControllerDelegate> {
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
@property (nonatomic, getter=isInBackground) BOOL inBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (id)init;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)setDelegate:(id)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (BOOL)_canShowTextServices;
- (unsigned long long)supportedInterfaceOrientations;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)pushViewController:(id)a0 completion:(id /* block */)a1;
- (void)removeDelegateObserver:(id)a0;
- (void)addDelegateObserver:(id)a0;
- (void)_reapObservers;
- (id)initIgnoringDismissals:(BOOL)a0;
- (BOOL)_usesTransitionController;
- (void)popToViewController:(id)a0 completion:(id /* block */)a1;

@end
