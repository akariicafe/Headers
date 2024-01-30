@class PKPeerPaymentRecipient;

@interface PKPeerPaymentRecipientResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentRecipient *recipient;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
