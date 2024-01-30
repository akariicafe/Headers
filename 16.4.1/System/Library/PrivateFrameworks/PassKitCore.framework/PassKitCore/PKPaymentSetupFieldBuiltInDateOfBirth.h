@interface PKPaymentSetupFieldBuiltInDateOfBirth : PKPaymentSetupFieldDate

@property (readonly, nonatomic) long long minimumAge;

- (BOOL)isBuiltIn;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)updateWithConfiguration:(id)a0;

@end
