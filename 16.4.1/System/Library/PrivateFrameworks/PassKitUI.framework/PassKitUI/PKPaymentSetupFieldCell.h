@class UIColor, NSString, PKDatePicker, NSArray, PKUITextField, PKPaymentSetupField, UIPickerView;
@protocol PKPaymentSetupFieldCellDelegate;

@interface PKPaymentSetupFieldCell : PKTableViewCell <UITextFieldDelegate, PKDatePickerDelegate, UIPickerViewDelegate, UIPickerViewDataSource> {
    PKDatePicker *_dateInputView;
    UIPickerView *_pickerInputView;
    BOOL _ignoreCurrentValueChangedNotifications;
    NSArray *_defaultLeadingBarButtonGroups;
    NSArray *_defaultTrailingBarButtonGroups;
    NSArray *_defaultCenterBarButtonGroups;
    BOOL _canResignFirstResponder;
    PKUITextField *_textField;
}

@property (weak, nonatomic) id<PKPaymentSetupFieldCellDelegate> delegate;
@property (retain, nonatomic) PKPaymentSetupField *paymentSetupField;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) double minimumTextLabelWidth;
@property (nonatomic) BOOL shouldDrawSeperator;
@property (nonatomic) BOOL shouldDrawFullWidthSeperator;
@property (copy, nonatomic) UIColor *editableTextFieldTextColor;
@property (copy, nonatomic) UIColor *editableTextFieldDisabledTextColor;
@property (copy, nonatomic) UIColor *editableTextFieldCameraCapturedTextColor;
@property (nonatomic) BOOL canResignFirstResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (double)minimumCellHeight;
+ (id)paymentSetupFieldCellForField:(id)a0 fromTableView:(id)a1;

- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorFrame;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (id)editableTextField;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)_editableTextFieldValueChanged:(id)a0;
- (void)_updateDisplay:(BOOL)a0;
- (double)heightForWidth:(double)a0;
- (void)_updateDisplayForFieldTypeDate:(id)a0;
- (void)_updateDisplayForFieldTypeText:(id)a0;
- (void)_applyDefaultValues;
- (void)_editableTextFieldDidBeginEditing:(id)a0;
- (void)_paymentSetupFieldCurrentValueChangedNotification:(id)a0;
- (void)_pullCurrentValueFromField;
- (void)_pushCurrentValueToField;
- (void)_updateDisplayForFieldTypePicker:(id)a0;
- (void)datePicker:(id)a0 didChangeDate:(id)a1;
- (id)initWithSetupField:(id)a0;
- (void)pk_applyAppearance:(id)a0;
- (id)pk_childrenForAppearance;
- (void)updatePaymentSetupFieldWithCurrentCellValue;

@end
