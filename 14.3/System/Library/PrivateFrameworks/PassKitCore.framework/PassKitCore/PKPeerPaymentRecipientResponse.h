@class PKPeerPaymentRecipient;

@interface PKPeerPaymentRecipientResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentRecipient *recipient;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
