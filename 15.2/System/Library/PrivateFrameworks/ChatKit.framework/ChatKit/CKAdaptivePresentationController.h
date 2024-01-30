@class UIPopoverPresentationController, NSString, CKPresentationControllerWindow, UIViewController;

@interface CKAdaptivePresentationController : NSObject <UIPopoverPresentationControllerDelegate, CKAlertControllerDelegate>

@property (retain, nonatomic) UIViewController *presentedViewController;
@property (retain, nonatomic) UIPopoverPresentationController *currentPresentationController;
@property (retain, nonatomic) CKPresentationControllerWindow *presentationWindow;
@property (copy, nonatomic) id /* block */ presentationHandler;
@property (copy, nonatomic) id /* block */ dismissalHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_cleanup;
- (void)_presentViewController:(id)a0 fromViewController:(id)a1 presentationHandler:(id /* block */)a2 barButtonItemPresentationHandler:(id /* block */)a3 dismissalHandler:(id /* block */)a4 animated:(BOOL)a5 completion:(id /* block */)a6;
- (void)presentViewController:(id)a0 fromViewController:(id)a1 barButtonItemPresentationHandler:(id /* block */)a2 dismissalHandler:(id /* block */)a3 animated:(BOOL)a4 completion:(id /* block */)a5;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)popoverPresentationController:(id)a0 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(inout id *)a2;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 fromViewController:(id)a1 presentationHandler:(id /* block */)a2 dismissalHandler:(id /* block */)a3 animated:(BOOL)a4 completion:(id /* block */)a5;
- (void)dealloc;
- (void)alertControllerViewDidDisappear:(id)a0;

@end
