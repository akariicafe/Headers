@interface HealthMedicationsUI.MedmojiPickerViewController : UIViewController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_medicationView;
    void /* unknown type, empty encoding */ shapeButton;
    void /* unknown type, empty encoding */ colorButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_medmojiCategorySelectionView;
    void /* unknown type, empty encoding */ shapePublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shapeSelectionViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_colorSelectionViewController;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ config;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)cancelButtonTappped:(id)a0;
- (void)colorButtonTappped:(id)a0;
- (void)doneButtonTappped:(id)a0;
- (void)shapeButtonTappped:(id)a0;

@end
