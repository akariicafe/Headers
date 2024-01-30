@class NSArray;

@interface SeymourUI.TVFilterOptionsListViewController : UIViewController {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ visibility;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ lastFocusedIndexPath;
    void /* unknown type, empty encoding */ settlingTimer;
    void /* unknown type, empty encoding */ timerProvider;
    void /* unknown type, empty encoding */ optionsActionsHeightConstraint;
    void /* unknown type, empty encoding */ optionsActionView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ metricPublishingDelegate;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)handleActionButtonTapped;
- (void)menuButtonTapped;

@end
