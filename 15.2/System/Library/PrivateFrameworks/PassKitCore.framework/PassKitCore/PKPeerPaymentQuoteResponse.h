@class PKPeerPaymentQuote;

@interface PKPeerPaymentQuoteResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentQuote *quote;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
