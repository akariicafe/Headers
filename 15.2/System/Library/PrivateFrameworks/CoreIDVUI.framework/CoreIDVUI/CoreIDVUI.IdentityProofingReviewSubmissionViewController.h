@interface CoreIDVUI.IdentityProofingReviewSubmissionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    void /* unknown type, empty encoding */ tableViewCellIdentifier;
    void /* unknown type, empty encoding */ tableViewRowHeightConstant;
    void /* unknown type, empty encoding */ documentsToBeReviewed;
    void /* unknown type, empty encoding */ primaryButtonHeight;
    void /* unknown type, empty encoding */ secondaryButtonHeight;
    void /* unknown type, empty encoding */ bottomTrayWidthSpacing;
    void /* unknown type, empty encoding */ bottomTrayBottomSpacing;
    void /* unknown type, empty encoding */ scrollViewLeadingSpacing;
    void /* unknown type, empty encoding */ scrollViewTrailingSpacing;
    void /* unknown type, empty encoding */ primaryStackViewTopSpacingDivisor;
    void /* unknown type, empty encoding */ tableViewHeightDivisor;
    void /* unknown type, empty encoding */ orangeTint;
    void /* unknown type, empty encoding */ grayTint;
    void /* unknown type, empty encoding */ darkerGrayTint;
    void /* unknown type, empty encoding */ whiteTint;
    void /* unknown type, empty encoding */ viewConfiguration;
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ documentsRepository;
    void /* unknown type, empty encoding */ biometricBindingController;
    void /* unknown type, empty encoding */ biometricBindingViewController;
    void /* unknown type, empty encoding */ analyticsReporter;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ eligibilityHelper;
    void /* unknown type, empty encoding */ unboundACL;
    void /* unknown type, empty encoding */ hasAttemptedToShowLivenessAlert;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomTray;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cancelBarButton;
}

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)cancelButtonClicked;
- (void)primaryButtonClicked;

@end
