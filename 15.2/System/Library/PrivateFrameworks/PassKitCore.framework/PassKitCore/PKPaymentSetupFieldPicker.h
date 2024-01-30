@class NSArray, PKPaymentSetupFieldPickerItem;

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField

@property (copy, nonatomic) NSArray *pickerItems;
@property (copy, nonatomic) PKPaymentSetupFieldPickerItem *currentValue;

- (void)updateWithAttribute:(id)a0;
- (void)setCurrentValue:(id)a0;
- (id)_submissionStringForValue:(id)a0;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)_commonUpdate;
- (id)displayString;
- (void)updateWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)currentValue;
- (unsigned long long)fieldType;

@end
