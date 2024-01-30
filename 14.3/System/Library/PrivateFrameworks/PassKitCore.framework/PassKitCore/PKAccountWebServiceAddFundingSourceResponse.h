@class PKAccountPaymentFundingSource;

@interface PKAccountWebServiceAddFundingSourceResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) PKAccountPaymentFundingSource *fundingSource;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
