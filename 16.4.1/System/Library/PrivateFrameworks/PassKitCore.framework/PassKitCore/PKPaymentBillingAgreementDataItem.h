@class NSString;

@interface PKPaymentBillingAgreementDataItem : PKPaymentDataItem

@property (readonly, copy, nonatomic) NSString *billingAgreement;

+ (long long)dataType;

- (BOOL)isValidWithError:(id *)a0;
- (long long)context;

@end
