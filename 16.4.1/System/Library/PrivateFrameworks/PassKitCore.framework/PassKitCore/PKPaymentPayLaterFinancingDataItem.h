@class PKPayLaterFinancingOption, PKPayLaterProductAssessmentCollection;

@interface PKPaymentPayLaterFinancingDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKPayLaterFinancingOption *selectedFinancingOption;
@property (readonly, nonatomic) PKPayLaterFinancingOption *previouslySelectedFinancingOption;
@property (readonly, nonatomic) PKPayLaterProductAssessmentCollection *assessmentCollection;

+ (long long)dataType;

- (BOOL)isValidWithError:(id *)a0;
- (id)errors;
- (long long)context;
- (id)billingAddress;
- (BOOL)isValidWithError:(id *)a0 errorStatus:(long long *)a1;
- (id)paymentContactFormatErrors;
- (BOOL)requiresBillingAddress;

@end
