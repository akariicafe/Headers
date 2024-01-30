@class PKPeerPaymentQuote;

@interface PKPeerPaymentQuoteResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentQuote *quote;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
