@interface HealthExperienceUI.EmergencyAccessBuddyMedicalIDViewController : OBTableWelcomeController <HKMedicalIDViewControllerDelegate> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ medicalIDCache;
    void /* unknown type, empty encoding */ medicalIDViewController;
    void /* unknown type, empty encoding */ didShowEditMedicalIDOnViewDidAppear;
    void /* unknown type, empty encoding */ tableViewHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableViewHeightLayoutConstraint;
    void /* unknown type, empty encoding */ flow;
    void /* unknown type, empty encoding */ emergencyStatus;
}

- (void)medicalIDViewControllerDidSave:(id)a0;
- (void)medicalIDViewControllerDidCancel:(id)a0;
- (void)medicalIDViewControllerDidUpdate:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (void)didTapCancel:(id)a0;
- (void)didTapNext:(id)a0;

@end
