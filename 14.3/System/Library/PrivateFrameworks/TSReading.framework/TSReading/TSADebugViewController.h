@class UIViewController, TSADebugTableViewController;

@interface TSADebugViewController : TSKPopoverBasedViewController {
    UIViewController *_delegate;
    TSADebugTableViewController *_debugTableViewController;
}

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithDelegate:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)hideIt:(id)a0;
- (void)showIt:(id)a0;
- (void)addItemWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)toggleVisible:(id)a0;

@end
