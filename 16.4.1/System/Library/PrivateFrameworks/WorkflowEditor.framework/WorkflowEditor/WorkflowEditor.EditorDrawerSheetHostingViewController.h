@interface WorkflowEditor.EditorDrawerSheetHostingViewController : UIViewController <WFActionDrawerScrollViewObserver> {
    void /* unknown type, empty encoding */ rootView;
    void /* unknown type, empty encoding */ test;
    void /* unknown type, empty encoding */ hostingViewController;
    void /* unknown type, empty encoding */ scrollViewDelegate;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)activeScrollViewDidChange;

@end
