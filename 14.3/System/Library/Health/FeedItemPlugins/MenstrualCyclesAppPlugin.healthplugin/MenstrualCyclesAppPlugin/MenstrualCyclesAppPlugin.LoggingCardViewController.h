@interface MenstrualCyclesAppPlugin.LoggingCardViewController : UIViewController <LoggingCardTableViewObserver> {
    void /* unknown type, empty encoding */ displayType;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerView;
    void /* unknown type, empty encoding */ alphaValue;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ footerHeightConstraint;
    void /* unknown type, empty encoding */ editableDaySummarySection;
    void /* unknown type, empty encoding */ flashedScrollIndicatorOnLoad;
}

- (void)loggingCardTableViewContentSizeChanged:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)infoButtonTapped:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
