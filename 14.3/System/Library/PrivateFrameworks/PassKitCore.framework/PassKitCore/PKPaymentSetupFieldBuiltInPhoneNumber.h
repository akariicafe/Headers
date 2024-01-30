@interface PKPaymentSetupFieldBuiltInPhoneNumber : PKPaymentSetupFieldText

- (BOOL)isBuiltIn;
- (id)_submissionStringForValue:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)hasDisplayFormat;

@end
