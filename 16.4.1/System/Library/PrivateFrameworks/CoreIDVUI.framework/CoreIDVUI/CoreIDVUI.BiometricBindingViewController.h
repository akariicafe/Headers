@interface CoreIDVUI.BiometricBindingViewController : UIViewController {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ textLabel;
    void /* unknown type, empty encoding */ primaryButton;
    void /* unknown type, empty encoding */ passcodeView;
    void /* unknown type, empty encoding */ authType;
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ target;
    void /* unknown type, empty encoding */ unboundACL;
    void /* unknown type, empty encoding */ biometricsHelper;
    void /* unknown type, empty encoding */ biometricBindingController;
    void /* unknown type, empty encoding */ proofingManager;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ analyticsReporter;
    void /* unknown type, empty encoding */ eligibilityHelper;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cancelButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_activityIndicator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_activityIndicatorBarButtonItem;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)cancelBarButtonClicked;
- (void)performBinding;

@end
