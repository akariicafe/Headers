@interface PKRecurringPaymentSummaryItemValidator : PKPaymentSummaryItemValidator

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)a0;

- (BOOL)isValidWithError:(id *)a0;
- (BOOL)isValidWithAPIType:(unsigned long long)a0 withError:(id *)a1;
- (id)initWithRecurringPaymentSummaryItem:(id)a0;

@end
