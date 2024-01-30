@interface WorkflowEditor.EditorDrawerSheetHostingViewController : UIViewController <WFActionDrawerScrollViewObserver> {
    void /* unknown type, empty encoding */ rootView;
    void /* unknown type, empty encoding */ test;
    void /* unknown type, empty encoding */ hostingViewController;
    void /* unknown type, empty encoding */ scrollViewDelegate;
}

- (void)loadView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)activeScrollViewDidChange;

@end
