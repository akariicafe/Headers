@interface HealthRecordsUI.RecordCategoryViewController : UIViewController {
    void /* unknown type, empty encoding */ category;
    void /* unknown type, empty encoding */ healthRecordsStore;
    void /* unknown type, empty encoding */ preferredSegment;
    void /* unknown type, empty encoding */ factory;
    void /* unknown type, empty encoding */ countProvider;
    void /* unknown type, empty encoding */ recordCanceller;
    void /* unknown type, empty encoding */ aToZCanceller;
    void /* unknown type, empty encoding */ recordCount;
    void /* unknown type, empty encoding */ currentViewController;
    void /* unknown type, empty encoding */ displayMode;
    void /* unknown type, empty encoding */ isModePickerHidden;
    void /* unknown type, empty encoding */ $__lazy_storage_$_modePicker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationPalette;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lastUpdatedViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_alphabeticalViewController;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)tapToRadar:(id)a0;
- (void)modePickerDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
