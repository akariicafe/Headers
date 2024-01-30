@class EKEvent;

@interface DDEKDayViewController : EKDayViewController

@property (retain) EKEvent *dd_event;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)dd_update_scroll;
- (void)didMoveToParentViewController:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;

@end
