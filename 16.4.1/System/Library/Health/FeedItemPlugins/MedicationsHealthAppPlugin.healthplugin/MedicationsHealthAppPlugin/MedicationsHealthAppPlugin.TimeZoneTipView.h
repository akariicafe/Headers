@interface MedicationsHealthAppPlugin.TimeZoneTipView : UIView {
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ onDismiss;
    void /* unknown type, empty encoding */ isUsingVerticalLayout;
    void /* unknown type, empty encoding */ currentConstraints;
    void /* unknown type, empty encoding */ iconImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_detailLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separatorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dismissButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dismissImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_updateScheduleButton;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didTapDismiss;
- (void)didTapUpdateSchedule;

@end
