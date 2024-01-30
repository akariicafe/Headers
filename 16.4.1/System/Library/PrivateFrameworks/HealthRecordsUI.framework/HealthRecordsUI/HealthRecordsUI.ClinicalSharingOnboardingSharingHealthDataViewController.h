@interface HealthRecordsUI.ClinicalSharingOnboardingSharingHealthDataViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ onboardingSession;
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ selectedItems;
    void /* unknown type, empty encoding */ readyToDismiss;
    void /* unknown type, empty encoding */ cancellable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_spinner;
}

- (void)doneButtonTapped:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)cancelButtonTapped:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;

@end
