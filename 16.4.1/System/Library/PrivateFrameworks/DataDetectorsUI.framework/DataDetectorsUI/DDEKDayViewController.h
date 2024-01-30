@class EKEvent;

@interface DDEKDayViewController : EKDayViewController

@property (retain) EKEvent *dd_event;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)dd_update_scroll;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;

@end
