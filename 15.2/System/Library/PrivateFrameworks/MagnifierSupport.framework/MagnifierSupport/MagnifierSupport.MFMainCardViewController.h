@interface MagnifierSupport.MFMainCardViewController : UIViewController {
    void /* unknown type, empty encoding */ compactConstraints;
    void /* unknown type, empty encoding */ $__lazy_storage_$_regularWidthConstraint;
    void /* unknown type, empty encoding */ boundaryConstraints;
    void /* unknown type, empty encoding */ containedCard;
    void /* unknown type, empty encoding */ cardContainer;
    void /* unknown type, empty encoding */ cardController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_informationLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_landscapeInformationLabel;
    void /* unknown type, empty encoding */ coachingLabel;
    void /* unknown type, empty encoding */ landscapeCoachingLabel;
    void /* unknown type, empty encoding */ topBoundaryConstraint;
    void /* unknown type, empty encoding */ leadingBoundaryConstraint;
    void /* unknown type, empty encoding */ trailingBoundaryConstraint;
    void /* unknown type, empty encoding */ bottomBoundaryConstraint;
    void /* unknown type, empty encoding */ rotationSubscription;
}

- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
