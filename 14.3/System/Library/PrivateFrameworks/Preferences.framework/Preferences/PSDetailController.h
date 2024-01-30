@class PSEditingPane;

@interface PSDetailController : PSViewController {
    PSEditingPane *_pane;
}

@property (weak, nonatomic) PSEditingPane *pane;

- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void)loadPane;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paneFrame;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)suspend;
- (id)title;
- (void)saveChanges;

@end
