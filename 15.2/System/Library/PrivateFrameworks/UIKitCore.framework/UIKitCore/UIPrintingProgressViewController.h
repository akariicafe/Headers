@class UINavigationController, UIWindow, UIPrintingProgress, UIPrintingMessageView;

@interface UIPrintingProgressViewController : UITableViewController {
    UIPrintingProgress *_printingProgress;
    UIPrintingMessageView *_messageView;
    UINavigationController *_navController;
    UIWindow *_window;
    double _rotationDelay;
}

- (void)dismissAnimated:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)setMessage:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)cancelProgress;
- (void)setDonePrinting:(BOOL)a0;
- (void)cleanupAfterDismiss;
- (id)initWithTitle:(id)a0 message:(id)a1 printingProgress:(id)a2;
- (BOOL)visible;
- (void)show;
- (void)doneProgress;
- (double)rotationDelay;

@end
