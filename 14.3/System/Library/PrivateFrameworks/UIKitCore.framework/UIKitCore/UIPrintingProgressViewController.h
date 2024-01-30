@class UINavigationController, UIWindow, UIPrintingProgress, UIPrintingMessageView;

@interface UIPrintingProgressViewController : UITableViewController {
    UIPrintingProgress *_printingProgress;
    UIPrintingMessageView *_messageView;
    UINavigationController *_navController;
    UIWindow *_window;
    double _rotationDelay;
}

- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)setMessage:(id)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)show;
- (BOOL)visible;
- (void).cxx_destruct;
- (void)setDonePrinting:(BOOL)a0;
- (void)cancelProgress;
- (void)cleanupAfterDismiss;
- (id)initWithTitle:(id)a0 message:(id)a1 printingProgress:(id)a2;
- (double)rotationDelay;
- (void)dismissAnimated:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)doneProgress;

@end
