@interface HealthExperienceUI.SummarySharingSystemContactsPickerViewController : OBWelcomeController <CNContactPickerDelegate, HKSummarySharingEntryStoreDelegate> {
    void /* unknown type, empty encoding */ selectionFlowContext;
    void /* unknown type, empty encoding */ healthExperienceStore;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ sharingStore;
}

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)summarySharingEntryStore:(id)a0 didUpdateReachabilityStatus:(id)a1 error:(id)a2;

@end
