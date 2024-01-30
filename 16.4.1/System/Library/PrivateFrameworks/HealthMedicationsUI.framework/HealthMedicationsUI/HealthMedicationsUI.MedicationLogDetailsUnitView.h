@interface HealthMedicationsUI.MedicationLogDetailsUnitView : UIView <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ detailsDelegate;
    void /* unknown type, empty encoding */ valueText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_valueAffixStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_valueTextField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_countingAffixLabel;
}

- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didChangeText:(id)a0;

@end
