@class NSString, NSData, PKPayLaterFinancingPlan, PKAccount;

@interface PKPaymentRewrapResponseBase : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSData *rewrappedPaymentData;
@property (readonly, copy, nonatomic) NSString *transactionIdentifier;
@property (readonly, copy, nonatomic) NSString *primaryAccountNumberSuffix;
@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan;
@property (readonly, nonatomic) PKAccount *account;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
