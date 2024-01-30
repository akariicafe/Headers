@class PKAccountPaymentFundingSource;

@interface PKAccountWebServiceAddFundingSourceResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) PKAccountPaymentFundingSource *fundingSource;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
