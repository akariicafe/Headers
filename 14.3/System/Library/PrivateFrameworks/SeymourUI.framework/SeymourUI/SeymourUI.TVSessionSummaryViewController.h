@class NSArray;

@interface SeymourUI.TVSessionSummaryViewController : UIViewController {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ stringBuilder;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ footerView;
    void /* unknown type, empty encoding */ metricGridView;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ burnBarView;
    void /* unknown type, empty encoding */ activityRingsView;
    void /* unknown type, empty encoding */ gridViewWidthConstraint;
    void /* unknown type, empty encoding */ activityRingsTopPinningConstraint;
    void /* unknown type, empty encoding */ activityRingsBottomPinningConstraint;
    void /* unknown type, empty encoding */ summary;
    void /* unknown type, empty encoding */ genreNames;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)menuButtonTapped;

@end
