@class UIViewController, TSADebugTableViewController;

@interface TSADebugViewController : TSKPopoverBasedViewController {
    UIViewController *_delegate;
    TSADebugTableViewController *_debugTableViewController;
}

- (id)initWithDelegate:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void)dealloc;
- (void)hideIt:(id)a0;
- (void)addItemWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)showIt:(id)a0;
- (void)toggleVisible:(id)a0;

@end
