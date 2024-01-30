@interface HealthExperienceUI.TextFieldCollectionViewCell : UICollectionViewListCell {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ $__lazy_storage_$_proxy;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_valueField;
    void /* unknown type, empty encoding */ titleAndValueFieldSideBySideConstraints;
    void /* unknown type, empty encoding */ titleAndValueFieldStackedConstraints;
    void /* unknown type, empty encoding */ isEditEnabled;
}

- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
