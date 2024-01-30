@class UIViewController;

@interface TeaUI.DockContainerViewController : UIViewController <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ _rootViewController;
    void /* unknown type, empty encoding */ lazyDockableViewController;
    void /* unknown type, empty encoding */ presentationMode;
    void /* unknown type, empty encoding */ dockView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPressGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dockHeightConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dockedView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expandedViewController;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (id)animationControllerForDismissedController:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)accessibilityPerformMagicTap;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)showDetailViewController:(id)a0 sender:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)showViewController:(id)a0 sender:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dockedViewTapped;
- (void)dockedViewLongPressed;

@end
