@interface HealthMedicationsUI.MedicationDoseLogMedicationView : UIView {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ logDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_timeFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_medicationNameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_formStrengthLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_medmojiImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_notesLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_skippedButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_takenButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doseAmountTimeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_medicationStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lowerSectionStackViewWithNotes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lowerSectionStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_skippedTakenStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dividerView;
    void /* unknown type, empty encoding */ contentView;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didTapUnitTime:(id)a0;
- (void)didTapRecord:(id)a0;
- (void)didTapSkip:(id)a0;

@end
