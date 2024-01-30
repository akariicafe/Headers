@interface Safety.EmergencyAccessBuddyMedicalIDViewController : OBTableWelcomeController <HKMedicalIDViewControllerDelegate> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ medicalIDCache;
    void /* unknown type, empty encoding */ medicalIDViewController;
    void /* unknown type, empty encoding */ didShowEditMedicalIDOnViewDidAppear;
    void /* unknown type, empty encoding */ tableViewHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableViewHeightLayoutConstraint;
}

- (void)medicalIDViewControllerDidCancel:(id)a0;
- (void)medicalIDViewControllerDidSave:(id)a0;
- (void)medicalIDViewControllerDidUpdate:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)didTapCancel:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)viewDidLoad;
- (void)didTapNext:(id)a0;

@end
