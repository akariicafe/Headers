@interface PKPaymentSetupFieldBuiltInPhoneNumber : PKPaymentSetupFieldText

- (BOOL)isBuiltIn;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)_submissionStringForValue:(id)a0;
- (BOOL)hasDisplayFormat;

@end
