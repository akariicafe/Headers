@interface PKRecurringPaymentSummaryItemValidator : PKPaymentSummaryItemValidator

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)a0;

- (BOOL)isValidWithError:(id *)a0;
- (id)initWithRecurringPaymentSummaryItem:(id)a0;
- (BOOL)isValidWithAPIType:(long long)a0 withError:(id *)a1;

@end
