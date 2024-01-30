@interface Safety.EmergencyAccessBuddyLockScreenMedicalIDViewController : OBTableWelcomeController {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ medicalIDCache;
    void /* unknown type, empty encoding */ initialShowWhenLocked;
    void /* unknown type, empty encoding */ switchCell;
    void /* unknown type, empty encoding */ diffableDataSource;
    void /* unknown type, empty encoding */ tableViewHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableViewHeightLayoutConstraint;
}

- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)didTapCancel:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)viewDidLoad;
- (void)didTapNext:(id)a0;

@end
