@class NSArray, PKPaymentSetupFieldPickerItem;

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField

@property (copy, nonatomic) NSArray *pickerItems;
@property (copy, nonatomic) PKPaymentSetupFieldPickerItem *currentValue;

- (void)updateWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)fieldType;
- (id)displayString;
- (void)updateWithAttribute:(id)a0;
- (id)_submissionStringForValue:(id)a0;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)_commonUpdate;
- (id)currentValue;
- (void)setCurrentValue:(id)a0;

@end
