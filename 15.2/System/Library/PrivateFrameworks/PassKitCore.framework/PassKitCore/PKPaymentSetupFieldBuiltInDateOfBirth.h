@interface PKPaymentSetupFieldBuiltInDateOfBirth : PKPaymentSetupFieldDate

@property (readonly, nonatomic) long long minimumAge;

- (BOOL)submissionStringMeetsAllRequirements;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (void)updateWithConfiguration:(id)a0;
- (BOOL)isBuiltIn;

@end
