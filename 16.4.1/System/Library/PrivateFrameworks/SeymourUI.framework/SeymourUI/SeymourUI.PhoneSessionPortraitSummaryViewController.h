@interface SeymourUI.PhoneSessionPortraitSummaryViewController : UIViewController {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ contentSummaryView;
    void /* unknown type, empty encoding */ stringBuilder;
    void /* unknown type, empty encoding */ mediaTagStringBuilder;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ gridView;
    void /* unknown type, empty encoding */ bottomStackView;
    void /* unknown type, empty encoding */ doneButton;
    void /* unknown type, empty encoding */ shareButton;
    void /* unknown type, empty encoding */ cooldownButton;
    void /* unknown type, empty encoding */ ttrButton;
    void /* unknown type, empty encoding */ activityRingsView;
    void /* unknown type, empty encoding */ activityRingsToScrollViewBottomConstraint;
    void /* unknown type, empty encoding */ contentSummaryViewTopConstraint;
    void /* unknown type, empty encoding */ gridViewHeight;
    void /* unknown type, empty encoding */ gridViewWidth;
    void /* unknown type, empty encoding */ gridViewTopSpacing;
    void /* unknown type, empty encoding */ summary;
}

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;

@end
