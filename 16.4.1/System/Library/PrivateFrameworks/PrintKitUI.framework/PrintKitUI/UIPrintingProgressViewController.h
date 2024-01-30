@class UINavigationController, UIWindow, UIPrintingProgress, UIPrintingMessageView;

@interface UIPrintingProgressViewController : UITableViewController {
    UIPrintingProgress *_printingProgress;
    UIPrintingMessageView *_messageView;
    UINavigationController *_navController;
    UIWindow *_window;
    double _rotationDelay;
}

- (BOOL)visible;
- (void)dismissAnimated:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)show;
- (void)setMessage:(id)a0;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)cancelProgress;
- (void)cleanupAfterDismiss;
- (void)doneProgress;
- (id)initWithTitle:(id)a0 message:(id)a1 printingProgress:(id)a2;
- (double)rotationDelay;
- (void)setDonePrinting:(BOOL)a0;

@end
