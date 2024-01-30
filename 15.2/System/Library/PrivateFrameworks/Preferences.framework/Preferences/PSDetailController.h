@class PSEditingPane;

@interface PSDetailController : PSViewController {
    PSEditingPane *_pane;
}

@property (weak, nonatomic) PSEditingPane *pane;

- (void)statusBarWillAnimateByHeight:(double)a0;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadPane;
- (id)title;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)loadView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paneFrame;
- (void)viewDidUnload;
- (void).cxx_destruct;
- (void)suspend;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)saveChanges;

@end
